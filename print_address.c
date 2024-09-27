//code to print address using array of structures
#include<stdio.h>
struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
void printaddr(struct address add);
int main(){
    struct address add[5];
    printf("enter information :");
    scanf("%d",&add[0].houseNo);
    scanf("%d",&add[0].block);
    scanf("%s",add[0].city);
    scanf("%s",add[0].state);
    printf("enter information :");
    scanf("%d",&add[1].houseNo);
    scanf("%d",&add[1].block);
    scanf("%s",add[1].city);
    scanf("%s",add[1].state);
    printf("enter information :");
    scanf("%d",&add[2].houseNo);
    scanf("%d",&add[2].block);
    scanf("%s",add[2].city);
    scanf("%s",add[2].state);
    printf("enter information :");
    scanf("%d",&add[3].houseNo);
    scanf("%d",&add[3].block);
    scanf("%s",add[3].city);
    scanf("%s",add[3].state);
    printf("enter information :");
    scanf("%d",&add[4].houseNo);
    scanf("%d",&add[4].block);
    scanf("%s",add[4].city);
    scanf("%s",add[4].state);
    printaddr(add[0]);
    printaddr(add[1]);
    printaddr(add[2]);
    printaddr(add[3]);
    printaddr(add[4]);
    return 0;
}
void printaddr(struct address add){
    printf("address is :%d ,%d ,%s ,%s\n",add.houseNo,add.block,add.city,add.state);
}