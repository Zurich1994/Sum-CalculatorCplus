
// �ӷ��������ռ���Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�ӷ��������ռ���.h"
#include "�ӷ��������ռ���Dlg.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// C�ӷ��������ռ���Dlg �Ի���




C�ӷ��������ռ���Dlg::C�ӷ��������ռ���Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(C�ӷ��������ռ���Dlg::IDD, pParent)
	, m_edit(0)
	, m_button7(0)
	, m_button8(0)
	, m_button9(0)
	, m_button4(0)
	, m_button5(0)
	, m_button6(0)
	, m_button1(0)
	, m_button2(0)
	, m_button3(0)
	, m_button0(0)
	, m_times(0)
	, m_value1(0)
	, m_value2(0)
	, m_value3(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void C�ӷ��������ռ���Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_edit);
	DDX_Control(pDX, IDC_EDIT1, m_editcontrol);
}

BEGIN_MESSAGE_MAP(C�ӷ��������ռ���Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &C�ӷ��������ռ���Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &C�ӷ��������ռ���Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &C�ӷ��������ռ���Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &C�ӷ��������ռ���Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &C�ӷ��������ռ���Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &C�ӷ��������ռ���Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &C�ӷ��������ռ���Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON9, &C�ӷ��������ռ���Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &C�ӷ��������ռ���Dlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &C�ӷ��������ռ���Dlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &C�ӷ��������ռ���Dlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON8, &C�ӷ��������ռ���Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON13, &C�ӷ��������ռ���Dlg::OnBnClickedButton13)
	ON_COMMAND(ID_32771, &C�ӷ��������ռ���Dlg::On32771)
	ON_COMMAND(ID_32772, &C�ӷ��������ռ���Dlg::On32772)
	ON_EN_CHANGE(IDC_EDIT1, &C�ӷ��������ռ���Dlg::OnEnChangeEdit1)
END_MESSAGE_MAP()


// C�ӷ��������ռ���Dlg ��Ϣ�������

BOOL C�ӷ��������ռ���Dlg::OnInitDialog()
{
	
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void C�ӷ��������ռ���Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void C�ӷ��������ռ���Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR C�ӷ��������ռ���Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void C�ӷ��������ռ���Dlg::aaa(void)
{
	m_edit=0;
	m_times=0;
	m_value1=0;
}
void C�ӷ��������ռ���Dlg::OnBnClickedButton1()
{
	m_button7=7;
	m_times++;
	m_edit=m_edit*10+7;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C�ӷ��������ռ���Dlg::OnBnClickedButton2()
{
	m_button8=8;
	m_times++;
	m_edit=m_edit*10+8;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C�ӷ��������ռ���Dlg::OnBnClickedButton3()
{
	m_button9=9;
	m_times++;
	m_edit=m_edit*10+9;

	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C�ӷ��������ռ���Dlg::OnBnClickedButton4()
{
	m_button4=4;
	m_times++;
	m_edit=m_edit*10+4;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C�ӷ��������ռ���Dlg::OnBnClickedButton5()
{
	m_button5=5;
	m_times++;
	m_edit=m_edit*10+5;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C�ӷ��������ռ���Dlg::OnBnClickedButton6()
{
	m_button6=6;
	m_times++;
	m_edit=m_edit*10+6;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C�ӷ��������ռ���Dlg::OnBnClickedButton7()
{
	m_button1=1;
    m_times++;
	m_edit=m_edit*10+1;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
void C�ӷ��������ռ���Dlg::OnBnClickedButton8()
{
	m_button2=2;
	m_times++;
	m_edit=m_edit*10+2;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C�ӷ��������ռ���Dlg::OnBnClickedButton9()
{
	m_button3=3;
	m_times++;
	m_edit=m_edit*10+3;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C�ӷ��������ռ���Dlg::OnBnClickedButton10()
{
	m_button0=0;
	m_times++;
	m_edit=m_edit*10+0;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


//void C�ӷ��������ռ���Dlg::aaa(void)
//{
//
//}




void C�ӷ��������ռ���Dlg::OnBnClickedButton11()
{
	m_value1=+m_edit;
	m_edit=0;
	m_times=0;
	UpdateData(false);



	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C�ӷ��������ռ���Dlg::OnBnClickedButton12()
{

	m_edit=m_edit+m_value1;
	UpdateData(false);
	void aaa();
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}




void C�ӷ��������ռ���Dlg::OnBnClickedButton13()
{
	void aaa();
	m_edit=0;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void C�ӷ��������ռ���Dlg::On32771()
{
	CAboutDlg dlg;
	dlg.DoModal();
	// TODO: �ڴ���������������
}


void C�ӷ��������ռ���Dlg::On32772()
{
	DestroyWindow();
	// TODO: �ڴ���������������
}


void C�ӷ��������ռ���Dlg::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
