//程序名称:Guest Number
//程序作者:谢朝阳
//联系方式:15636112893
//开发时间:2017.7.5
//游戏说明:这是一个简单的猜数游戏。首先玩家可以选择是否开始游戏，
//如果选择“是”则游戏开始，如果选择“否”则游戏结束。游戏开始后
//玩家可以设置一个最大值maxnum,程序将在0到maxnum中随机生成一个答
//案数ans，玩家要做的就是猜对这个答案数值。 玩家所猜测的数值大于
//或小于ans时，程序会提示玩家猜大了或猜小了，当玩家猜测数值与ans
//相等时，程序会提示玩家游戏胜利，并计算玩家参加猜数游戏的轮数，
//将游戏过程存档到文件中，同时询问玩家是否继续游戏，此时玩家可以
//选择进入下一轮或结束游戏。
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
flag:printf("\n是否开始游戏？	   	是：请输入1	 	否：请输入2\n");
fprintf(fp2,"是否开始游戏？		是：请输入1		否：请输入2\n");
int maxnum,ans,x,turn=0,i;//
scanf("%d",&i);
fprintf(fp2,"%d\n",i);
switch(i){
case 1:printf("请输入一个整数作为最大数\n");//
	 fprintf(fp2,"请输入一个整数作为最大数:");
	 scanf("%d",&maxnum);
	 fprintf(fp2,"%d\n",maxnum);
	 ans=rand()%maxnum;	
	 printf("游戏开始,请猜一个数:");
	 fprintf(fp2,"游戏开始,请猜一个数:");
	 scanf("%d",&x);
	 fprintf(fp2,"%d\n",x);
	 do
    	{if(x<ans){
    	printf("猜小了，请再猜一个数:");scanf("%d",&x);
		fprintf(fp2,"猜小了，请再猜一个数:%d\n",x);turn++;}
     	if(x>ans){
   	    printf("猜大了，请再猜一个数:");scanf("%d",&x);
		fprintf(fp2,"猜大了，请再猜一个数:%d\n",x);turn++;}
    	
		}while(x!=ans);
	printf("恭喜你，猜对了！你一共猜了%d轮\n",++turn);
	fprintf(fp2,"恭喜你，猜对了！你一共猜了%d轮\n\n",turn);
	goto flag;
	break;
case 2:printf("游戏结束。");
       fprintf(fp2,"游戏结束。");
	break;
default:printf("游戏结束。");
        fprintf(fp2,"游戏结束。");}
fclose(fp2);
}
