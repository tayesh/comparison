#include <stdio.h>

int main()

{

 int a,b,c,d;

 scanf("%d%d%d%d",&a,&b,&c,&d);

 if(a==b)

 {

   if(a==c)

   {

     if(a==d)

     {

       printf("all numbers are equal");

     }

     else

     {

       printf("three numbers are equal");

     }

   }

   else

   {

     if(a==d)

     {

       printf("three numbers are equal");

     }

     else

     {

       printf("two numbers are equal");

     }

   }

 }

 else

 {

   if(a==c)

   {

     if(a==d)

     {

       printf("three numbers are equal");

     }

     else

     {

       printf("two numbers are equal");

     }

   }

   else

   {

     if(a==d)

     {

       printf("two numbers are equal");

     }

     else

     {

       if(b==c)

       {

         if(b==d)

         {

           printf("three numbers are equal");

         }

         else

         {

           printf("two numbers are equal");

         }

       }

       else

       {

         if(b==d)

         {

           printf("two numbers are equal");

         }

         else

         {

           if(c==d){

             printf("two numbers are equal");

           }

           else{

             if(a>b)

             {

               if(a>c)

               {

                 if(a>d)

                 {

                   printf("%d is the largest number",a);

                 }

                 else

                 {

                   printf("%d is the largest number",d);

                 }

               }

               else

               { 

                 if(c>d)

                 {

                 printf("%d is the largest number",c);

               

                 }

                 else

                 {

                   printf("%d is the largest number",d);

                 }

               }

             }

             else{

               if(b>c)

               {

                 if(b>d)

                 {

                   printf("%d is the largest number",b);

                 }

                 else

                 {

                   printf("%d is the largest number",d);

                 }

               }

               else

               {

                 if(c>d)

                 {

                   printf("%d is the largest number",c);

                 }

                 else

                 {

                   printf("%d is the largest number",d);

                 }

               }

             }

           }

         }

       }

     }

   }

 }

  return 0;

}
