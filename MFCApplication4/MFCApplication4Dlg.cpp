
// MFCApplication4Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFCApplication4.h"
#include "MFCApplication4Dlg.h"
#include "afxdialogex.h"
#include<iostream>
#include<stack>
#include<string>
#include<cctype>
#include<cmath>

using namespace std;


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication4Dlg 对话框

int CMFCApplication4Dlg::denghao1 = 0;

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
//	ON_BN_CLICKED(IDC_BUTTON16, &CMFCApplication4Dlg::OnClickedButtonequal)
	ON_BN_CLICKED(IDC_BUTTON17, &CMFCApplication4Dlg::OnClickedButtonkLeft)
	ON_BN_CLICKED(IDC_BUTTON18, &CMFCApplication4Dlg::OnClickedButtonkRight)
	ON_BN_CLICKED(IDC_BUTTON11, &CMFCApplication4Dlg::OnClickedButtondian)
	ON_BN_CLICKED(IDC_BUTTON19, &CMFCApplication4Dlg::OnClickedButtonpower)
	ON_BN_CLICKED(IDC_BUTTON16, &CMFCApplication4Dlg::OnClickedButtonequal)
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
	if (denghao1 == 1) {
		UpdateData(TRUE);
		m_EditResult = L"";
		UpdateData(FALSE);
		denghao1 = 0;
	}
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


//void CMFCApplication4Dlg::OnClickedButtonequal()
//{
//	// TODO: 在此添加控件通知处理程序代码
//}


void CMFCApplication4Dlg::OnClickedButtonkLeft()
{
	if (denghao1 == 1) {
		UpdateData(TRUE);
		m_EditResult = L"";
		UpdateData(FALSE);
		denghao1 = 0;
	}
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	m_EditResult += L"(";
	UpdateData(FALSE);
}


void CMFCApplication4Dlg::OnClickedButtonkRight()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	m_EditResult += L")";
	UpdateData(FALSE);
}


void CMFCApplication4Dlg::OnClickedButtondian()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	m_EditResult += L".";
	UpdateData(FALSE);
}


void CMFCApplication4Dlg::OnClickedButtonpower()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	m_EditResult += L"^";
	UpdateData(FALSE);
}




void CMFCApplication4Dlg::OnClickedButtonequal()
{
	UpdateData(TRUE);
	// TODO: 在此添加控件通知处理程序代码
	bool i=isKuoHaoPiPei(m_EditResult);
	if (i ==0)
		m_EditResult = L"括号不匹配，表达式错误";
	else {
		string s = CT2A(m_EditResult);
	}
	UpdateData(FALSE);
	denghao1 = 1;
	
	

}

bool CMFCApplication4Dlg::isKuoHaoPiPei(CString m_EditResult)
// 定义一个空栈，读入字符至字符串尾。如果字符是“h”，则将其压入栈中。如果字符是“）”，
//那么若栈为空，则return false;若栈不为空，则将栈顶元素弹出。当读到最后一个字符时，
//如果栈尾空，则输出return false。
{
	stack<char> S;
	if (!S.empty())
		S.swap(stack<char>());
	string s = CT2A(m_EditResult);
	bool judge = 1;
	int l = s.length();
	int k = 0;//栈里是否有元素
	for (int i = 0;i < l;i++) {
		if (s[i] == '(') {
			S.push(s[i]);
		}
		else if (s[i] == ')') {
			if (S.empty()) {
				judge = 0;
			}
			else {
				S.pop();
			}
		}		
	}
	if ( !S.empty())
			judge = 0;
	return judge;
}

bool CMFCApplication4Dlg::centerValueLast(string & s)
{
	int i = 0, j = 0;
	stack<char> S;
	if (!S.empty())
		S.swap(stack<char>());
	int l = s.length();
	for(i = 0,j=0;i < l;i++) {
		if (s[i] >= '0'&&s[i] <= '9' || s[i] == '.') {
			s[j] = s[i];
			j++;
		}
		else if (isOperator(s[i])) {
			if (S.empty())
				S.push(s[i]);
			else if (priority(S.top()) {

			}
		}
	}
	return false;
}

bool CMFCApplication4Dlg::isOperator(char a)
{
	if (a == '+' || a == '-' || a == '*' || a == '/')
		return true;
	else
	return false;
}

int CMFCApplication4Dlg::priority(char op)
{
	switch (op)
	{
	case '(':
		return 0;
	case '+':
	case '-':
		return 1;
	case '*':
	case '/':
		return 2;
	default:
		return -1;
	}
}


//程序实现思路： 
设置一个运算符的栈stack，从左只有扫描中缀表达式

(1) 如果遇到数字，直接放到后缀表达式尾；
(2) 如果遇到遇到运算符
a : 若此时栈空，则直接入栈；
	b : 循环：若栈stack不空且当前运算符优先级小于或等于栈顶运算符的优先级，则将栈顶运算符依次出栈，置于后缀表达式尾；
	c : 若栈stack不空且当前运算符优先级大于栈顶运算符优先级，则将此运算符直接入栈；
	d : 若当前运算符为’(‘直接入栈.
		e:若当前运算符为’)’则将栈顶元素出栈置于后缀表达式尾, 直到遇到运算符’(‘, 注意’(’ 与 ‘)’不用置于后缀表达式尾;

反复执行(1), (2), 直到整个中缀表达式扫描完毕, 若此时栈stack不为空, 则将栈顶运算符依次出栈置于后缀表达式尾.

此时就可以实现将中缀表达式转换成后缀表达式.

如何根据中缀表达式来计算表示式的值 ?
http ://blog.csdn.net/geekcoder/article/details/6829386