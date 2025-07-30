#ifdef _WINDOWS_

#ifndef Ch_Win_KeyInput_h
#define Ch_Win_KeyInput_h

#include"../../../ChCppBaseLibrary/CPP/ChKeyInputBase/ChKeyInputBase.h"

namespace ChWin
{
	class WinKeyInput : public ChCpp::KeyInputBase
	{
	public:

		void Update()override;
	};
}

#endif

#endif