
// MFCApplication4Dlg.h : ͷ�ļ�
//

#pragma once


// CMFCApplication4Dlg �Ի���
class CMFCApplication4Dlg : public CDialogEx
{
// ����
public:
	CMFCApplication4Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION4_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedButton1();
	afx_msg void OnClickedButton2();
	afx_msg void OnClickedButton3();
	afx_msg void OnClickedButton4();
	afx_msg void OnClickedButton5();
	afx_msg void OnClickedButton6();
	afx_msg void OnClickedButton7();
	afx_msg void OnClickedButton8();
	afx_msg void OnClickedButton9();
	afx_msg void OnClickedButton10();
	afx_msg void OnCmdRange(UINT uID);
	CString m_EditResult;
	afx_msg void OnClickedButtonadd();
	afx_msg void OnClickedButtonmin();
	afx_msg void OnClickedButtonmult();
	afx_msg void OnClickedButtondiv();
//	afx_msg void OnClickedButtonequal();
	afx_msg void OnClickedButtonkLeft();
	afx_msg void OnClickedButtonkRight();
	afx_msg void OnClickedButtondian();
	afx_msg void OnClickedButtonpower();
	afx_msg void OnClickedButtonequal();
	bool isKuoHaoPiPei(CString m_EditResult);//�ж������Ƿ�ƥ��
	bool centerValueLast(string &m_EditResult);//��׺ת��׺
	static int denghao1;
	bool isOperator(char a);//�ж��Ƿ��������
	int priority(char op);//�ж����ȼ���
};
