#include "add.h"
#include "bubblesort.h"
#include "printresult.h"
#define bool char
#define true 1
#define false 0
void main(){
	int a[10],i;
	int b[10];
	printf("请输入10个数据:\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	bool flag=true;
	while(flag==true){
		printf("\n1.冒泡排序\n2.求和\n3.打结果\n4.退出");
		printf("\n请选择序号:");
	int number=0;
	scanf("%d",& number);
	int sum=0;
	switch(number)
	{
	case 1:
		bubblesort(a, 10);
		break;
	case 2:
		sum=add (a, 10);
		printf("\n数组求和结果为:%5d\n",sum);
		break;
	case 3:
		printArray(b,10,"\n原始数组为: ");
		printArray(a,10,"\n排序后数组为:");
		break;
	case 4:
		flag=false;
		break;
	default:
		printf("\n请选择正确的序号！请继续！");
		break;
	}
	}
	printf("\n");
}
