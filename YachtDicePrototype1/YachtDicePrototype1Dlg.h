
// YachtDicePrototype1Dlg.h : header file
//

#pragma once


// CYachtDicePrototype1Dlg dialog
class CYachtDicePrototype1Dlg : public CDialogEx
{
// Construction
public:
	CYachtDicePrototype1Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_YACHTDICEPROTOTYPE1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CImage main;

	afx_msg void OnBnClickedButtonSingle();
	CBitmapButton m_single_bmp;
	CBitmapButton m_dual_bmp;
	afx_msg void OnClickedButtonDual();
};
