
// MFCApplication4Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFCApplication4.h"
#include "MFCApplication4Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication4Dlg �Ի���



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
