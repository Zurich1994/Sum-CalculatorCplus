
// �ӷ��������ռ���Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// C�ӷ��������ռ���Dlg �Ի���
class C�ӷ��������ռ���Dlg : public CDialogEx
{
// ����
public:
	C�ӷ��������ռ���Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MY_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	float m_edit;
	int m_button7;
	int m_button8;
	int m_button9;
	int m_button4;
	int m_button5;
	int m_button6;
	int m_button1;
	int m_button2;
	int m_button3;
	int m_button0;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	CEdit m_editcontrol;
	int m_times;
//	void aaa(void);
	void aaa(void);
	afx_msg void OnBnClickedButton11();
	float m_value1;
	float m_value2;
	float m_value3;
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton13();
	afx_msg void On32771();
	afx_msg void On32772();
	afx_msg void OnEnChangeEdit1();
};
