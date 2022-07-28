#include<stdio.h>
int sort(int arr,int s);

main(){

int size,*num,i;
clrscr();

printf("Size: ");
scanf("%d",&size);

for(i=0;i<size;i++)
{
    scanf("%d",&num[i]);
}

num=sort(num,size);

printf("Output: ");
for(i=0;i<size;i++)
{
    printf("%d ",num[i]);
}

getch();
}

int sort(int arr,int s)
{
    int i,j,temp;

    for(i=0;i<s;i++)
    {
	for(j=i+1;j<s;j++)
	{
	    if(arr[i]>arr[j])
	    {
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	    }
	}
    }

    return arr;
}