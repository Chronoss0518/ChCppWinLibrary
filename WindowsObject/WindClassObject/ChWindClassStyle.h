#ifdef _WINDOWS_

#ifndef Ch_Win_WCStyle_h
#define Ch_Win_WCStyle_h

namespace ChWin
{
	class WindClassStyle
	{
	public://Add Function//

		//�E�B�h�E�̃N���C�A���g�̈��X�����̃o�C�g�̈�ɂ��낦��//
		inline void AddByteAlingnClient() { classStyle |= CS_BYTEALIGNCLIENT; }

		//�E�B�h�E��X�����̃o�C�g���E�ɂ��낦��//
		inline void AddByteAlingnWindow() { classStyle |= CS_BYTEALIGNWINDOW; }

		//�N���X����1�̃f�o�C�X�R���e�L�X�g�����L����//
		inline void AddClassDC() { classStyle |= CS_CLASSDC; }

		//�N���X�ɑ�����E�B���h�E���Ń_�u���N���b�N������ƃE�B���h�E�v���V�[�W���\���󂯎���//
		inline void AddDBLClick() { classStyle |= CS_DBLCLKS; }

		//�E�B���h�E�Ƀh���b�v�V���h�E���ʂ�t����(�{�^�����N���b�N�����Ƃ��̗l�ȋ���)//
		inline void AddDropShadow() { classStyle |= CS_DROPSHADOW; }

		//�v���Z�X���̑��̂��ׂẴ��W���[���Ŏg�p�ł���悤�ɂ���//
		inline void AddGlobalClass() { classStyle |= CS_GLOBALCLASS; }

		//�E�B���h�E�̕����ړ���T�C�Y�ύX�ɂ���ĕω������ꍇ�ɍĕ`�悷��//
		inline void AddHReDraw() { classStyle |= CS_HREDRAW; }

		//�E�B���h�E���̕���{�^���𖳌�������//
		inline void AddNoClose() { classStyle |= CS_NOCLOSE; }

		//���̃N���X�𗘗p�����E�B���h�E���Ɉ�ӂ̃f�o�C�X�R���e�L�X�g��^����//
		inline void AddOWNDC() { classStyle |= CS_OWNDC; }

		//�q�E�B���h�E���e�E�B���h�E�ɕ`��ł���悤�ɂ���//
		inline void AddParentDC() { classStyle |= CS_PARENTDC; }

		//�E�B���h�E�ɂ���ĉB����Ă��镔�����r�b�g�}�b�v�Ƃ��ĕێ�����//
		inline void AddSaveBits() { classStyle |= CS_SAVEBITS; }

		//�E�B���h�E�̍������ړ���T�C�Y�ύX�ɂ���ĕω������ꍇ�ɍĕ`�悷��//
		inline void AddVReDraw() { classStyle |= CS_VREDRAW; }

	public://Set Function//

		inline void SetStyle(const unsigned long _style) { classStyle = _style; }

	public://Get Function//

		inline unsigned long GetStyle()const { return classStyle; }

	public:

		//�Z�b�g����Ă���Style��0�ɂ���//
		inline void Clear() { classStyle = 0; }

	private:

		unsigned long classStyle = 0;

	};
}

#endif

#endif