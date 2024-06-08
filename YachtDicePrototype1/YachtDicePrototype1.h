
// YachtDicePrototype1.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CYachtDicePrototype1App:
// See YachtDicePrototype1.cpp for the implementation of this class
//

class CYachtDicePrototype1App : public CWinApp
{
public:
	CYachtDicePrototype1App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CYachtDicePrototype1App theApp;
