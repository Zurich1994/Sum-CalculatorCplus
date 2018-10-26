
// 加法计算器终极版.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// C加法计算器终极版App:
// 有关此类的实现，请参阅 加法计算器终极版.cpp
//

class C加法计算器终极版App : public CWinApp
{
public:
	C加法计算器终极版App();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern C加法计算器终极版App theApp;