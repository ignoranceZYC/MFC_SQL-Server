#pragma once


// mianMenu 对话框

class mianMenu : public CDialogEx
{
	DECLARE_DYNAMIC(mianMenu)

public:
	mianMenu(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~mianMenu();

// 对话框数据
	enum { IDD = IDD_MAINMENU };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedClose();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton8();
};
