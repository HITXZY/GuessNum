//��������:Guest Number
//��������:л����
//��ϵ��ʽ:15636112893
//����ʱ��:2017.7.5
//��Ϸ˵��:����һ���򵥵Ĳ�����Ϸ��������ҿ���ѡ���Ƿ�ʼ��Ϸ��
//���ѡ���ǡ�����Ϸ��ʼ�����ѡ�񡰷�����Ϸ��������Ϸ��ʼ��
//��ҿ�������һ�����ֵmaxnum,������0��maxnum���������һ����
//����ans�����Ҫ���ľ��ǲ¶��������ֵ�� ������²����ֵ����
//��С��ansʱ���������ʾ��Ҳ´��˻��С�ˣ�����Ҳ²���ֵ��ans
//���ʱ���������ʾ�����Ϸʤ������������ҲμӲ�����Ϸ��������
//����Ϸ���̴浵���ļ��У�ͬʱѯ������Ƿ������Ϸ����ʱ��ҿ���
//ѡ�������һ�ֻ������Ϸ��
//V1.2

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

main()
{
FILE *fp;																	
FILE *fp2; 																	    
fp2=fopen("file1.txt","a+");												   
char a;
if ((fp=fopen("Readme.txt","r"))==NULL){
	printf("Cannot open file!\n");exit(0);}									  
while((a=fgetc(fp))!=EOF)
putchar(a);
fclose(fp);
srand( (unsigned )time (NULL) );
flag:printf("\n�Ƿ�ʼ��Ϸ��	   	�ǣ�������1	 	��������2\n");
fprintf(fp2,"�Ƿ�ʼ��Ϸ��		�ǣ�������1		��������2\n");
int maxnum,ans,x,turn=0,i;//
scanf("%d",&i);
fprintf(fp2,"%d\n",i);
switch(i){
case 1:printf("������һ��������Ϊ�����\n");//
	 fprintf(fp2,"������һ��������Ϊ�����:");
	 scanf("%d",&maxnum);
	 fprintf(fp2,"%d\n",maxnum);
	 ans=rand()%maxnum;	
	 printf("��Ϸ��ʼ,���һ����:");
	 fprintf(fp2,"��Ϸ��ʼ,���һ����:");
	 scanf("%d",&x);
	 fprintf(fp2,"%d\n",x);
	 do
    	{if(x<ans){
    	printf("��С�ˣ����ٲ�һ����:");scanf("%d",&x);
		fprintf(fp2,"��С�ˣ����ٲ�һ����:%d\n",x);turn++;}
     	if(x>ans){
   	    printf("�´��ˣ����ٲ�һ����:");scanf("%d",&x);
		fprintf(fp2,"�´��ˣ����ٲ�һ����:%d\n",x);turn++;}
    	
		}while(x!=ans);
	printf("��ϲ�㣬�¶��ˣ���һ������%d��\n",++turn);
	fprintf(fp2,"��ϲ�㣬�¶��ˣ���һ������%d��\n\n",turn);
	goto flag;
	break;
case 2:printf("��Ϸ������");
       fprintf(fp2,"��Ϸ������");
	break;
default:printf("��Ϸ������");
        fprintf(fp2,"��Ϸ������");}
fclose(fp2);
}
