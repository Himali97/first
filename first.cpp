#include<iostream.h>
using namespace std;
class mobile
{
    int price;
    char model[30];

    Public :

        void getdetails();
        void setdetails();
};

void mobile:: get details()
{

    cout<<"Enter price:";
    cin>>price;
    cout<<"Enter Model:";
    cin>>model;
}

  void model:: setdetails()
  {

      cout<<"price is:<<price<<"and model is:"<<model;
  }

   int main()
   {
       clrscr();
       mobile obj[2];
       int n=2;
       for(int i=0;i<n;i++)
       {

           cout<<"Enter details of mobile";
           obj[i].getdetails();
       }
    for(int i=0;i<n;i++)
    {
        cout<<"Details are:";
        obj[i].setdetails();
    }
    return 0;
   }
