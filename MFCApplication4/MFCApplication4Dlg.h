
// MFCApplication4Dlg.h : 头文件
//

#pragma once


// CMFCApplication4Dlg 对话框
class CMFCApplication4Dlg : public CDialogEx
{
// 构造
public:
	CMFCApplication4Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION4_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
	bool isKuoHaoPiPei(CString m_EditResult);//判断括号是否匹配
	bool centerValueLast(string &m_EditResult);//中缀转后缀
	static int denghao1;
	bool isOperator(char a);//判断是否是运算符
	int priority(char op);//判断优先级别
};
