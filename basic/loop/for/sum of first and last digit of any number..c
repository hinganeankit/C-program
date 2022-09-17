 #include<stdio.h>
 main()
 {
     int num;
     int sum;
     printf("enter num\n");
     scanf("%d",&num);
     int temp=num;
     int count=0;
     int unit=num%10;

      while (temp!=0)
      {
          temp=temp/10;
          count=count+1;
      }

      int i=1;
      int divide=1;

      while (i<count)
     {
         divide=divide*10;
         i=i+1;
     }

      int last=num/divide;
          sum= last+unit;
          printf("%d",sum);
 }
