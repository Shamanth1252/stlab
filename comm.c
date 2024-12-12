#include <stdio.h>
#include <stdlib.h>

int main()
{
int locks,stocks,barrels,tlocks,tstocks,tbarrels;
float lprice,sprice,bprice,saales=0,comm;
int c1,c2,c3,temp;
tlocks=0,tstocks=0,tbarrels=0;
lprice=45.0;
sprice=30.0;
bprice=25.0;
printf("enter thevlaue of lock -1 to exit\n");
scanf("%d",locks);
while(locks!=-1){
    c1=(locks<0||locks>70);
    printf("enter stock and barrels");
    scanf("%d%d",&stocks,&barrels);
    c2=(stocks<0||stocks>80);
    c3=(barrels<0||barrels>80);
    tlocks=locks+tlocks;
    tstocks=stocks+tstocks;
    tbarrels=barrels+tbarrels;
    if(c1)
    {
        printf("Enter value not in range");
    }
    else
    {
        temp=locks+tlocks;
        if(temp>70)
            printf("new value %d not in range",temp);
        else
    }
    tlocks=temp;
    printf("total lock is %d",tlocks);
    if(c2)
    {
        printf("Enter value not in range");
    }
    else
    {
        temp=stocks+tstocks;
        if(temp>80)
            printf("new value %d not in range",temp);
        else
    }
    tstocks=temp;
    printf("total lock is %d",tstocks);
    if(c3)
    {
        printf("Enter value not in range");
    }
    else
    {
        temp=barrels+tbarrels;
        if(temp>90)
            printf("new value %d not in range",temp);
        else
    }
    tbarrels=temp;
    printf("total lock is %d",tbarrels);
    printf("enter the lock value press -1 to exit \n");
    scanf("%d",locks);


}
if(tlocks>0&&tstocks>0&&tbarrels>0){
    printf("total lock stock barrels is %d %d %d",tlocks,tstocks,tbarrels);
    sales=(tlocks*lprice)+(tstocks*sprice)+(tbarrels*bprice);
    printf("sales is %f",sales);
    if (sales>0){
        if(sales>1800){
            comm=0.10*1000;
            comm=comm+0.15*800;
            comm=comm+0.20(sales-1800);
        }
        else if(sales>1000){
            comm=0.10*1000;
            comm=comm+0.15(sales-1000);
        }
        else{
            comm=0.10*sales;
            printf("commision is %f\n",comm)
        }
    }
}
else
    printf("there is no sales\n");
    return 0;
}
