#include<Windows.h>

#include"../../../ChCppBaseLibrary/BasePack/ChStd.h"
#include"ChWinKeyInput.h"

void ChWin::WinKeyInput::Update()
{

	unsigned char keyCode[256];
	int tmp = GetKeyboardState(keyCode);
	SetAllFlgDown();

	for (unsigned short i = 0; i < 256; i++)
	{
		if (!(keyCode[i] & ChStd::MAX_CHAR_BIT))continue;

		SetKeyFlg((unsigned char)i,true);
	}
}