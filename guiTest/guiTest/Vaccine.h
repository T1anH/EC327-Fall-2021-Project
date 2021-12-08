
#include "wx/wx.h"
#include "wx/stattext.h"
#include "wx/msgdlg.h"
class Vaccine : public wxFrame
{
private:
	wxDECLARE_EVENT_TABLE();

public:
	Vaccine();
	~Vaccine();
public:
	wxButton* m_btn1 = nullptr, * m_btn2 = nullptr, * m_btn3 = nullptr;
	wxStaticText* m_text1 = nullptr, * m_text2 = nullptr, * m_text3 = nullptr;
	wxMessageDialog* m_msg = nullptr;
	wxTextCtrl* m_txt1 = nullptr, * m_txt2 = nullptr;
	//wxDECLARE_EVENT_TABLE();
};