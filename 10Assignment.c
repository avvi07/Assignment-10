// 1. Write a function to calculate the area of a circle. (TSRS)

// #include<stdio.h>
// int area(int);
// int main()
// {
//     int radius;
//     float Area;
//     printf("Enter the radius of a circle = ");
//     scanf("%d",&radius);
//     Area = area(radius);
//     printf("The Area of a cirlce is = %.2f",Area);
//     return 0;
// }
// int area(int r)
// {
//     float a;
//     a = (3.14)*(r*r);
//     return a;
// }

// 2. Write a function to calculate simple interest. (TSRS)

// #include<stdio.h>
// int SI(int,int,int);
// int main()
// {
//     int Amount,Interest,Time,SimpleI;
//     printf("Enter the principle amount,rate of interest and time = ");
//     scanf("%d %d %d",&Amount,&Interest,&Time);
//     SimpleI = SI(Amount,Interest,Time);
//     printf("The Simple interest is = %d",SimpleI);
//     return 0;
// }
// int SI(int P,int R,int T)
// {
//     int SI;
//     SI = (P*R*T)/100;
//     return SI;
// }

// 3. Write a function to check whether a given number is even or odd. Return 1 if the 
// number is even, otherwise return 0. (TSRS)

// #include<stdio.h>
// int check(int);
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     if (check(n)==1)
//     {
//         printf("The number is even.");
//     }
//     else
//     {
//         printf("The number is odd.");
//     }
    
//     return 0;
// }
// int check(int c)
// {
//     if(c%2==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// 4. Write a function to print first N natural numbers (TSRN)

// #include<stdio.h>
// void natural(int);
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     natural(n);
//     return 0;
// }
// void natural(int x)
// {
    // int i;
    // for (i = 1; i <= x; i++)
    // {
    //     printf("%d ",i);
    // }
// }

// 5. Write a function to print first N odd natural numbers. (TSRN)

// #include<stdio.h>
// void printN(int);
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printN(n);
//     return 0;
// }
// void printN(int x)
// {
//     int i;
//     for (i = 0; i < x; i++)
//     {
//         printf("%d ",i*2+1);
//     }
// }

// 6. Write a function to calculate the factorial of a number. (TSRS)

// #include<stdio.h>
// int fact(int);
// int main()
// {
//     int n,c;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     c = fact(n);
//     printf("The factorial of the number is %d.",c);
//     return 0;
// }
// int fact(int x)
// {
//    long int i,a = 1;
//     for ( i = 1; i <= x; i++)
//     {
//         a = i*a;
//     }
//     return a;
   
// }

// 7. Write a function to calculate the number of combinations one can make from n items 
// and r selected at a time. (TSRS)

// #include<stdio.h>
// int comb(int,int);
// int main()
// {
//     int n,r,c;
//     printf("Enter the value of n and r: ");
//     scanf("%d %d",&n,&r);
//     c = comb(n,r);
//     printf("%d",c);
//     return 0;
// }
// int comb(int n,int r)
// {
//     int i,fn = 1,fr = 1,fnr = 1,nr = 1,ncr = 1;
//     for (i = 1; i <= n; i++)
//     {
//         fn = fn*i;
//     }
    
//     for ( i = 1; i <= r; i++)
//     {
//         fr = fr*i;
//     }
    
//     for ( i = 1; i <= (n-r); i++)
//     {
//         fnr = fnr * i;
//     }
    
//     ncr = fn/(fr*fnr);
//     return ncr;
// }

// 8. Write a function to calculate the number of arrangements one can make from n items 
// and r selected at a time. (TSRS)

// #include<stdio.h>
// int arng(int,int);
// int main()
// {
//     int n,r,p;
//     printf("Enter the value of n and r: ");
//     scanf("%d %d",&n,&r);
//     p = arng(n,r);
//     printf("%d",p);
//     return 0;
// }
// int arng(int n,int r)
// {
//     int i,fn = 1,fnr = 1,npr = 1;
//     for (i = 1; i <= n; i++)
//     {
//         fn = fn*i;
//     }
    
//     for ( i = 1; i <= (n-r); i++)
//     {
//         fnr = fnr * i;
//     }
    
//     npr = fn/fnr;
//     return npr;
// }

// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)

// #include<stdio.h>
// int check(int,int);
// int main()
// {
//     int n,d,s;
//     printf("Enter the given number and digit: ");
//     scanf("%d %d",&n,&d);
//     if (check(n,d)==1)
//     {
//         printf("The givin digit is present in given number.");
//     }
//     else
//     {
//         printf("The givin digit is not present in given number.");
//     }
    
//     return 0;
// }
// int check(int n,int d)
// {
//     int rem;
//     while (n)
//     {
//         rem = n%10;
//         if (rem == d)
//         {
//             return 1;
        
//         }
//     n = n/10;
//     }
//     return 0;
// }

// 10. Write a function to print all prime factors of a given number. For example, if the 
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)

// #include<stdio.h>
// void prime(int);
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     prime(n);
//     return 0;
// }
// void prime(int x)
// {
//     int i;
//     for ( i = 2; x != 1; i++)
//     {
//         while (x%i==0)
//         {
//             x = x/i;
//             printf("%d, ",i);
//         }
        
//     }
    
// }