#include "Vaccine.h"
#include <fstream>
#include <iostream>
wxBEGIN_EVENT_TABLE(Vaccine, wxFrame)

wxEND_EVENT_TABLE()

Vaccine :: Vaccine() : wxFrame(nullptr, wxID_ANY, "TestGUI2 - EC327", wxPoint(30, 30), wxSize(800, 600))
{
	m_text = new wxStaticText(this, wxID_ANY, "Please Schedule you Covid Vaccine Booster shot by filling in information below.", wxPoint(250, 100), wxSize(200, 200));
}
Vaccine::~Vaccine()
{

}