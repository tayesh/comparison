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
                          if(b<c){
                            if(b<d){
                                printf("%d is the smallest number",b);
                            }
                            else{
                                printf("%d is the smallest number",d);
                            }
                          }
                          else{
                            if(c<d){
                                printf("%d is the smallest number",c);
                            }
                            else{
                                printf("%d is the smallest number",d);
                            }
                          }
                 }
                 else
                 {
                   printf("%d is the largest number",d);
                   if(b<c){
                    printf("%d is the smallest number",b);
                   }
                   else{
                    printf("%d is the smallest number",c);
                   }
                 }
               }
               else
               {
                 if(c>d)
                 {
                 printf("%d is the largest number",c);
                     if(b<d){
                        printf("%d is the smallest number",d);
                     }
                     else{
                        printf("%d is the smallest number",b);
                     }
                 }
                 else
                 {
                   printf("%d is the largest number",d);
                    printf("%d is the smallest number",b);
                 }
               }
             }
             else{
               if(b>c)
               {
                 if(b>d)
                 {
                   printf("%d is the largest number",b);
                   if(a<c){
                            if(a<d){
                                printf("%d is the smallest number",a);
                            }
                            else{
                                printf("%d is the smallest number",d);
                            }
                          }
                          else{
                              if(c<d){
                                  printf("%d is the smallest number",c);
                              }
                              else{
                                  printf("%d is the smallest number",d);
                              }
                          }
                 }
                 else
                 {
                   printf("%d is the largest number",d);
                   if(a<c){
                    printf("%d is the smallest number",a);
                   }
                   else{
                    printf("%d is the smallest number",c);
                   }
                 }
               }
               else
               {
                 if(c>d)
                 {
                   printf("%d is the largest number",c);
                   if(a<d){
                        printf("%d is the smallest number",d);
                     }
                     else{
                        printf("%d is the smallest number",a);
                     }
                 }
                 else
                 {
                   printf("%d is the largest number",d);
                   printf("%d is the smallest number",a);
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
