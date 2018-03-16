
// MFCApplication4Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication4.h"
#include "MFCApplication4Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication4Dlg 对话框



CMFCApplication4Dlg::CMFCApplication4Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MFCAPPLICATION4_DIALOG, pParent)
	, m_EditResult(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication4Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_EditResult);
}

BEGIN_MESSAGE_MAP(CMFCApplication4Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_COMMAND_RANGE(IDC_BUTTON1, IDC_BUTTON10, &CMFCApplication4Dlg::OnCmdRange)
	//ON_BN_CLICKED(IDC_BUTTON1, &CMFCApplication4Dlg::OnClickedButton1)
	//ON_BN_CLICKED(IDC_BUTTON2, &CMFCApplication4Dlg::OnClickedButton2)
	//ON_BN_CLICKED(IDC_BUTTON3, &CMFCApplication4Dlg::OnClickedButton3)
	//ON_BN_CLICKED(IDC_BUTTON4, &CMFCApplication4Dlg::OnClickedButton4)
	//ON_BN_CLICKED(IDC_BUTTON5, &CMFCApplication4Dlg::OnClickedButton5)
	//ON_BN_CLICKED(IDC_BUTTON6, &CMFCApplication4Dlg::OnClickedButton6)
	//ON_BN_CLICKED(IDC_BUTTON7, &CMFCApplication4Dlg::OnClickedButton7)
	//ON_BN_CLICKED(IDC_BUTTON8, &CMFCApplication4Dlg::OnClickedButton8)
	//ON_BN_CLICKED(IDC_BUTTON9, &CMFCApplication4Dlg::OnClickedButton9)
	//ON_BN_CLICKED(IDC_BUTTON10, &CMFCApplication4Dlg::OnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON12, &CMFCApplication4Dlg::OnClickedButtonadd)
	ON_BN_CLICKED(IDC_BUTTON13, &CMFCApplication4Dlg::OnClickedButtonmin)
	ON_BN_CLICKED(IDC_BUTTON14, &CMFCApplication4Dlg::OnClickedButtonmult)
	ON_BN_CLICKED(IDC_BUTTON15, &CMFCApplication4Dlg::OnClickedButtondiv)
END_MESSAGE_MAP()


// CMFCApplication4Dlg 消息处理程序
 
BOOL CMFCApplication4Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFCApplication4Dlg::OnPaint()
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
HCURSOR CMFCApplication4Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCApplication4Dlg::OnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CMFCApplication4Dlg::OnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CMFCApplication4Dlg::OnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CMFCApplication4Dlg::OnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CMFCApplication4Dlg::OnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CMFCApplication4Dlg::OnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CMFCApplication4Dlg::OnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CMFCApplication4Dlg::OnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CMFCApplication4Dlg::OnClickedButton9()
{
	UpdateData(TRUE);
	if (m_EditResult == L'9') {
	
		m_EditResult = L"9";
	}

	// TODO: 在此添加控件通知处理程序代码
	else
		m_EditResult += L"0";
	UpdateData(FALSE);
}



void CMFCApplication4Dlg::OnClickedButton10()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	m_EditResult += L"0";
	UpdateData(FALSE);
}

void CMFCApplication4Dlg::OnCmdRange(UINT uID) {
	UpdateData(TRUE);
	if (uID == IDC_BUTTON10)
	{
		uID = IDC_BUTTON1 - 1;
	}
	if (m_EditResult[0] == L'0')
	{
		m_EditResult.Format(L"%d", uID - IDC_BUTTON1 + 1);
	}
	else
	{
		m_EditResult.Format(L"%s%d", m_EditResult, uID - IDC_BUTTON1 + 1);
	}
	//m_EditResult += L"8";
	UpdateData(FALSE);
}


void CMFCApplication4Dlg::OnClickedButtonadd()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	m_EditResult += L"+";
	UpdateData(FALSE);
}


void CMFCApplication4Dlg::OnClickedButtonmin()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	m_EditResult += L"-";
	UpdateData(FALSE);
}


void CMFCApplication4Dlg::OnClickedButtonmult()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	m_EditResult += L"*";
	UpdateData(FALSE);
}


void CMFCApplication4Dlg::OnClickedButtondiv()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	m_EditResult += L"/";
	UpdateData(FALSE);
}
