#include<stdio.h>
#include<string.h>
main(){

char name1[1000],name2[1000],temp;
int i,j,k,size1,size2,count;

clrscr();

printf("F.L.A.M.E.S\n\n");
printf("Enter Name 1: ");
scanf("%[^\n]%c",&name1);
printf("Enter Name 2: ");
scanf("%[^\n]%c",&name2);


size1=strlen(name1);
size2=strlen(name2);

for(i=0;i<size1;i++)
{
    count=0;
    temp=name1[i];

    if(temp==' ')
    {
	continue;
    }

    for(j=0;j<size2;j++)
    {
	if(temp==name2[j])
	{
		name2[j]='*';
		count++;
	}
    }
    if(count!=0)
    {
	for(k=0;k<size1;k++)
	{
		if(temp==name1[k])
		{
			name1[k]='*';
		}
	}
    }
}

printf("\n%s\n%s",name1,name2);

count=0;
strcat(name1,name2);

for(i=0;i<size1+size2;i++)
{
	if(name1[i]=='*')
	{
		count++;
	}
}

printf("\n\nCount: %d",count);

for(;count>6;)
{
	count=count-6;
}

switch(count)
{
	case 1: printf("\n\nSANA ALL");
		break;
	case 2: printf("\n\nLOVERS");
		break;
	case 3: printf("\n\nADMIRATION");
		break;
	case 4: printf("\n\nMARRIAGE");
		break;
	case 5: printf("\n\nBROMANCE\nsame sex marriage");
		break;
	case 6: printf("\n\nSOULMATE");
		break;
}

getch();
}

