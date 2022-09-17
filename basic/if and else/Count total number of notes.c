#include<stdio.h>
main()
{
    int amount;
    int note;
    printf("Enter total amount:\n");
    scanf("%d",&amount);

    if (amount>2000)
    {
     note=amount/2000;
     amount=amount-(note*2000);
     printf("2000 =%d notes are required\n",note);
    }
     if (amount>500)
    {
      note=amount/500;
      amount=amount-(note*500);
      printf("500  =%d notes are required\n",note);
    }
    if (amount>200)
    {
      note=amount/200;
      amount=amount-(note*200);
      printf("200  =%d notes are required \n",note);
    }
     if (amount>100)
    {
      note=amount/100;
      amount=amount-(note*100);
      printf("100  =%d notes are required \n",note);
    }
    if (amount>50)
    {
      note=amount/50;
      amount=amount-(note*50);
      printf("50   =%d notes are required \n",note);
    }
    if (amount>20)
    {
      note=amount/20;
      amount=amount-(note*20);
      printf("20   =%d notes are required \n",note);
    }
     if (amount>10)
    {
      note=amount/10;
      amount=amount-(note*10);
      printf("10   =%d notes are required \n",note);
    }
    if (amount>5)
    {
      note=amount/5;
      amount=amount-note*5;
      printf("5    =%d coins are required \n",note);
    }
     if (amount>2)
    {
      note=amount/2;
      amount=amount-note*2;
      printf("2    =%d coins are required \n",note);
    }
     if (amount=1);
    {
      note=amount/1;
      amount=amount-note*1;
      printf("1    =%d coins are required \n",note);
    }
}
