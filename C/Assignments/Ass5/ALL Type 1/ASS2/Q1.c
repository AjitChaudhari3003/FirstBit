// 1. Find the price of item when discount is given (specify different discount based on 
// price) 

#include<stdio.h>
void Discount(){
int price = 200;

float dis;

int finalprice;

if(price < 500){
    dis = price * 0.1;
}else if(price <1000){
    dis  = price * 0.2;
}else if (price < 2000){
    dis = price *0.3;
}else{
    dis=0;
}

 finalprice = price - dis;

printf("Price: %d\n",price);
printf("Discount: %f\n", dis);
printf("Final Price: %d\n", finalprice);


}
void main(){
   Discount();
}



