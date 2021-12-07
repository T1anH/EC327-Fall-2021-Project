#include "cMain.h"
#include <fstream>
#include <iostream>
wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_MENU(10006, cMain::OnMenu1)
EVT_MENU(10007, cMain::OnMenu2)
EVT_MENU(10008, cMain::OnMenu3)
EVT_MENU(10009, cMain::OnMenu4)
EVT_BUTTON(10001, OnYesButtonClicked)
EVT_BUTTON(10002, OnNoButtonClicked)
EVT_BUTTON(10003, OnSaveButtonClicked)
EVT_BUTTON(10004, OnEnterButtonClicked)
EVT_BUTTON(10005, OnScheduleButtonClicked)
wxEND_EVENT_TABLE()
bool cond;

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "TestGUI - EC327", wxPoint(30, 30), wxSize(800, 600))
//cMain::cMain() : wxMDIParentFrame(nullptr, wxID_ANY, "TestGUI - EC327", wxPoint(30, 30), wxSize(800, 600))
{
	m_btn1 = new wxButton(this, 10001, "Yes", wxPoint(200, 300), wxSize(50, 20));
	m_btn2 = new wxButton(this, 10002, "No", wxPoint(400, 300), wxSize(50, 20));
	m_btn3 = new wxButton(this, 10003, "Save Response to .txt file", wxPoint(250, 400), wxSize(150, 20));
	m_text = new wxStaticText(this, wxID_ANY, "Have you experienced a new onset of any of the following symptoms in the past 14 days?\nFever of 100°F or feeling unusually hot with shivering / chills, sore throat, new cough not related to a chronic condition, difficulty breathing / shortness of breath, severe fatigue, severe muscle aches, new loss of sense of taste or smell ? ", wxPoint(250, 100), wxSize(200, 200));
	m_msg = new wxMessageDialog(this, "Results Saved!", "Results Confirmation", wxOK | wxCENTRE, wxDefaultPosition);
	m_txt2 = new wxTextCtrl(this, wxID_ANY, "Enter symtoms:", wxPoint(100, 475), wxSize(100, 30));
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(200, 475), wxSize(150, 50));
	m_btn4 = new wxButton(this, 10004, "Enter", wxPoint(375, 475), wxSize(150, 50));
	m_text1 = new wxStaticText(this, wxID_ANY, "Please schdule a Covid vaccine booster shot if You haven't.", wxPoint(25, 10), wxSize(400, 15));
	m_btn5 = new wxButton(this, 10005, "Schdule Now", wxPoint(450, 10), wxSize(100, 15));
	m_text1->SetBackgroundColour(wxColor(255, 00, 00));
	m_MenuBar = new wxMenuBar();
	this->SetMenuBar(m_MenuBar);

	wxMenu* menuFile = new wxMenu();
	menuFile->Append(10006, "My Info");
	menuFile->Append(10007, "My Apointment");
	menuFile->Append(10008, "My Doctor");
	menuFile->Append(10009, "Quit");

	m_MenuBar->Append(menuFile, "My Guides");
}

void cMain::OnMenu1(wxCommandEvent& evt)
{
	//cEditorFrame* f = new cEditorFrame(this, "Test");
	//f->Show();
	//evt.Skip();
	cMain* m_frame2 = nullptr;
	m_frame2 = new cMain;
	m_frame2->Show();
	evt.Skip();
}

void cMain::OnMenu2(wxCommandEvent& evt)
{
}

void cMain::OnMenu3(wxCommandEvent& evt)
{
}

void cMain::OnMenu4(wxCommandEvent& evt)
{
	Close();
	evt.Skip();
}

cMain::~cMain()
{

}

void cMain::OnScheduleButtonClicked(wxCommandEvent& evt)
{
	Close();
	cMain* m_frame2 = nullptr;
	m_frame2 = new cMain;
	m_frame2->Show();
	evt.Skip();
}
void cMain::OnYesButtonClicked(wxCommandEvent& evt)
{
	has_COVID = true;
	button_Pressed = true;
	evt.Skip();
}

void cMain::OnNoButtonClicked(wxCommandEvent& evt)
{
	has_COVID = false;
	button_Pressed = true;
	evt.Skip();
}

void cMain::OnSaveButtonClicked(wxCommandEvent& evt)
{
	if (button_Pressed && has_COVID)
	{
		std::ofstream resultsFile("example.txt"); // This filename should probably be something like Day_Month_Year_Results.txt
		resultsFile << "Has COVID-19: " << "Yes" << std::endl;
		resultsFile.close();
		m_msg->ShowModal();
	}
	else if (button_Pressed && !has_COVID)
	{
		std::ofstream resultsFile("example.txt"); // This filename should probably be something like Day_Month_Year_Results.txt
		resultsFile << "Has COVID-19: " << "No" << std::endl;
		resultsFile.close();
		m_msg->ShowModal();
	}
	evt.Skip();
}

void cMain::OnEnterButtonClicked(wxCommandEvent& evt)
{
	std::ofstream resultsFile("example.txt");
	resultsFile << "SYMPTOMS PROVIDED: " << m_txt1->GetValue() << std::endl;
	resultsFile.close();
	evt.Skip();
}