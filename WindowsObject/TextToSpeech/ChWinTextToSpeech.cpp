#include<Windows.h>
#include"../../../ChCppBaseLibrary/BaseIncluder/ChBase.h"
#include"../../../ChCppBaseLibrary/CPP/ChMultiThread/ChMultiThread.h"
#include <sapi.h>

#include"ChWinTextToSpeech.h"

using namespace ChWin;

TextToSpeech::TextToSpeech()
{
	thread = new ChCpp::MultiThread();
	thread->Init([&]() {

		if (FAILED(::CoInitialize(NULL)))return;

		while (!endFlg)
		{
			if (stopFlg)
			{
				StopFunction();
				stopFlg = false;
				continue;
			}

			if (speachText == L"")continue;

			if (ChPtr::NullCheck(voice))
				if(FAILED(CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void**)&voice)))continue;

			if (ChPtr::NullCheck(voice))continue;
			voice->Speak(speachText.c_str(), SPF_ASYNC, NULL);
			speachText = L"";
		}

		StopFunction();

		::CoUninitialize();

	});
}

TextToSpeech::~TextToSpeech()
{
	Release();
}

void TextToSpeech::Release()
{
	if (thread == nullptr)return;
	endFlg = true;
	thread->Join();
	thread->Release();
	delete thread;
	thread = nullptr;
}

void TextToSpeech::Speech(const std::wstring& _speach)
{
	speachText = _speach;
}

void TextToSpeech::Stop()
{
	stopFlg = true;
}

void TextToSpeech::StopFunction()
{
	if (ChPtr::NullCheck(voice))return;

	voice->Release();
	voice = nullptr;
}