// Example program
#include <iostream>
using namespace std;
class binarysearch
{
  private:
  int i,start,end,mid,n,array;
  int a[9];
  public:
  void get()
  {
   for(i=0; i<10; i++)
   {
       cout<< "Enter values in array: ";
       cin>> a[i];
    }
  }
      
  void search()
  
  {
      cout<< "\n Enter any value: ";
      cin>>n;
     for(i=0;i<1;i++)
     {
         if(n=a[i])
         {
            cout<<"Element present in index";
         }else
         {
             cout<<"Element is not present in index";
         }
     }
  }
};
int main()
{
    binarysearch a;
    a.get();
    a.search();
    
}

