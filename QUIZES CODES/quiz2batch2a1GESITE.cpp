#include <iostream>

using namespace std;

class george{
	public:
		long num,seq,tempnum,arr[100][100];
		long no,count,count1,rem,b;
		void input();
		void process();
		
};

int main(){
	george a;
	a.input();
	a.process();
	return 0;
}

void george::input()
{
	cout<<"Enter number: ";
	cin>>num; tempnum=num;
	cout<<"Enter sequence: ";
	cin>>seq;
	
}

void george::process()
{
    for(int i=0;i<100;i++)
    {
        for(int j=0;j<100;j++)
        {
            arr[i][j]=NULL;
        }
    }
    count=0;
    count1=1;
    for(;;){
        num=num/10;
        count+=1;
        if(num==0)
        {
            for(int j=count-1;tempnum!=0;j--)
			{
            	rem=tempnum%10;
                arr[0][j]=rem;
                tempnum=tempnum/10;
				}
                break;
            }        
    }
    b=0;
    for(int i=0;i<seq;i++)
        {
            for(int j=0;arr[i][j]!=NULL;j++)
            {
                if(arr[i][j]==arr[i][j+1]&&arr[i][j+1]!=NULL)         
                    count1++;
                else
                {   no=arr[i][j];
                    arr[i+1][b]=count1;
                    arr[i+1][b+1]=no;
                    b=b+2; 
					count1=1;
                    }
                
                } b=0;
            } 
    for(int i=0;i<seq;i++)
        {
            //cout<<i+1;
            for(int j=0;arr[i][j]!=NULL;j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }}
        

