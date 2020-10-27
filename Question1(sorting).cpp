#include<iostream>
#include<conio.h>
using namespace std;
template <class T>
class sorting
{
 T a[10];
public:
 void get_item()
 {
 for(int i=0;i<10;i++)
 {
 cout<<"\n a["<<i<<"] = ";
 cin>>a[i];
 }
 }
void sel_sort()
{
 T temp;
 for(int i=0;i<10;i++)
 {
 for(int j=i+1;j<10;j++)
 {
 if(a[i]>a[j])
 {
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 }
 }
 }
}
void bub_sort()
{
 T temp;
 for(int i=0;i<10;i++)
 {
 for(int j=0;j<10-i-1;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
 }
}
void inst_sort()
{
 T tmp;
 int j;
 for(int i=1;i<10;i++)
 {
 tmp=a[i];
 j=i-1;
 while(tmp<a[j])
 {
 a[j+1]=a[j];
 j--;
 }
 a[j+1]=tmp;
 }
}
void display()
{
 for(int i=0;i<10;i++)
 {
 cout<<" "<<a[i]<<", ";
 }
 cout<<"\n\n";
}
};// End of Class
int main()
{
    int ch;
 // Creating Integer Array using Template
 sorting<int> iarr;
 cout<<"\n\n Enter Elements of Integer Array\n";
 iarr.get_item();
 cout<<"\n\n Elements of Integer Array\n";
 iarr.display();
 cout<<" \n****** MENU ******\n";
 cout<<"\n1. SELECTION SORT\n";
 cout<<"\n2. BUBBLE SORT\n";
 cout<<"\n3. INSERTION SORT\n";
 cout<<"\nEnter your choice\n";
 cin >> ch;
 if (ch == 1)
 iarr.sel_sort();
 if (ch == 2)
 iarr.bub_sort();

 if (ch==3)
 iarr.inst_sort();
 iarr.display();
 getch();
 return 0;
}
