//---------------------------------------------------------------------------
#include <vcl\vcl.h>
#pragma hdrstop

#include "Lab4.h"
//---------------------------------------------------------------------------
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EllipseClick(TObject *Sender)
{
	int rx,ry,xc,yc,p1,p2,x,y;
    rx = StrToInt(r1->Text);
    ry = StrToInt(r2->Text);
    xc = StrToInt(x0->Text);
    yc = StrToInt(y0->Text);
    x = 0;
    y = ry;
    p1 = ry*ry + 1/4*rx*rx - rx*rx*ry;
  //Form1->Refresh();
    while(2*ry*ry*x <= 2*rx*rx*y){
    	if(p1<0){
        	x++;
            p1 = p1 + 2*ry*ry*x + ry*ry;
        }
        else{
        	x++;
            y--;
            p1 = p1 + 2*ry*ry*x - 2*rx*rx*y + ry*ry;
        }
        Form1->Canvas->Pixels[x+xc][y+yc] = clRed;
        Form1->Canvas->Pixels[x+xc][-y+yc] = clSilver;
        Form1->Canvas->Pixels[-x+xc][y+yc] = clGreen;
        Form1->Canvas->Pixels[-x+xc][-y+yc] = clBlue;
    }
    p2 = ry*ry*(x+1/2)*(x+1/2) + rx*rx*(y - 1)*(y - 1) - rx*rx*ry*ry;
    while(y>0){
    	if(p2>0){
        	y--;
            p2 = p2 - 2*rx*rx*y + rx*rx;
        }
        else{
        	x++;
            y--;
            p2 = p2 - 2*rx*rx*y + 2*ry*ry*x + rx*rx;
        }
        Form1->Canvas->Pixels[x+xc][y+yc] = clRed;
        Form1->Canvas->Pixels[x+xc][-y+yc] = clSilver;
        Form1->Canvas->Pixels[-x+xc][y+yc] = clGreen;
        Form1->Canvas->Pixels[-x+xc][-y+yc] = clBlue;
    }
}
//---------------------------------------------s------------------------------