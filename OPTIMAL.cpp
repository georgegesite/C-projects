#include <iostream>
using namespace std;
int n,rs[30],f,m[20];

void request()
{
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
}
void display()
{
for(int i=0;i<f;i++)
{
cout<<rs[i];
}
cout<<endl;
}

void replace()
{
int j,flag=0,pf=0;
int max,lp[10],index,k;
for(j=0;j<f;j++)
{
m[j]=rs[j];
flag=1;
pf++;
display();
}
for(j=f;j<n;j++)
{
flag=0;
for(int i=0;i<f;i++)
{
if(m[i]==rs[j])

{
flag=1;
break;
}
}
if(flag==0)
{
for(int i=0;i<f;i++)
lp[i]=0;
for(int i=0;i<f;i++)
{
for(k=j+1;k<n;k++)
{
if(m[i]==rs[k])
{
lp[i]=k-j;
break;
}
}
}
max=lp[0];
index=0;
for(int i=0;i<f;i++)
{
if(lp[i]==0)
{
index=i;
break;
}
else
{
if(max<lp[i])
{
max=lp[i];
index=i;
}
}
}
m[index]=rs[j];
pf++;
display();
}
}
cout<<pf;

}

int main()
{
request();
replace();
}