#include<stdio.h>
int main()
{
int locks,stocks,barrels,tlocks,tstocks,tbarrels;
float lprice,sprice,bprice,sales=0,comm;
int c1,c2,c3,temp;
tlocks=0,tstocks=0,tbarrels=0;
lprice=45.0,sprice=30.0,bprice=25.0;
printf("enter the number of locks and rto exit the loop press -1\n");
scanf("%d",&locks);
while(locks!=-1)
{
c1=(locks<=0||locks>70);
printf("enter the no of stocks and barrels");
scanf("%d%d",&stocks,&barrels);
c2=(stocks<=0||stocks>80);
c3=(barrels<0||barrels>90);
if(c1)
printf("values of locks not in range 1--70");
else{
temp=locks+tlocks;
if(temp>70)
printf("nw value of locks=%d not on range 1--70",temp);
else
tlocks=temp;
}
printf("total locks=%d\n",tlocks);
if(c2)
printf("value of stocks not in range 1--80");
else
{
temp=stocks+tstocks;
if(temp>80)
printf("new value of stoclks=%d not in range 1--80",temp);
else
tstocks=temp;
}
printf("total stocks=%d\n",tstocks);
if(c3)
printf("values of barrel not in range 1--90");
else
{
temp=barrels+tbarrels;
if(temp>90)
printf("new values of barrels=%d not in range 1--90",temp);
else
tbarrels=temp;
}
printf("total barrels=%d\n",tbarrels);
printf("enter yh no.of locks amd press-1 to exit the loop\n");
scanf("%d",&locks);
}
if(tlocks>0 && tstocks>0 && tbarrels>0)
{
printf("total locks=%d\n total stocks=%d\n total barrels=%d\n",tlocks,tstocks,tbarrels);
sales=((tlocks*lprice)+(tstocks*sprice)+(tbarrels*bprice));
printf("total sales is %f\n",sales);
if(sales>0)
{
if(sales>1800)
{
comm=0.10*1000.0;
comm=comm+0.15*800.0;
comm=comm+0.20*(sales-1800);
}
else if(sales>1000)
{
comm=0.10*1000;
comm=comm+0.15*(sales-1000);
}
else
comm=0.10*sales;
printf("commission is %f\n",comm);
}
}
else
printf("there is no sales\n");
return 0;
}
