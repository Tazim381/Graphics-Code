#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
#define ll long long
void drawCircle(int x,int y,int xc,int yc)
{
    putpixel(x+xc,y+yc,RED);
    putpixel(y+xc,x+yc,RED);
    putpixel(x+xc,-y+yc,RED);
    putpixel(y+xc,-x+yc,RED);
    putpixel(-x+xc,-y+yc,RED);
    putpixel(-y+xc,-x+yc,RED);
    putpixel(-x+xc,y+yc,RED);
    putpixel(-y+xc,x+yc,RED);
    delay(100);
}
int main()
{

    int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
    ll i,j,m,na,b;
    ll x,y,p,r,xc,yc;
    cout<<"Enter co-ordinate x and y "<<endl;
    cin>>xc>>yc;
    cout<<"Enter radious r "<<endl;
    cin>>r;

    x =0;
    y=r;
    p= 1- r;
    while(x<y)
    {
        drawCircle(x,y,xc,yc);
        if(p<0)
        {
            p = p + (2*x)+1;
        }
        else{
            y--;
            p = p+ (2*x)+1 - 2*y;
        }

        x++;
    }

}
