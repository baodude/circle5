// MainDlg.cpp : implementation of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "resource.h"

#include "MainDlg.h"
#include ".\maindlg.h"

BOOL CMainDlg::PreTranslateMessage(MSG* pMsg)
{
	return CWindow::IsDialogMessage(pMsg);
}

BOOL CMainDlg::OnIdle()
{
	return FALSE;
}

LRESULT CMainDlg::OnInitDialog(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	// center the dialog on the screen
	CenterWindow();

	// set icons
	HICON hIcon = (HICON)::LoadImage(_Module.GetResourceInstance(), MAKEINTRESOURCE(IDR_MAINFRAME), 
		IMAGE_ICON, ::GetSystemMetrics(SM_CXICON), ::GetSystemMetrics(SM_CYICON), LR_DEFAULTCOLOR);
	SetIcon(hIcon, TRUE);
	HICON hIconSmall = (HICON)::LoadImage(_Module.GetResourceInstance(), MAKEINTRESOURCE(IDR_MAINFRAME), 
		IMAGE_ICON, ::GetSystemMetrics(SM_CXSMICON), ::GetSystemMetrics(SM_CYSMICON), LR_DEFAULTCOLOR);
	SetIcon(hIconSmall, FALSE);

	// register object for message filtering and idle updates
	CMessageLoop* pLoop = _Module.GetMessageLoop();
	ATLASSERT(pLoop != NULL);
	pLoop->AddMessageFilter(this);
	pLoop->AddIdleHandler(this);

	UIAddChildWindowContainer(m_hWnd);

	DoDataExchange(false);
	mainFont.CreateFont(36,0,0,0,FW_BOLD,true,false,false,DEFAULT_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH|FF_SWISS,TEXT("黑体"));
	mainTitle.SetFont(mainFont);

	http.SetHyperLink("http://www.heishanjazz.com");
	boke.SetHyperLink("http://you.video.sina.com.cn/hsjazz");
	note=0;
	SetButtonText();
	for(int i=0;i<=11;i++)
	{
		canbedraw[i]=false;
	}

	return TRUE;
}

LRESULT CMainDlg::OnPaint(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	CPaintDC hdc(m_hWnd);
	::MoveToEx(hdc,600,50,NULL);
	::LineTo(hdc,600,250);
	::MoveToEx(hdc,500,150,NULL);
	::LineTo(hdc,700,150);
	::MoveToEx(hdc,550,50,NULL);
	::LineTo(hdc,650,250);
	::MoveToEx(hdc,500,100,NULL);
	::LineTo(hdc,700,200);
	::MoveToEx(hdc,650,50,NULL);
	::LineTo(hdc,550,250);
	::MoveToEx(hdc,700,100,NULL);
	::LineTo(hdc,500,200);
	::ReleaseDC(m_hWnd,hdc);
	return TRUE;
}

LRESULT CMainDlg::OnCtrlColor(UINT, WPARAM wp, LPARAM lp, BOOL&)
{
	SetBkMode((HDC)wp, TRANSPARENT);
	if((HANDLE)lp==mainTitle)
	{
		SetTextColor((HDC)wp, RGB(63, 34,100));
		return (LRESULT)AtlGetStockBrush(NULL_BRUSH);
	}
	if(((HANDLE)lp==notes[0])&(canbedraw[0]==true))
	{
		if(note==0) SetTextColor((HDC)wp, RGB(255,0,0));
		else SetTextColor((HDC)wp, RGB(0,0,255));
		return (LRESULT)AtlGetStockBrush(NULL_BRUSH);
	}
	if(((HANDLE)lp==notes[1])&(canbedraw[1]==true))
	{
		if(note==1) SetTextColor((HDC)wp, RGB(255,0,0));
		else SetTextColor((HDC)wp, RGB(0,0,255));
		return (LRESULT)AtlGetStockBrush(NULL_BRUSH);
	}
	if(((HANDLE)lp==notes[2])&(canbedraw[2]==true))
	{
		if(note==2) SetTextColor((HDC)wp, RGB(255,0,0));
		else SetTextColor((HDC)wp, RGB(0,0,255));
		return (LRESULT)AtlGetStockBrush(NULL_BRUSH);
	}
	if(((HANDLE)lp==notes[3])&(canbedraw[3]==true))
	{
		if(note==3) SetTextColor((HDC)wp, RGB(255,0,0));
		else SetTextColor((HDC)wp, RGB(0,0,255));
		return (LRESULT)AtlGetStockBrush(NULL_BRUSH);
	}
	if(((HANDLE)lp==notes[4])&(canbedraw[4]==true))
	{
		if(note==4) SetTextColor((HDC)wp, RGB(255,0,0));
		else SetTextColor((HDC)wp, RGB(0,0,255));
		return (LRESULT)AtlGetStockBrush(NULL_BRUSH);
	}
	if(((HANDLE)lp==notes[5])&(canbedraw[5]==true))
	{
		if(note==5) SetTextColor((HDC)wp, RGB(255,0,0));
		else SetTextColor((HDC)wp, RGB(0,0,255));
		return (LRESULT)AtlGetStockBrush(NULL_BRUSH);
	}
	if(((HANDLE)lp==notes[6])&(canbedraw[6]==true))
	{
		if(note==6) SetTextColor((HDC)wp, RGB(255,0,0));
		else SetTextColor((HDC)wp, RGB(0,0,255));
		return (LRESULT)AtlGetStockBrush(NULL_BRUSH);
	}
	if(((HANDLE)lp==notes[7])&(canbedraw[7]==true))
	{
		if(note==7) SetTextColor((HDC)wp, RGB(255,0,0));
		else SetTextColor((HDC)wp, RGB(0,0,255));
		return (LRESULT)AtlGetStockBrush(NULL_BRUSH);
	}
	if(((HANDLE)lp==notes[8])&(canbedraw[8]==true))
	{
		if(note==8) SetTextColor((HDC)wp, RGB(255,0,0));
		else SetTextColor((HDC)wp, RGB(0,0,255));
		return (LRESULT)AtlGetStockBrush(NULL_BRUSH);
	}
	if(((HANDLE)lp==notes[9])&(canbedraw[9]==true))
	{
		if(note==9) SetTextColor((HDC)wp, RGB(255,0,0));
		else SetTextColor((HDC)wp, RGB(0,0,255));
		return (LRESULT)AtlGetStockBrush(NULL_BRUSH);
	}
	if(((HANDLE)lp==notes[10])&(canbedraw[10]==true))
	{
		if(note==10) SetTextColor((HDC)wp, RGB(255,0,0));
		else SetTextColor((HDC)wp, RGB(0,0,255));
		return (LRESULT)AtlGetStockBrush(NULL_BRUSH);
	}
	if(((HANDLE)lp==notes[11])&(canbedraw[11]==true))
	{
		if(note==11) SetTextColor((HDC)wp, RGB(255,0,0));
		else SetTextColor((HDC)wp, RGB(0,0,255));
		return (LRESULT)AtlGetStockBrush(NULL_BRUSH);
	}
	return (LRESULT)AtlGetStockBrush(NULL_BRUSH);
}

LRESULT CMainDlg::OnDestroy(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	// unregister message filtering and idle updates
	CMessageLoop* pLoop = _Module.GetMessageLoop();
	ATLASSERT(pLoop != NULL);
	pLoop->RemoveMessageFilter(this);
	pLoop->RemoveIdleHandler(this);

	return 0;
}

LRESULT CMainDlg::OnOK(WORD /*wNotifyCode*/, WORD wID, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
	// TODO: Add validation code 
	CloseDialog(wID);
	return 0;
}

LRESULT CMainDlg::OnCancel(WORD /*wNotifyCode*/, WORD wID, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
	CloseDialog(wID);
	return 0;
}

void CMainDlg::CloseDialog(int nVal)
{
	DestroyWindow();
	::PostQuitMessage(nVal);
}

LRESULT CMainDlg::OnBnClickedButton1(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
	note=0;
	SetButtonText();
	return 0;
}

LRESULT CMainDlg::OnBnClickedButton2(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
	note=1;
	SetButtonText();
	return 0;
}

LRESULT CMainDlg::OnBnClickedButton3(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
	note=2;
	SetButtonText();
	return 0;
}

LRESULT CMainDlg::OnBnClickedButton4(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
	note=3;
	SetButtonText();
	return 0;
}

LRESULT CMainDlg::OnBnClickedButton5(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
	note=4;
	SetButtonText();
	return 0;
}

LRESULT CMainDlg::OnBnClickedButton6(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
	note=5;
	SetButtonText();
	return 0;
}

LRESULT CMainDlg::OnBnClickedButton7(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
	note=6;
	SetButtonText();
	return 0;
}

LRESULT CMainDlg::OnBnClickedButton8(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
	note=7;
	SetButtonText();
	return 0;
}

LRESULT CMainDlg::OnBnClickedButton9(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
	note=8;
	SetButtonText();
	return 0;
}

LRESULT CMainDlg::OnBnClickedButton10(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
	note=9;
	SetButtonText();
	return 0;
}

LRESULT CMainDlg::OnBnClickedButton11(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
	note=10;
	SetButtonText();
	return 0;
}

LRESULT CMainDlg::OnBnClickedButton12(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
	note=11;
	SetButtonText();
	return 0;
}

LRESULT CMainDlg::OnBnClickedOk1(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
	key.SetWindowText("口诀:\n    顺一反数七个音");
	int i;
	int j;
	for(i=0;i<=11;i++)
	{
		canbedraw[i]=false;
	}
	for(i=0;i<=6;i++)
	{
		j=i+note-1;
		if(j<0) j=j+12;
		canbedraw[j%12]=true;
	}
	Invalidate();
	return 0;
}

LRESULT CMainDlg::OnBnClickedOk2(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/)
{
	key.SetWindowText("口诀:\n    反一顺数七个音");
	int i;
	int j;
	for(i=0;i<=11;i++)
	{
		canbedraw[i]=false;
	}
	for(i=6;i>=0;i--)
	{
		j=note-i+1;
		if(j<0) j=j+12;
		canbedraw[j%12]=true;
	}
	Invalidate();
	return 0;
}

void CMainDlg::SetButtonText()
{
	CString buttonlabel;
	switch(note)
	{
	case 0:
		buttonlabel="C";
		break;
	case 1:
		buttonlabel="G";
		break;
	case 2:
		buttonlabel="D";
		break;
	case 3:
		buttonlabel="A";
		break;
	case 4:
		buttonlabel="E";
		break;
	case 5:
		buttonlabel="B";
		break;
	case 6:
		buttonlabel="F#/Gb";
		break;
	case 7:
		buttonlabel="Db/C#";
		break;
	case 8:
		buttonlabel="Ab/G#";
		break;
	case 9:
		buttonlabel="Eb/D#";
		break;
	case 10:
		buttonlabel="Bb/A#";
		break;
	case 11:
		buttonlabel="F";
		break;
	}
	OK1.SetWindowText(buttonlabel+"调包括哪些音");
	OK2.SetWindowText(buttonlabel+"音属于哪些调");
}