#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<math.h>
void ttw()
{
	int a;
	printf("����������һ��������\n");
	scanf("%d",&a);
    int i=0,b[50];
	while(a!=0)
	{b[i]=a%2;a/=2;i++;}
	for(i--;i>=0;i--)
	   printf("%d",b[i]);
	printf("\n");
	getch();
}
void tte()
{
	int a;
	printf("����������һ��������\n");
	scanf("%d",&a);
    int i=0,b[50];
	while(a!=0)
	{b[i]=a%8;a/=8;i++;}
	for(i--;i>=0;i--)
		printf("%d",b[i]);
	printf("\n");
	getch();
}
void tts()
{	int a;
	printf("����������һ��������\n");
	scanf("%d",&a);
    int i=0,b[50];
	while(a!=0)
	{b[i]=a%16;a/=16;i++;}
	for(i--;i>=0;i--)
	{if(b[i]>9)
	putchar(b[i]+55);
	else
		printf("%d",b[i]);}
	printf("\n");
	getch();
}
void wtt()
{	int a;
	printf("����������һ��������\n");
	scanf("%d",&a);
	int s=0,i=0;
	while(a>=1)
	{s+=a%10*pow(2,i);
	a/=10;
	i++;}
	printf("%d\n",s);
	getch();
}
void ett()
{
	int a;
	printf("����������һ��������\n");
	scanf("%d",&a);
	int s=0,i=0;
	while(a>=1)
	{s+=a%10*pow(8,i);
	a/=10;
	i++;}
	printf("%d\n",s);
	getch();
}
void stt()
{
	int i=0,n=0;
	char s[50];
	scanf("%s",&s);
	for(;s[i]!='\0';i++)
	{if(s[i]>='0'&&s[i]<='9')
    n=n*16+s[i]-'0';
    if(s[i]>='a'&&s[i]<='f')
    n=n*16+s[i]-'a'+10;
    if(s[i]>='A'&&s[i]<='F')
    n=n*16+s[i]-'A'+10;}
	printf("%d",n);
	getch();
}
int main()
{
	int y;
	do{
	system("cls");
	printf("�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n");
	printf("�U             �˵�             �U\n");
    printf("�U   1.ʮ������תΪ��������     �U\n");
	printf("�U   2.ʮ������תΪ�˽�����     �U\n");
	printf("�U   3.ʮ������תΪʮ��������   �U\n");
	printf("�U   4.��������תΪʮ������     �U\n");
	printf("�U   5.�˽�����תΪʮ������     �U\n");
	printf("�U   6.ʮ��������תΪʮ������   �U\n");
	printf("�U   7.�˳�����                 �U\n");
	printf("�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
	printf("\n");
	printf("�������ѡ����ѡ��\n");
	scanf("%d",&y);
	switch(y)
	{case 1:ttw();break;
   	 case 2:tte();break;
	 case 3:tts();break;
	 case 4:wtt();break;
	 case 5:ett();break;
	 case 6:stt();break;
	 case 7:break;
	 default:printf("����\n");break;
	}
	}while(y!=7);
return 0;
}

