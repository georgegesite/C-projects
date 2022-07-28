#include <iostream>
using namespace std;

main()
{
    int  n, f, pf = 0, count = 0, rs[30], m[10];
    cout<<"Enter the length of Reference String: "<<endl;
    cin>>n;
    cout<<"Enter the reference string: "<<endl;
    for (int i = 0; i<n; i++)
    {
        cin>>rs[i];
    }
    cout<<"Enter number of frames: "<<endl;
    cin>>f;
    for (int i= 0; i<f ; i++)
    {
        m[i]=-1;
    }
    cout<<"The Page Replacement Process is: "<<endl;
    int i,j,k;
    for(i=0; i<n;i++)
        {
            cout<<rs[i]<<"|\t";
        }
    for(i=0;i<n;i++)  
{ 
    for(k=0;k<f;k++)  
    {  
        if(m[k]==rs[i]) 
        break;  
    }  
    if(k==f) 
    {  
        m[count++]=rs[i];  
        pf++; 
    } 
    for(j=0;j<f;j++)  {
        
        cout<<"\t"<<m[j];
    }
        
    if(k==f)  
    cout<<"\tPF No. "<<pf;
    cout<<endl;
    if(count==f)  
    count=0; 
} 
    cout<<"The number of Page Faults using FIFO are "<<pf<<endl;
}