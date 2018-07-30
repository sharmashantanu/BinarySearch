#include <iostream>
#include<algorithm>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    int i,j,k,n,num,sea,start=0,mid=0,end=0,count=0,count1=0;
    cout<<"\nChoose from the options given below : ";
    cout<<"\n1. Enter numbers manually.";
    cout<<"\n2. Enter random numbers.\n";
    cin>>n;
    if(n==1)
     {
        cout<<"\nHow many numbers do you want to enter ? :";
                cin>>num;
                cout<<"\n\nEnter numbers :";
                int A[num];
                for(i=0;i<num;i++)
                {
                    cin>>A[i];
                }
                sort(A,A+num);
                for(j=0;j<num;j++)
                    cout<<"\n"<<A[j]<<"\n";
                cout<<"\nEnter the number you want to search : ";
                cin>>sea;
                end=num-1;
                mid=(start+end)/2;
                while(start<=end)
                {
                    count++;
                    if(A[mid]<sea)
                    {
                        start=mid+1;
                    }
                    else if(A[mid]==sea)
                        {

                            cout<<"\n"<<sea<<" found at "<<mid+1<<" position";
                            break;
                        }
                    else
                        {
                            end=mid-1;
                        }
                    mid=(start+end)/2;
                }
                if(start>end)
                    cout<<"\n\nSorry !!! "<<sea<<" not found in this array";
                cout<<"\n\nNo. of Passes : "<<count;
     }
      else if(n==2)
            {
                cout<<"\nHow many numbers do you want to enter ? :";
                cin>>num;
                cout<<"\n\nNumbers :";
                int B[num];
                srand(time(NULL));
                for(i=0;i<num;i++)
                {
                    B[i]=rand()%100000;
                }
                sort(B,B+num);
                for(j=0;j<num;j++)
                cout<<"\n"<<B[j]<<"\n";
                cout<<"\nEnter the number you want to search : ";
                cin>>sea;
                end=num-1;
                mid=(start+end)/2;
                while(start<=end)
                {
                    count1++;
                    if(B[mid]<sea)
                    {
                        start=mid+1;
                    }
                    else if(B[mid]==sea)
                        {

                            cout<<"\n"<<sea<<" found at "<<mid+1<<" position";
                            break;
                        }
                    else
                        end=mid-1;
                    mid=(start+end)/2;
                }
                if(start>end)
                    cout<<"\n\nSorry !!! "<<sea<<" not found in this array";
            cout<<"\n\nNo. of Passes : "<<count1;
        }
    else
            cout<<"Wrong Choice";
    return 0;
}
