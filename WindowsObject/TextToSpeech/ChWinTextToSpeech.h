#ifdef _WINDOWS_

#ifndef Ch_Win_TextToSpeech_h
#define Ch_Win_TextToSpeech_h
#endif

#include<string>

struct ISpVoice;

namespace ChCpp
{
	class MultiThread;
}

namespace ChWin
{
	class TextToSpeech final
	{
	public:

		TextToSpeech();

		~TextToSpeech();

	public:

		void Release();

	public:

		void Speech(const std::wstring& _speach);

		void Stop();

	private:

		ChCpp::MultiThread* thread = nullptr;
		ISpVoice* voice = nullptr;

		std::wstring speachText = L"";
		bool endFlg = false;
	};
}

#endif