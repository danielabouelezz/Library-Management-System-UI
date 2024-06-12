//---------------------------------------------------------------------------

#ifndef LMSH
#define LMSH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <FMX.Grid.hpp>
#include <FMX.Grid.Style.hpp>
#include <FMX.ScrollBox.hpp>
#include <System.Rtti.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.DBScope.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Fmx.Bind.DBEngExt.hpp>
#include <Data.Bind.Grid.hpp>
#include <Fmx.Bind.Editors.hpp>
#include <Fmx.Bind.Grid.hpp>
#include <System.Bindings.Outputs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *InputField;
	TButton *AddBtn;
	TButton *SearchBtn;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *InputAuthor;
	TEdit *InputTitle;
	TEdit *InputISBN;
	TEdit *InputDays;
	TButton *BorrowBtn;
	TButton *RerurnBtn;
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TStringGrid *DataGrid;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TLinkGridToDataSource *LinkGridToDataSourceBindSourceDB1;
	void __fastcall AddBtnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
