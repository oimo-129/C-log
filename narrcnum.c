//水仙花数：一个三位数满足，每一个数等于它各个位数的三次方之和(超完全数字不变数)
//示例：1^3+5^3+3^3 = 153
#include <stdio.h>
int main(){

int num=100;//重点再与各个位数的表示
do{
int a=num/100;//百位余数
int b=num%10;//个位余数
int c=(num-a*100)/10;//十位余数

if(num==a*a*a+b*b*b+c*c*c)
{
printf("%d\n",num);
}    
num++;
}while(num<1000);
    return 0;
}
