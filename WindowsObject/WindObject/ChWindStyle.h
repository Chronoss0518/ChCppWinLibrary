#ifdef _WINDOWS_

#ifndef Ch_Win_WOStyle_h
#define Ch_Win_WOStyle_h

namespace ChWin
{

	//WindowStyle���Ǘ�����N���X//
	class WindStyle
	{
	public://Add Function//

		//Window�ɘg��t����//
		inline void AddBorder() { windStyle |= WS_BORDER; }

		//Window�Ƀ^�C�g����t����//
		inline void AddCaption() { windStyle |= WS_CAPTION; }

		//Window�Ɏq�K�w������t����//
		inline void AddChild() { windStyle |= WS_CHILD; }

		//Window�z����Window�̕`��͈͂�`�悵�Ȃ��悤�ɂ���//
		inline void AddClipChildren() { windStyle |= WS_CLIPCHILDREN; }

		//Window�z����Window���m���d�Ȃ��Ă��镔����`�悵�Ȃ��悤�ɂ���//
		inline void AddClipSiblings() { windStyle |= WS_CLIPSIBLINGS; }

		//Window�͏������_�Ŗ�����Ԃɂ���//
		inline void AddDisabled() { windStyle |= WS_DISABLED; }

		//Window�Ƀ_�C�A���O�{�b�N�X�Ɠ������E����t����//
		inline void AddDLGFrame() { windStyle |= WS_DLGFRAME; }

		//Window��Control�ł���O���[�v�̍ŏ��ł��邱�Ƃ��`����//
		inline void AddGroup() { windStyle |= WS_GROUP; }

		//Window�ɐ����̃X�N���[���o�[��t����//
		inline void AddHScroll() { windStyle |= WS_HSCROLL; }

		//Window�͍ŏ�����T�C�Y���ő��Ԃŕ\�������//
		inline void AddMaxmize() { windStyle |= WS_MAXIMIZE; }

		//Window�ɍő剻�{�^����t����//
		inline void AddMaximaizeBox() { windStyle |= WS_MAXIMIZEBOX; }

		//Window�͍ŏ�����T�C�Y���ŏ���Ԃŕ\�������//
		inline void AddMinimize() { windStyle |= WS_MINIMIZE; }

		//Window�ɍŏ����{�^����t����//
		inline void AddMinimizeBox() { windStyle |= WS_MINIMIZEBOX; }

		//Window�Ƀ^�C�g���o�[�Ƌ��E����������Window���d�˂�//
		inline void AddOverlapped() { windStyle |= WS_OVERLAPPED; }

		//Overlapped��Caption,SysMenu,SyzeBox,MinimizeBox,MaximizeBox��ǉ����������X�^�C��//
		inline void AddOverlappedWindow() { windStyle |= WS_OVERLAPPEDWINDOW; }

		//Window���|�b�v�A�b�v�E�B���h�E�ɂ���B�������Child�ƕ��p�ł��Ȃ�//
		inline void AddPopup() { windStyle |= WS_POPUP; }

		//Popup��Border,SysMenu��ǉ����������X�^�C��//
		inline void AddPopupWindow() { windStyle |= WS_POPUPWINDOW; }

		//Window�ɃT�C�Y��ύX�\�ȋ��E����t����//
		inline void AddSizeBox() { windStyle |= WS_SIZEBOX; }

		//Window�̃^�C�g���o�[�ɃE�B���h�E���j���[��t����//
		inline void AddSysMenu() { windStyle |= WS_SYSMENU; }

		//Window��User��Tab�L�[���������ۂɃt�H�[�J�X���󂯎���悤�ɂ���//
		inline void AddTabStop() { windStyle |= WS_TABSTOP; }

		//Window���ŏ�����\�������悤�ɂ���//
		inline void AddVisible() { windStyle |= WS_VISIBLE; }

		//Window�ɐ����X�N���[���o�[��t����//
		inline void AddVScroll() { windStyle |= WS_VSCROLL; }

		//�w�肵���X�^�C����t����//
		inline void AddStyle(const unsigned long _windStyles) { windStyle |= _windStyles; }

	public://Set Function//

		inline void SetStyle(const unsigned long _windStyles) { windStyle = _windStyles; }

	public://Get Function//

		inline unsigned long GetStyle()const { return windStyle; }

	public:

		//�Z�b�g����Ă���Style��0�ɂ���//
		inline void Clear() { windStyle = 0; }

	private:

		unsigned long windStyle = 0;

	};
}

#endif

#endif