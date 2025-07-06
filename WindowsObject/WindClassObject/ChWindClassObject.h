#ifdef _WINDOWS_

#ifndef Ch_Win_CWind_h
#define Ch_Win_CWind_h

#include"../../ClassParts/ChCPInitializer.h"

namespace ChWin
{
	class WindClassStyle;

	template<typename CharaType>
	class WindClassObjectBase
	{
	protected:

		std::basic_string<CharaType> className = ChStd::GetZeroChara<CharaType>();
	};

	//WindowsAPI�̓�WindowClass��p�����I�u�W�F�N�g���i��N���X//
	class WindClassObjectA:public ChCp::Initializer,public WindClassObjectBase<char>
	{
	public://ConstructorDestructor//

		inline WindClassObjectA() { Init(); }

		inline WindClassObjectA(const WNDCLASSA& _cls) { Init(_cls); }

		inline ~WindClassObjectA() { Release(); }
		
	public://InitAndRelease//

		void Init();

		void Init(const WNDCLASSA& _cls);

		void Release();

	public://SetFunction//

		void SetStyle(const unsigned int _style);

		void SetStyle(const WindClassStyle* _style);

		void SetIcon(const HICON _icon);

		void SetCursol(const HCURSOR _cursor);

		//�E�B���h�E�N���X�\���̌�̒ǉ��o�C�g��//
		void SetClsExtra(const int _byteNum = 0);

		//�E�B���h�E�C���X�^���X�̌�̒ǉ��o�C�g��//
		void SetWndExtra(const int _byteNum = 0);

		void SetBackgroundColor(const HBRUSH _brush);

		void SetInstance(const HINSTANCE _hInst);

		void SetWindProcedure(WNDPROC _windProc);

		void SetMenuName(const char* _name);

	public://GetFunction//

		const char* GetWindClassName();

	public:

		bool IsSystemRegistClassName(const char* _className);

	public://Other Fucntions//

		//Set�֐����Z�b�g���ꂽ�������ɃN���X��o�^����//
		//�N���X�����󕶎��̏ꍇ�͓o�^����Ȃ�//
		void RegistClass(const char* _className);


	protected:

		WNDCLASSA cls;
	};

	//WindowsAPI�̓�WindowClass��p�����I�u�W�F�N�g���i��N���X//
	class WindClassObjectW :public ChCp::Initializer, public WindClassObjectBase<wchar_t>
	{
	public://ConstructorDestructor//

		inline WindClassObjectW() { Init(); }

		inline WindClassObjectW(const WNDCLASSW& _cls) { Init(_cls); }

		inline ~WindClassObjectW() { Release(); }

	public://InitAndRelease//

		void Init();

		void Init(const WNDCLASSW& _cls);

		void Release();

	public://SetFunction//

		void SetStyle(const unsigned int _style);

		void SetStyle(const WindClassStyle* _style);

		void SetIcon(const HICON _icon);

		void SetCursol(const HCURSOR _cursor);

		//�E�B���h�E�N���X�\���̌�̒ǉ��o�C�g��//
		void SetClsExtra(const int _byteNum = 0);

		//�E�B���h�E�C���X�^���X�̌�̒ǉ��o�C�g��//
		void SetWndExtra(const int _byteNum = 0);

		void SetBackgroundColor(const HBRUSH _brush);

		void SetInstance(const HINSTANCE _hInst);

		void SetWindProcedure(WNDPROC _windProc);

		void SetMenuName(const wchar_t* _name);

	public://GetFunction//

		const wchar_t* GetWindClassName();

	public:

		bool IsSystemRegistClassName(const wchar_t* _className);

	public://Other Fucntions//

		//Set�֐����Z�b�g���ꂽ�������ɃN���X��o�^����//
		//�N���X�����󕶎��̏ꍇ�͓o�^����Ȃ�//
		void RegistClass(const wchar_t* _className);


	protected:

		WNDCLASSW cls;
};


	using WindClassObject =
#ifdef UNICODE
		WindClassObjectW;
#else
		WindClassObjectA;
#endif

}


#endif

#endif
