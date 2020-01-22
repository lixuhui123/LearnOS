#include<stdio.h>
#include<string.h>
int func()
{
  printf("hellow lixuhi\n");

  printf("hellow lixuhi\n");
  printf("hellow lixuhi\n");
  printf("hellow lixuhi\n");
  printf("hellow lixuhi\n");
  return 0;
}
int main(int argc,char* argv[])
{
     int i=0;
  for(i=0;i<argc;++i)
  {
printf("argv[%d]=[%s]\n",i,argv[i]);
  }
 // printf("你好！\n");
 // 

 func();
 
   char str[50]="lllll";
 memcpy(str,"hello",5);
 printf("hellow,world\n");
  return 0;
}
