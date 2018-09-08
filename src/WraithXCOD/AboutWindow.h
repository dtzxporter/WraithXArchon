#pragma once

#define _AFXDLL // AFX Shared DLL
#define _WIN32_WINNT 0x0601 // Windows 7+

#include <afxwin.h>
#include <afxcview.h>

// We need the resources
#include "resource.h"

// We need the WraithWindow and WraithAboutDialog classes
#include "WraithWindow.h"
#include "WraithAboutDialog.h"

// The Evil Within about window
class AboutWindow : public WraithAboutDialog
{
public:
	// Make a new about window
	AboutWindow(CWnd* pParent = NULL) : WraithAboutDialog(IDD_ABOUTDLG, pParent) { }

protected:

	// Handle adding the about text
	virtual void OnBeforeLoad()
	{
		// Call base
		WraithAboutDialog::OnBeforeLoad();
		// Setup about
		this->AddColorText("Wraith Archon - The Call of Duty asset exporter\n", RGB(50, 205, 50), 16, true);
		this->AddColorText("Developed by ", RGB(255, 255, 255), 13);
		this->AddColorText("DTZxPorter", RGB(236, 52, 202), 13, true);
		this->AddColorText(", some game research by ", RGB(255, 255, 255), 13);
		this->AddColorText("id-daemon", RGB(52, 152, 219), 13, true);
		this->AddColorText(".\n", RGB(255, 255, 255), 13);
		this->AddColorText("\n", RGB(255, 255, 255), 13);
		// Provided warning
		this->AddColorText("These tools are provided as-is with no warranty provided.\nYou must take note that EVERY asset exported using this tool is property of the game you extracted it from. Therefore you may not use them in any commercial environment and or profit off of them.\n\n", RGB(255, 255, 255), 13);
		// Rehost
		this->AddColorText("These tools may not be re-hosted at all. You must link directly to the Wraith extraction tools page. (", RGB(255, 255, 255), 13);
		this->AddColorText("http://aviacreations.com/wraith", RGB(255, 255, 255), 13, false, true, true);
		this->AddColorText(")\n\n", RGB(255, 255, 255), 13);
		// Changelog
		this->AddColorText("-- Changelog is available on the site --", RGB(50, 205, 50), 13);
	}
};