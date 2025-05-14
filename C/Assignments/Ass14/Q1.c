// 1. Create a structure Book with data members as bname, id, author, price.  
// Accept the values of all these members from user and display them.  


#include<stdio.h>
#include<string.h>

typedef struct Book{
    char bname[10];
    int id;
    char auther[20];
    int price;
}Book;

Book Detail(){
    Book b;
    printf("Enter book name: ");
    scanf("%s", b.bname);

    printf("Enter book id: ");
    scanf("%d", &b.id);

    printf("Enter author name: ");
    scanf("%s", b.auther);

    printf("Enter price: ");
    scanf("%d", &b.price);

    return b;
}
void display( Book b){
 
  printf("Name = %s\nId = %d \nAuther = %s\nPrice = %d",b.bname,b.id,b.auther,b.price);
}

int main(){
    Book b1;
    b1=Detail();

    display(b1);

    return 0;
}