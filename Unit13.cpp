//---------------------------------------------------------------------------

#include <vcl.h>
#include <stdio.h>
#include<conio.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
//int main(int argc, char* argv[])
void main()
{
int n;
printf("Vvedite kol-vo elementov massiva A: ");
scanf("%d",&n);
int a[20];
int i;
float sa;
for(i=0;i<n;i++)
{
printf("Element massiva %d: ",(i+1));
scanf("%d",&a[i]);
}
int Amin;
Amin=a[0];
for(i=0;i<n;i++)
{
if(a[i]<Amin)
{
Amin=a[i];
}
}
int c[20];
printf("Amin: %d\n",Amin);
printf("Vvedite kol-vo elementov massiva C: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Element massiva %d: ",(i+1));
scanf("%d",&c[i]);
}
int Cmin;
Cmin=c[0];
for(i=0;i<n;i++)
{
if(c[i]<Cmin)
{
Cmin=c[i];
}
}
printf("min: %d\n",Cmin);
sa=(Amin+Cmin)/2;
printf("Srednee arifmeticheskoe Amin i Cmin: %5.2f\n", sa);
getch();
       // return 0;
}
//---------------------------------------------------------------------------
