//---------------------------------------------------------------------------
#ifndef Lab4H
#define Lab4H
//---------------------------------------------------------------------------
#include <vcl\Classes.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *r1;
	TEdit *r2;
	TEdit *x0;
	TEdit *y0;
	TButton *Ellipse;
	TLabel *rx;
	TLabel *ry;
	TLabel *xc;
	TLabel *yc;
	
	
	
	void __fastcall EllipseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
