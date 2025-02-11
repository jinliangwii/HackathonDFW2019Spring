// faceDlgDlg.h : header file
//

#pragma once
#include "ContentRendering.h"
//#include "CloudClient.h"

#define IMAGE_HANDLED_MESSAGE  (WM_APP + 1)


// CfaceDlgDlg dialog
class CfaceDlgDlg : public CDialog
{
// Construction

private:

	 ContentRendering* _content;
 

public:
	CfaceDlgDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_FACEDLG_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	//IplImage* faceImage;

	//CloudClient cloudClient;


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
	afx_msg void OnBnClickedEnroll();
	afx_msg void OnBnClickedMatch();
	afx_msg void OnBnClickedCapture();
	afx_msg void OnBnClickedStartfacedetect();
	afx_msg void OnBnClickedStopfacedetect();
	afx_msg void OnBnClickedCapture2();
};
