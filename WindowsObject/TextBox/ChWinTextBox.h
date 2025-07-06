#ifdef _WINDOWS_

#ifndef Ch_Win_TextBox_h
#define Ch_Win_TextBox_h

#include<string>

#include"../WindObject/ChWindObject.h"

namespace ChWin
{

	class TextBoxBase
	{
		
	public://Get Functions//

		//TextBox�֓��͂ł��镶�����̐���//
		inline unsigned long GetCharLimit()
		{
			return charLimit;
		}

	public://Is Functions//

		inline bool IsSelect() { return selectFlg; }

		inline bool IsChange() { return isChangeFlg; }

	protected://Member Value//

		unsigned long charLimit = 50;

		bool selectFlg = false;
		bool isChangeFlg = false;

	};

	class TextBoxA :public TextBoxBase, public WindObjectA
	{
	public://Create Functions//

		//TextBox�̍쐬//
		void Create(
			HINSTANCE _hIns,
			const char* _startText,
			const ChINTPOINT& _pos,
			const ChINTPOINT& _size,
			const HWND _parentHandl = nullptr);

		//TextBox�̍쐬//
		void Create(
			HINSTANCE _hIns,
			const char* _startText,
			const int _x,
			const int _y,
			const int _w,
			const int _h,
			const HWND _parentHandl = nullptr);

		//TextBox�̍쐬//
		void Create(
			const char* _startText,
			const ChINTPOINT& _pos,
			const ChINTPOINT& _size,
			const WindObjectA& _parentWind);

		//TextBox�̍쐬//
		void Create(
			const char* _startText,
			const int _x,
			const int _y,
			const int _w,
			const int _h,
			const WindObjectA& _parentWind);

	public://SetFunction//

		//TextBox��Text�̓���//
		void SetText(const std::string& _text);

		//TextBox��Text�̓���//
		void SetText(const char* _text,const unsigned int _textLen);

		//TextBox�֓��͂ł��镶�����̐���//
		void SetCharLimit(const unsigned int _size);

	public://Get Functions//

		//TextBox����Text�̏o��//
		std::string GetText();

	public://Other Functions//

		void Select();

		void UnSelect();

	};

	class TextBoxW :public TextBoxBase, public WindObjectW
	{
	public://Create Functions//

		//TextBox�̍쐬//
		void Create(
			HINSTANCE _hIns,
			const wchar_t* _startText,
			const ChINTPOINT& _pos,
			const ChINTPOINT& _size,
			const HWND _parentHandl = nullptr);

		//TextBox�̍쐬//
		void Create(
			HINSTANCE _hIns,
			const wchar_t* _startText,
			const int _x,
			const int _y,
			const int _w,
			const int _h,
			const HWND _parentHandl = nullptr);

		//TextBox�̍쐬//
		void Create(
			const wchar_t* _startText,
			const ChINTPOINT& _pos,
			const ChINTPOINT& _size,
			const WindObjectW& _parentWind);

		//TextBox�̍쐬//
		void Create(
			const wchar_t* _startText,
			const int _x,
			const int _y,
			const int _w,
			const int _h,
			const WindObjectW& _parentWind);

	public://SetFunction//

		//TextBox��Text�̓���//
		void SetText(const std::wstring& _text);
		
		//TextBox��Text�̓���//
		void SetText(const wchar_t* _text, const unsigned int _textLen);

		//TextBox�֓��͂ł��镶�����̐���//
		void SetCharLimit(const unsigned int _size);

	public://Get Functions//

		//TextBox����Text�̏o��//
		std::wstring GetText();

	public://Other Functions//

		void Select();

		void UnSelect();

	};

	using TextBox =
#ifdef UNICODE
		TextBoxW;
#else
		TextBoxA;
#endif
}

#endif

#endif
