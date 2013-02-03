// MainDlg.h : interface of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#pragma once

class CMainDlg : public CDialogImpl<CMainDlg>, public CUpdateUI<CMainDlg>,
		public CMessageFilter, public CIdleHandler,public CWinDataExchange<CMainDlg>
{
public:
	enum { IDD = IDD_MAINDLG };

	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL OnIdle();

	BEGIN_UPDATE_UI_MAP(CMainDlg)
	END_UPDATE_UI_MAP()

	BEGIN_MSG_MAP(CMainDlg)
		MESSAGE_HANDLER(WM_INITDIALOG, OnInitDialog)
		MESSAGE_HANDLER(WM_DESTROY, OnDestroy)
		MESSAGE_HANDLER(WM_PAINT,OnPaint)
		COMMAND_ID_HANDLER(IDOK, OnOK)
		COMMAND_ID_HANDLER(IDCANCEL, OnCancel)
		MESSAGE_HANDLER(WM_CTLCOLORSTATIC, OnCtrlColor)
		COMMAND_HANDLER(IDC_BUTTON1, BN_CLICKED, OnBnClickedButton1)
		COMMAND_HANDLER(IDC_BUTTON3, BN_CLICKED, OnBnClickedButton3)
		COMMAND_HANDLER(IDC_BUTTON5, BN_CLICKED, OnBnClickedButton5)
		COMMAND_HANDLER(IDC_BUTTON2, BN_CLICKED, OnBnClickedButton2)
		COMMAND_HANDLER(IDC_BUTTON4, BN_CLICKED, OnBnClickedButton4)
		COMMAND_HANDLER(IDC_BUTTON6, BN_CLICKED, OnBnClickedButton6)
		COMMAND_HANDLER(IDC_BUTTON7, BN_CLICKED, OnBnClickedButton7)
		COMMAND_HANDLER(IDC_BUTTON8, BN_CLICKED, OnBnClickedButton8)
		COMMAND_HANDLER(IDC_BUTTON9, BN_CLICKED, OnBnClickedButton9)
		COMMAND_HANDLER(IDC_BUTTON10, BN_CLICKED, OnBnClickedButton10)
		COMMAND_HANDLER(IDC_BUTTON11, BN_CLICKED, OnBnClickedButton11)
		COMMAND_HANDLER(IDC_BUTTON12, BN_CLICKED, OnBnClickedButton12)
		COMMAND_HANDLER(IDC_OK1, BN_CLICKED, OnBnClickedOk1)
		COMMAND_HANDLER(IDC_OK2, BN_CLICKED, OnBnClickedOk2)
	END_MSG_MAP()

	BEGIN_DDX_MAP(CMainDlg)
		DDX_CONTROL(IDC_MAINTITLE,mainTitle)
		DDX_CONTROL(IDC_HTTP,http)
		DDX_CONTROL(IDC_BOKE,boke)
		DDX_CONTROL(IDC_KEY,key)
		DDX_CONTROL(IDC_OK1,OK1)
		DDX_CONTROL(IDC_OK2,OK2)
		DDX_CONTROL(IDC_STATIC1,notes[0])
		DDX_CONTROL(IDC_STATIC2,notes[1])
		DDX_CONTROL(IDC_STATIC3,notes[2])
		DDX_CONTROL(IDC_STATIC4,notes[3])
		DDX_CONTROL(IDC_STATIC5,notes[4])
		DDX_CONTROL(IDC_STATIC6,notes[5])
		DDX_CONTROL(IDC_STATIC7,notes[6])
		DDX_CONTROL(IDC_STATIC8,notes[7])
		DDX_CONTROL(IDC_STATIC9,notes[8])
		DDX_CONTROL(IDC_STATIC10,notes[9])
		DDX_CONTROL(IDC_STATIC11,notes[10])
		DDX_CONTROL(IDC_STATIC12,notes[11])
	END_DDX_MAP()

// Handler prototypes (uncomment arguments if needed):
//	LRESULT MessageHandler(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
//	LRESULT CommandHandler(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
//	LRESULT NotifyHandler(int /*idCtrl*/, LPNMHDR /*pnmh*/, BOOL& /*bHandled*/)

	LRESULT OnInitDialog(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
	LRESULT OnDestroy(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
	LRESULT OnOK(WORD /*wNotifyCode*/, WORD wID, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnCancel(WORD /*wNotifyCode*/, WORD wID, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	void CloseDialog(int nVal);
	LRESULT OnCtrlColor(UINT, WPARAM wp, LPARAM lp, BOOL&);
	void SetButtonText();
	LRESULT OnPaint(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
	LRESULT OnBnClickedButton1(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnBnClickedButton3(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnBnClickedButton5(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnBnClickedButton2(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnBnClickedButton4(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnBnClickedButton6(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnBnClickedButton7(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnBnClickedButton8(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnBnClickedButton9(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnBnClickedButton10(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnBnClickedButton11(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnBnClickedButton12(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnBnClickedOk1(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
	LRESULT OnBnClickedOk2(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
private:
	CStaticImpl mainTitle,notes[12],key;
	CButtonImpl OK1,OK2;
	CFont mainFont;
	CHyperLink http,boke;
	int note;
	bool canbedraw[12];
};
