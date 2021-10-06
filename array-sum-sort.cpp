#include <iostream>
using namespace std;
class sort
{
    public:
    int array=0;
    int sum=0;
    int i,j,temp;
    int a[10];
    public:
    void in()
    {
        for(i=0; i<10; i++)
        {
            cout<<"Enter value here: ";
            cin>>a[i];
        }
        for(i=0; i<10; i++)
        {
            sum =sum+a[i];
        }
        cout<< "Sum of array: "<<sum<<"\n";
        cout<<"Unsorted array \n ";
            for(i = 0; i<10; i++)
            {
                cout <<a[i]<<"\t";
            }
    }
    void sorts()
    {
        for(i=0; i<10; i++)
        {
            for(j=i+1; j<10; j++)
            {
                if(a[j]<a[i])
                {
                    temp =a[i];
                    a[i]=a[j];
                    a[j] = temp;
                }
            }
        }
        cout <<"\n Sorted array ...\n";
        for(i = 0; i<10; i++)
        {
            cout <<a[i]<<"\t";
        }
    }
};
int main()
{
    sort a;
    a.in();
    a.sorts();
}