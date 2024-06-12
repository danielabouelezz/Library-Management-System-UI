//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "LMS.h"
#include "Book.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
BookHandler bookHandler;
//------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddBtnClick(TObject *Sender)
{
	std::string title = AnsiString(InputTitle->Text).c_str();
	std::string author = AnsiString(InputAuthor->Text).c_str();
	int ISBN = StrToInt(InputISBN->Text);
	int numberOfDays = StrToInt(InputDays->Text);
	bool available = true;

	TDateTime purchaseDate = Now();
    TDateTime dueDate = purchaseDate + numberOfDays;

	TADOQuery *query = new TADOQuery(NULL);
	query->Connection = ADOConnection1;
	query->SQL->Text = "insert into books(title, author, ISBN, available, purchaseDate, dueDate)"
						"values(:title, :author, :ISBN, :available, :purchaseDate, :dueDate)";
	query->Parameters->ParamByName("title")->Value = title.c_str();
	query->Parameters->ParamByName("author")->Value = author.c_str();
	query->Parameters->ParamByName("ISBN")->Value = ISBN;
	query->Parameters->ParamByName("available")->Value = available;
	query->Parameters->ParamByName("purchaseDate")->Value = Now(); // Use current date and time
	query->Parameters->ParamByName("dueDate")->Value = dueDate; // Set due date based on the number of days

	try{
		query->ExecSQL();
	}catch(Exception &e) {
		ShowMessage("Errot adding book to database: " + e.Message);
	}

    delete query;
}
//---------------------------------------------------------------------------


