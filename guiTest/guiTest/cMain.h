#pragma once
#include "wx/wx.h"
#include "wx/stattext.h"
#include "wx/msgdlg.h"
#include "cEditorFrame.h"
class cMain : public wxFrame
{
private:
	bool has_COVID;
	bool button_Pressed = false;
	wxToolBar* m_ToolBar = nullptr;
	wxMenuBar* m_MenuBar = nullptr;


	void OnMenu1(wxCommandEvent& evt);
	void OnMenu2(wxCommandEvent& evt);
	void OnMenu3(wxCommandEvent& evt);
	void OnMenu4(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
public:
	cMain();
	~cMain();
public:
	wxButton* m_btn1 = nullptr, * m_btn2 = nullptr, * m_btn3 = nullptr, * m_btn4 = nullptr, * m_btn5 = nullptr, * m_btn6 = nullptr;
	wxStaticText* m_text = nullptr, * m_text1 = nullptr;;
	wxMessageDialog* m_msg = nullptr, * m_msg1 = nullptr;
	wxTextCtrl* m_txt1 = nullptr, * m_txt2 = nullptr;
	wxPanel* panel1 = nullptr;
	void OnYesButtonClicked(wxCommandEvent& evt);
	void OnNoButtonClicked(wxCommandEvent& evt);
	void OnSaveButtonClicked(wxCommandEvent& evt);
	void OnEnterButtonClicked(wxCommandEvent& evt);
	void OnScheduleButtonClicked(wxCommandEvent& evt);

};


