
// �ӷ��������ռ���.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// C�ӷ��������ռ���App:
// �йش����ʵ�֣������ �ӷ��������ռ���.cpp
//

class C�ӷ��������ռ���App : public CWinApp
{
public:
	C�ӷ��������ռ���App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern C�ӷ��������ռ���App theApp;