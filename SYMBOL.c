 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 int n=0;
 int i;
 struct table
 { int value;
   char type[10],varname[20];

 }symtab[10];
 void insert()
 {   char type[10],name[20];
     int value,flag;
     printf("\n Enter data type \n");
     scanf("%s",type);
     printf("\n Enter variable name \n ");
     scanf("%s",name);
     printf("\n Enter value \n");
     scanf("%d",&value);
     for(i=0;i<=n;i++)
     {
       if(strcmp(symtab[i].varname,name)==0)
       {
       flag=1;
       }
       if(flag==1)
       {
       printf("\n Already exist \n");
       }
       else
       {
       strcpy(symtab[n].type,type);
       strcpy(symtab[n].varname,name);
       symtab[n].value=value;
       }
     }
     n=n+1;
 }
 void delete()
 { char name[10];
 printf("\n Enter variable name \n");
 scanf("%s",name);

  for(i=0;i<n;i++)
 {
	if(strcmp(symtab[i].varname,name)==0)
	{
	strcpy(symtab[i].varname,"");
	symtab[i].value=0;
       strcpy(symtab[i].type,"");
	}
    }


 }
 void update()
 {
   char varname[10];
   int val;
   printf("\n Enter varname and value \n");
   scanf("%s %d",varname,&val);
    for(i=0;i<n;i++)
    {
     if(strcmp(symtab[i].varname,varname)==0)
     {
	symtab[i].value=val;
     }
    }
 }
 void display()
 {
    for(i=0;i<n;i++)
    {
      if(symtab[i].varname !="")
      {
      printf("%s %s %d ",symtab[i].type,symtab[i].varname,symtab[i].value);

      }
    }
 }
 void main()
 {
   char ch;
  int select;
  clrscr();
  do
 {  clrscr();
  printf("\n Select option \n");
  printf("\n 1 insert   2 delete  3 update    4 display \n");
  scanf("%d",&select);
  switch(select)
  {
    case 1:
      insert();
      break;
    case 2:
      delete();
      break;
    case 3:
    update();
    break;
    case 4:
    display();
    default: printf("\n Press correct option \n ");

  }
      printf("\n do u want to continue press y/n \n");
      scanf("%c",&ch);
      getch();
  }while(ch!='n');
  getche();
 }