
// MFCApplication4Dlg.cpp : ʵ���ļ�
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


// CMFCApplication4Dlg �Ի���

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


// CMFCApplication4Dlg ��Ϣ�������
 
BOOL CMFCApplication4Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CMFCApplication4Dlg::OnPaint()
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
HCURSOR CMFCApplication4Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCApplication4Dlg::OnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CMFCApplication4Dlg::OnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CMFCApplication4Dlg::OnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CMFCApplication4Dlg::OnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CMFCApplication4Dlg::OnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CMFCApplication4Dlg::OnClickedButton6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CMFCApplication4Dlg::OnClickedButton7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CMFCApplication4Dlg::OnClickedButton8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CMFCApplication4Dlg::OnClickedButton9()
{
	UpdateData(TRUE);
	if (m_EditResult == L'9') {
	
		m_EditResult = L"9";
	}

	// TODO: �ڴ���ӿؼ�֪ͨ����������
	else
		m_EditResult += L"0";
	UpdateData(FALSE);
}



void CMFCApplication4Dlg::OnClickedButton10()
{
	UpdateData(TRUE);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
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
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_EditResult += L"+";
	UpdateData(FALSE);
}


void CMFCApplication4Dlg::OnClickedButtonmin()
{
	UpdateData(TRUE);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_EditResult += L"-";
	UpdateData(FALSE);
}


void CMFCApplication4Dlg::OnClickedButtonmult()
{
	UpdateData(TRUE);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_EditResult += L"*";
	UpdateData(FALSE);
}


void CMFCApplication4Dlg::OnClickedButtondiv()
{
	UpdateData(TRUE);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_EditResult += L"/";
	UpdateData(FALSE);
}


//void CMFCApplication4Dlg::OnClickedButtonequal()
//{
//	// TODO: �ڴ���ӿؼ�֪ͨ����������
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
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_EditResult += L"(";
	UpdateData(FALSE);
}


void CMFCApplication4Dlg::OnClickedButtonkRight()
{
	UpdateData(TRUE);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_EditResult += L")";
	UpdateData(FALSE);
}


void CMFCApplication4Dlg::OnClickedButtondian()
{
	UpdateData(TRUE);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_EditResult += L".";
	UpdateData(FALSE);
}


void CMFCApplication4Dlg::OnClickedButtonpower()
{
	UpdateData(TRUE);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_EditResult += L"^";
	UpdateData(FALSE);
}




void CMFCApplication4Dlg::OnClickedButtonequal()
{
	UpdateData(TRUE);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	bool i=isKuoHaoPiPei(m_EditResult);
	if (i ==0)
		m_EditResult = L"���Ų�ƥ�䣬���ʽ����";
	else {
		string s = CT2A(m_EditResult);
	}
	UpdateData(FALSE);
	denghao1 = 1;
	
	

}

bool CMFCApplication4Dlg::isKuoHaoPiPei(CString m_EditResult)
// ����һ����ջ�������ַ����ַ���β������ַ��ǡ�h��������ѹ��ջ�С�����ַ��ǡ�������
//��ô��ջΪ�գ���return false;��ջ��Ϊ�գ���ջ��Ԫ�ص��������������һ���ַ�ʱ��
//���ջβ�գ������return false��
{
	stack<char> S;
	if (!S.empty())
		S.swap(stack<char>());
	string s = CT2A(m_EditResult);
	bool judge = 1;
	int l = s.length();
	int k = 0;//ջ���Ƿ���Ԫ��
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


//����ʵ��˼·�� 
����һ���������ջstack������ֻ��ɨ����׺���ʽ

(1) ����������֣�ֱ�ӷŵ���׺���ʽβ��
(2) ����������������
a : ����ʱջ�գ���ֱ����ջ��
	b : ѭ������ջstack�����ҵ�ǰ��������ȼ�С�ڻ����ջ������������ȼ�����ջ����������γ�ջ�����ں�׺���ʽβ��
	c : ��ջstack�����ҵ�ǰ��������ȼ�����ջ����������ȼ����򽫴������ֱ����ջ��
	d : ����ǰ�����Ϊ��(��ֱ����ջ.
		e:����ǰ�����Ϊ��)����ջ��Ԫ�س�ջ���ں�׺���ʽβ, ֱ�������������(��, ע�⡯(�� �� ��)���������ں�׺���ʽβ;

����ִ��(1), (2), ֱ��������׺���ʽɨ�����, ����ʱջstack��Ϊ��, ��ջ����������γ�ջ���ں�׺���ʽβ.

��ʱ�Ϳ���ʵ�ֽ���׺���ʽת���ɺ�׺���ʽ.

��θ�����׺���ʽ�������ʾʽ��ֵ ?
http ://blog.csdn.net/geekcoder/article/details/6829386