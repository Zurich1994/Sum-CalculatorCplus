
// 加法计算器终极版Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "加法计算器终极版.h"
#include "加法计算器终极版Dlg.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
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


// C加法计算器终极版Dlg 对话框




C加法计算器终极版Dlg::C加法计算器终极版Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(C加法计算器终极版Dlg::IDD, pParent)
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

void C加法计算器终极版Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_edit);
	DDX_Control(pDX, IDC_EDIT1, m_editcontrol);
}

BEGIN_MESSAGE_MAP(C加法计算器终极版Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &C加法计算器终极版Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &C加法计算器终极版Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &C加法计算器终极版Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &C加法计算器终极版Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &C加法计算器终极版Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &C加法计算器终极版Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &C加法计算器终极版Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON9, &C加法计算器终极版Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &C加法计算器终极版Dlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &C加法计算器终极版Dlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &C加法计算器终极版Dlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON8, &C加法计算器终极版Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON13, &C加法计算器终极版Dlg::OnBnClickedButton13)
	ON_COMMAND(ID_32771, &C加法计算器终极版Dlg::On32771)
	ON_COMMAND(ID_32772, &C加法计算器终极版Dlg::On32772)
	ON_EN_CHANGE(IDC_EDIT1, &C加法计算器终极版Dlg::OnEnChangeEdit1)
END_MESSAGE_MAP()


// C加法计算器终极版Dlg 消息处理程序

BOOL C加法计算器终极版Dlg::OnInitDialog()
{
	
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
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

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void C加法计算器终极版Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void C加法计算器终极版Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR C加法计算器终极版Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void C加法计算器终极版Dlg::aaa(void)
{
	m_edit=0;
	m_times=0;
	m_value1=0;
}
void C加法计算器终极版Dlg::OnBnClickedButton1()
{
	m_button7=7;
	m_times++;
	m_edit=m_edit*10+7;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void C加法计算器终极版Dlg::OnBnClickedButton2()
{
	m_button8=8;
	m_times++;
	m_edit=m_edit*10+8;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void C加法计算器终极版Dlg::OnBnClickedButton3()
{
	m_button9=9;
	m_times++;
	m_edit=m_edit*10+9;

	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void C加法计算器终极版Dlg::OnBnClickedButton4()
{
	m_button4=4;
	m_times++;
	m_edit=m_edit*10+4;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void C加法计算器终极版Dlg::OnBnClickedButton5()
{
	m_button5=5;
	m_times++;
	m_edit=m_edit*10+5;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void C加法计算器终极版Dlg::OnBnClickedButton6()
{
	m_button6=6;
	m_times++;
	m_edit=m_edit*10+6;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void C加法计算器终极版Dlg::OnBnClickedButton7()
{
	m_button1=1;
    m_times++;
	m_edit=m_edit*10+1;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}
void C加法计算器终极版Dlg::OnBnClickedButton8()
{
	m_button2=2;
	m_times++;
	m_edit=m_edit*10+2;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void C加法计算器终极版Dlg::OnBnClickedButton9()
{
	m_button3=3;
	m_times++;
	m_edit=m_edit*10+3;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void C加法计算器终极版Dlg::OnBnClickedButton10()
{
	m_button0=0;
	m_times++;
	m_edit=m_edit*10+0;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


//void C加法计算器终极版Dlg::aaa(void)
//{
//
//}




void C加法计算器终极版Dlg::OnBnClickedButton11()
{
	m_value1=+m_edit;
	m_edit=0;
	m_times=0;
	UpdateData(false);



	// TODO: 在此添加控件通知处理程序代码
}


void C加法计算器终极版Dlg::OnBnClickedButton12()
{

	m_edit=m_edit+m_value1;
	UpdateData(false);
	void aaa();
	// TODO: 在此添加控件通知处理程序代码
}




void C加法计算器终极版Dlg::OnBnClickedButton13()
{
	void aaa();
	m_edit=0;
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}


void C加法计算器终极版Dlg::On32771()
{
	CAboutDlg dlg;
	dlg.DoModal();
	// TODO: 在此添加命令处理程序代码
}


void C加法计算器终极版Dlg::On32772()
{
	DestroyWindow();
	// TODO: 在此添加命令处理程序代码
}


void C加法计算器终极版Dlg::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
