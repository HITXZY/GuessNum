//��������:Guess Number
//��������:л����
//��ϵ��ʽ:15636112893
//����ʱ��:2017.7.5
//��Ϸ˵��:����һ���򵥵Ĳ�����Ϸ�������趨һ��maxnum��ֵΪ100��
//������0��100֮���������һ������ֵans�����Ҫ���ľ��ǲ¶�
//�������ֵ����������²����ֵ���ڻ�С��ansʱ���������ʾ��
//�Ҳ´��˻��С�ˣ�����Ҳ²���ֵ��ans���ʱ���������ʾ�����
//Ϸʤ������������ҲμӲ�����Ϸ������������Ϸ���̴浵���ļ��С�
//V1.1

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
main(){
FILE *fp;
FILE *fp2; 
fp2=fopen("file1.txt","a+");
char a;
if ((fp=fopen("Readme.txt","r"))==NULL){
printf("Cannot open file!\n");exit(0);}
while((a=fgetc(fp))!=EOF)
putchar(a);
fclose(fp);
int maxnum=100,ans,x,turn=0;//
srand( (unsigned )time (NULL) );
ans=rand()%maxnum;	
printf("\n��Ϸ��ʼ,���һ����:");
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
printf("��ϲ�㣬�¶��ˣ���һ������%d��",++turn);
fprintf(fp2,"��ϲ�㣬�¶��ˣ���һ������%d��\n\n",turn);
fclose(fp2);
}
