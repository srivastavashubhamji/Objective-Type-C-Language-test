
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define SIZE 25
#define ff fflush(stdin)
#define pf printf
#define sf scanf


void println(void);
void setUserAns(int);
void calcResult( int TotalNoOfQues );

void printExpNdLink(int );



			// array of User Answers
char name[SIZE];
int countAnswered=0 ;
int indexForMasterRealArray = -1 ;
int userAns[SIZE]  = {0} ;
int  realAns[SIZE] = { 3,1,2,3,3,3,1,2,3,3, 4,1,2,1,1,3,4,1,4,2, 4,1,2,3,4};
//         ques no : { 1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,20,1,2,3,4,25, };

	void setUserAns( int uans )
	{
	    countAnswered++;
		indexForMasterRealArray++ ;
		userAns [ indexForMasterRealArray ]  = uans;

	}


	void println()
	{
		printf("\n---------------------------------------------------------------------------\n");
	}



    int QuestionsForMasterLevel ( int demand )
    {

           switch( demand )
           {
                case 1:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                        printf(" What will be the output of this C program?  \n\n#include<stdio.h>");
                        printf("\n int main()\n{  " );
                        printf(" \n\t   " );
                        printf(" \n\t unsigned char i = 0;");
                        printf(" \n\t for( ; i<=0 ; i++); ");

                        printf(" \n\t printf(\"%%d\",i); ");
                        printf(" \n\t return 0;");
                        printf(" \n } ");

                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) 127 ");
                        printf("\n2.) 128");
                        printf("\n3.) Programs Never Ends");
                        printf("\n4.) 0");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");

                        break;
                    }  // pqMaster() case 1 closed

                case 2:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");

                        pf("\nWhat will be output of following c code?");
                        pf("\n #include<stdio.h>");
                        pf("\n int main()");
                        pf("\n {");
                        pf("\n\t int i=2,j=2;");
                        pf("\n\t while(i+1?--i:j++)");
                        pf("\n\t printf(\"%%d\",i);");
                        pf("\n\t return 0;");
                        pf("\n }");

                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) 1 ");
                        printf("\n2.) 0");
                        printf("\n3.) Programs Never Ends");
                        printf("\n4.) 3");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");



                        break;
                    }

                case 3:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");

                        pf("\nHow many times the while loop will get executed if a short int is 2 byte wide?");
                        pf("\n#include<stdio.h>");
                        pf("\nint main()\n\t {");
                        pf("\n\t int j=1;");
                        pf("\n\t while(j <= 255)\n\t\t {");
                        pf("\n\t\t printf(\"%%c %%d\n\", j, j);");
                        pf("\n\t\t j++\n\t\t }");
                        pf("\n\t return 0;\n\t");

                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) Infinite times ");
                        printf("\n2.) 255 times");
                        printf("\n3.) 256 times");
                        printf("\n4.) 254 times");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");




                        break;
                    }
                    //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
                case 4:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");


                        pf("\n #include<stdio.h>");
                        pf("\n int main()");
                        pf("\n {");
                        pf("\n\t int i;");
                        pf("\n\t for(i = 0;i<=3;i++);");
                        pf("\n\t printf(\"%%d\", i);");
                        pf("\n return 0;");
                        pf("\n }");

                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) 0 1 2 3 ");
                        printf("\n2.) 3  ");
                        printf("\n3.) 4");
                        printf("\n4.) Error");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");
                        break;
                    }
                case 5:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");

                        pf("\nWhich of the following errors would be reported by the compiler on compiling the program given below?");
                        pf("\ninclude<stdio.h>");
                        pf("\nint main()");
                        pf("\n{\n\t int a = 5;\n\t switch(a)\n\t {\n\t\tcase 1:\n\t\t printf(\"First\");");
                        pf("\n\t\tcase 2:\n\t\t printf(\"Second\");\n\t\tcase 3 + 2:\n\t\t printf(\"Third\");");
                        pf("\n\t\tcase 5:\n\t\t printf(\"Final\");\n\t\t break;\n\t}\n\t return 0;\n}");



                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) There is no break statement in each case. ");
                        printf("\n2.) Expression as in case 3 + 2 is not allowed.");
                        printf("\n3.) Duplicate case case 5:");
                        printf("\n4.) No error will be reported.");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");


                        break;
                    }
                case 6:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");

                        pf("\nWhat will be the output of the C program by considering 'b' as a User input?\n#include<stdio.h>\nint main()\n{\n int i = 1, j = 1;\n\t for(--i && j++ ; i<10; i+=2)\n\t {\n\t\t printf(\"loop \");\n\t }\n\t return 0;\n}");

                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) Compilation error ");
                        printf("\n2.) Program never ends");
                        printf("\n3.) loop loop loop loop loop");
                        printf("\n4.) None of the above");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");


                        break;
                    }
                case 7:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");

                        pf("\nIn which order do the following gets evaluated\n\n1.	Relational\n2.	Arithmetic\n\n3.	Logical\n4.	Assignment");




                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) 2134 ");
                        printf("\n2.) 1234");
                        printf("\n3.) 4321");
                        printf("\n4.) 3214");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");

                        break;
                    }
                case 8:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                        pf("\n#include<stdio.h>\nint main()\n{\n\t for(5;2;2)\n\t printf(\"Hello\");\n\t return 0;\n}");

                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) Compilation error ");
                        printf("\n2.) Program never ends");
                        printf("\n3.) Hello");
                        printf("\n4.) None of the above");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");

                        break;

                    }
                case 9:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                        pf("\n#include<stdio.h>\n#include<math.h>\nint main()\n{\n\t float a = 5.375;\n\t char *p;\n\t int i;\n\t p = (char*)&a;\n\t for(i = 0; i<1; i++)\n\t printf(\"%%d \", p[3]);\n\t return 0;\n}");


                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) 3 numbers of address p ");
                        printf("\n2.) first number of address p");
                        printf("\n3.) Some garbage value");
                        printf("\n4.) Nothing prints");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");

                        break;
                    }
                case 10:
                    {

                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                        pf("\nFind out the ERROR in this function ...");
                        pf("\n f(int a, int b)\n {\n\t int a;\n\t a = 20;\n\t return a;\n}");



                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) Missing parenthesis in return statement ");
                        printf("\n2.) The function should be defined as int f(int a, int b)");
                        printf("\n3.) Redeclaration of a");
                        printf("\n4.) None of above");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");

                        break;
                    }
                case 11:
                    {


                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                        pf("\nWhat will be the output of the C program?\n#include<stdio.h>\nint main()\n{\n\t char i = 0;\n\t for(;i++;printf(\"%%d\", i)) ;\n\t printf(\"%%d\",i);\n\t return 0;\n }");

                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) Compilation error ");
                        printf("\n2.) 0");
                        printf("\n3.) Program never ends");
                        printf("\n4.) 1");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");

                        break;
                    }
                case 12:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                        pf("\nWhat will be the output of the C program?\n#include<stdio.h>\nint main()\n{\n\t char *ptr = \"helloworld\";\n\t printf(ptr + 4);\n\t return 0;\n}");


                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) oworld ");
                        printf("\n2.) world");
                        printf("\n3.) hell");
                        printf("\n4.) hello");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");

                        break;
                    }
                case 13:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                        pf("\nWhat will be the output of the C program?\n#include<stdio.h>\nint main()\n\n{\n\t char *ptr = \"2braces.com\";\n\t printf(\"%%c\",*&*ptr);\n\t return 0;\n}");


                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) Address of 2 ");
                        printf("\n2.) 2");
                        printf("\n3.) Compilation Error");
                        printf("\n4.) Run time error");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");

                        break;
                    }
                case 14:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                        pf("\nWhat will be the output of the C program?\n#include<stdio.h>\n#include<string.h>\nint main()\n{");
                        pf("\n\tchar a = 30, b = 5;\n\tchar *p = &a, *q = &b;\n\t printf(\"%%d\", p - q);\n\t return 0;\n}");



                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) 1");
                        printf("\n2.) Run time error");
                        printf("\n3.) Compilation Error");
                        printf("\n4.) 25");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");

                        break;
                    }
                case 15:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                        pf("\n#include<stdio.h>\nint main()\n{\n\t char *ptr = \"Pointer-to-String\", i;\n\t printf(\"%%s\", ++ptr);\n\t return 0;\n}");


                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) ointer-to-String ");
                        printf("\n2.) o");
                        printf("\n3.) Pointer-to-String");
                        printf("\n4.) None of the above");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");

                        break;
                    }
                case 16:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                        pf("\nWhat will be the output of the C program?\n#include<stdio.h>\nint main()\n{");
                        pf("\n\t char arr[10] = \"Mango\", *ptr;\n\t ptr = (&arr[1]++);\n\t printf(\"%%s\",ptr++);");
                        pf("\n\t return 0;\n}");



                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) ango ");
                        printf("\n2.) ngo");
                        printf("\n3.) Compile time error");
                        printf("\n4.) Mango");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");

                        break;
                    }
                case 17:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                        pf("\nWhat will be the output of the C program ?\n#include<stdio.h>\nint main()\n{");
                        pf("\n\t char num = 127;\n\t num = num + 1;\n\t printf(\"%%d\", num);\n\t return 0;\n}");



                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) garbage value");
                        printf("\n2.) Compilation error");
                        printf("\n3.) range out of bond");
                        printf("\n4.) -128");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");

                        break;
                    }
                case 18:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                        pf("\n What will be the output of the C program ?");
                        pf("\n#include<stdio.h>");
                        pf("\nint main()");
                        pf("\n{ \n\t extern int num;");
                        pf("\n\t printf(\"%%d\", num);");
                        pf("\n\t return 0;");
                        pf("\n}");
                        pf("\n int num = 10;");



                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) 10 ");
                        printf("\n2.) Compilation error");
                        printf("\n3.) Linker error");
                        printf("\n4.) 254 times");
                        printf("\n5.) 0 ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");

                        break;
                    }
                case 19:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                        pf("\nWhat will be the output of the C program?");
                        pf("\n#include<stdio.h>");
                        pf("\nint main()");
                        pf("\n{");
                        pf("\n\t int size = sizeof(volatile) + sizeof(const);");
                        pf("\n\t printf(\"%%d\",++size);");
                        pf("\n\t return 0;");
                        pf("\n}");



                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) Compilation error ");
                        printf("\n2.) 4");
                        printf("\n3.) Runtime error");
                        printf("\n4.) 9");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");

                        break;
                    }
                case 20:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                        pf("\nWhat will be the output of the C program?");
                        pf("\n #include<stdio.h>");
                        pf("\n int main()");
                        pf("\n {");
                        pf("\n\t static int num = 6;");
                        pf("\n\t printf(\"%%d \",num--);");
                        pf("\n\t if(num)");
                        pf("\n\t main();");
                        pf("\n\t return 0;");
                        pf("\n\t }");

                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) Compilation Error ");
                        printf("\n2.) 6 5 4 3 2 1");
                        printf("\n3.) 5 4 3 2 1");
                        printf("\n4.) No output");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");

                        break;
                    }
                case 21:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                        pf("\nWhat will be the output of the C program?");
                        pf("\n #include<stdio.h>");
                        pf("\n int main()");
                        pf("\n {");
                        pf("\n\t char *ptr = \"c-aptitude%%s\";");
                        pf("\n\t printf(ptr);");
                        pf("\n\t return 0;");
                        pf("\n }");


                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) Compilation error ");
                        printf("\n2.) c-aptitude%s");
                        printf("\n3.) c-aptitudegarbagevalue");
                        printf("\n4.) c-aptitude");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");

                        break;
                    }
                case 22:
                    {
                         printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                         pf("\nWhat will be the output of the C program?");
                         pf("\n #include<stdio.h>");
                         pf("\n int main()");
                         pf("\n {");
                         pf("\n\t printf(\" %%%%%% \");");
                         pf("\n\t return 0;");
                         pf("\n }");



                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) % ");
                        printf("\n2.) No output");
                        printf("\n3.) %%");
                        printf("\n4.) %%%");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");

                        break;



                    }
                case 23:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                        pf("\n What will be the output of the C program?");
                        pf("\n #include<stdio.h>");
                        pf("\n int main()");
                        pf("\n {");
                        pf("\n\t static int num = 3;");
                        pf("\n\t if(--num)");
                        pf("\n\t {");
                        pf("\n\t\t main();");
                        pf("\n\t\t printf(\"%%d \",num);");
                        pf("\n\t }");
                        pf("\n\t return 0;");
                        pf("\n }");


                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) 2 1");
                        printf("\n2.) 0 0");
                        printf("\n3.) 1 1");
                        printf("\n4.) 1 0");
                        printf("\n5.) None of these ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");
                        break;
                    }
                case 24:
                    {
                        printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                        pf("\n #include<stdio.h>");
                        pf("\n int main()");
                        pf("\n {");
                        pf("\n\t typedef int num;");
                        pf("\n\t num num1 = 5;");
                        pf("\n\t printf(\"%%d\", num1);");
                        pf("\n\t return 0;");
                        pf("\n }");


                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) Compilation error");
                        printf("\n2.) 1");
                        printf("\n3.) 5");
                        printf("\n4.) Runtime error");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");


                        break;
                    }


                case 25:
                    {


printf("\n\n                              _______________");printf("\n                              | QUESTION %d |",demand);printf("\n                              ---------------\n");
                        pf("\n#include<stdio.h>");
                        pf("\nint main()");
                        pf("\n {");
                        pf("\n\t int a = 5;");
                        pf("\n\t a = 1, 2, 3;");
                        pf("\n\t printf(\"%%d\", a);");
                        pf("\n\t return 0;");
                        pf("\n }");


                        println();
                        printf("\t\t\t      OPTIONS \t");
                        println();

                        printf("\n1.) 3 ");
                        printf("\n2.) 5");
                        printf("\n3.) compilation error");
                        printf("\n4.) 1");
                        printf("\n5.) None of These ");
                        printf("\n\n 6.) Skip This Question         0.) Quit Test \n");

                        break;
                    }

                default :
                    {
                        printf("\n######################### WARNING !!! ENTER A VALID CHOICE #############################\n");
                        break;
                    }

           } // switch of pqMaster() closed

      }




      void calcResult( int TotalNoOfQues )
      {
          int totalRight = 0, j=0, k=1;
          int totalWrong = 0;
          println();
          pf("$$$$$$$$$$$$$$$$$$$$$$$$$  PRINTING  RESULT  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
          println();
          getch();

          do
          {
          	if(k == TotalNoOfQues+1)
          	    break;
          	QuestionsForMasterLevel( k ) ;

          	if(userAns[ k-1 ] == 0)
            {

                if( userAns[k-1] == realAns[k-1] )
                  {
                     totalRight++ ;
                     printf("\n                   __________");
                     printf("\n####### Status -->| NOTHING | \tANSWER ==> %d\t YOU CHOSE ==> SKIP",realAns[ k-1 ]  );
                     printf("\n                  -----------\n");
                     printExpNdLink( k ) ;

                  }


                 else
                  {
                     totalWrong++ ;
                     printf("\n                   __________");
                     printf("\n####### Status -->| NOTHING | \tANSWER ==> %d\t YOU CHOSE ==> SKIP ",realAns[ k-1 ] );
                     printf("\n                  -----------\n");
                     printExpNdLink( k ) ;

                  }
            }

            else
            {

              if( userAns[k-1] == realAns[k-1] )
   	          {
                 totalRight++ ;
                 printf("\n                   __________");
                 printf("\n####### Status -->| CORRECT | \tANSWER ==> %d\t YOU CHOSE ==> %d",realAns[ k-1 ] , userAns[ k-1 ]  );
                 printf("\n                  -----------\n");
				 printExpNdLink( k ) ;

              }


             else
              {
                 totalWrong++ ;
                 printf("\n                   __________");
                 printf("\n####### Status -->| UNCORRECT | \tANSWER ==> %d\t YOU CHOSE ==> %d",realAns[ k-1 ] , userAns[ k-1 ]  );
                 printf("\n                  -----------\n");
				 printExpNdLink( k ) ;
              }
            }


			if( (SIZE - k) %5 == 0 )
			{

				pf("\n***************** Press Enter To See Next 5 Result ********************");
	          	getch();
		  	}

		  	k++;
		  }while( j<= TotalNoOfQues);

            println();

            if( totalRight >= ( SIZE-3 ))
            { // Boss Of C Language ...
              //     ---------------------------- QUESTION %d -------------------------------
                println();
				pf("$$$$$$$$$$$$$$$$$$$$$   TOTAL SCORE  = %d / %d   $$$$$$$$$$$$$$$$$$$$$$$$$",totalRight, TotalNoOfQues);
				println();
				pf("$$$$$$$$$  AWWSOME !!! %s THE IS BOSS OF C Language  $$$$$$$$$$$$$$$$$$$$$ ",name);
				println();

            }
            else if( totalRight >= ( SIZE-6 ) )
            { // Good in C Language ...
				println();
				pf("$$$$$$$$$$$$$$$$$$$$$   TOTAL SCORE  = %d / %d     $$$$$$$$$$$$$$$$$$$$$$",totalRight,TotalNoOfQues);
				println();
				pf("$$$$$$$$$  GREAT !!! %s IS GOOD IN C Language   $$$$$$$$$$$$$$$$$$$$$$$",name);
				println();


            }
            else
            { // Work Hard Buddy !!!
			    println();
				pf("$$$$$$$$$$$$$$$$$$$$$   TOTAL SCORE  = %d / %d     $$$$$$$$$$$$$$$$$$$$$$",totalRight,TotalNoOfQues);
				println();
				pf("$$$$$$$$$ Work Hard Buddy !!! %s WORK HARD IN C Language   $$$$$$$$$$$$$ ", name);
				println();

            }


      }

      void printExpNdLink(int DemandOfExpLink)
      {
          switch(DemandOfExpLink)
          {
              case 1:
                    {

                        printf("####### Discuss Link --> https://www.2braces.com/c-questions/for-loop-questions-c-3");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\nHere, the char is declared as unsigned char. So the i++ in for loop can never yield negative value and i >= 0 never becomes false so that it loop for infinite number of times\n");

                      break;
                    }

              case 2:
                    {
                        printf("####### Discuss Link --> https://www.cquestions.com/2012/02/looping-questions-in-c-and-answers.html");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\nConsider the while loop condition: i + 1 ? -- i : ++j.\n In first iteration: \ni + 1 = 3 (True) \nSo ternary operator will return -–i i.e. 1\nIn c 1 means true so while condition is true.\n Hence printf statement will print 1 \nIn second iteration: i+ 1 = 2 (True)\nSo ternary operator will return -–i i.e. 0\nIn c zero means false so while condition is false. Hence program control will come out of the while loop.\n");


                        break;
                    }

                case 3:
                    {
                        printf("####### Discuss Link --> https://www.indiabix.com/online-test/c-programming-test/12");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\nThe while(j <= 255) loop will get executed 255 times. The size short int(2 byte wide) does not affect the while() loop.\n");


                        break;
                    }
                case 4:
                    {
                        printf("####### Discuss Link --> https://www.2braces.com/c-questions/for-loop-questions-c-4");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\nAlthough for loop terminated within itself, it iterates for 4 times and 4 alone is outputted.\n");

                        break;
                    }
                case 5:
                    {
                        printf("####### Discuss Link --> https://www.indiabix.com/online-test/c-programming-test/12");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\nBecause, case 3 + 2: and case 5: have the same constant value 5.\n");

                        break;
                    }
                case 6:
                    {

                        printf("####### Discuss Link --> https://www.2braces.com/c-questions/for-loop-questions-c-3");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\nhere, for(--i && j++ ; i<10; i+=2)\n for(0 && 1 ; i<10; i+=2)\n for(0 ; i<10; i+=2)\n printf(\"loop \") //executes\n then for loop becomes (i=2 ;i < 10; i++)\n then printf(\"loop \") //executes 4 times\n totally 5 loops prints\n");

                        break;
                    }
                case 7:
                    {
                        printf("####### Discuss Link --> https://www.indiabix.com/online-test/c-programming-test/17");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\n 2. Arithmetic operators: *, /, %, +, -  \n 1. Relational operators: >, <, >=, <=, ==, !=  \n 3. Logical operators : !, &&, ||  \n4. Assignment operators: =\n");

                        break;
                    }
                case 8:
                    {
                        printf("####### Discuss Link --> https://www.2braces.com/c-questions/for-loop-questions-c-3");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\n Here in condition place of for loop, we just put a non zero value, thus it becomes infinite for loop.\n");

                        break;
                    }
                case 9:
                    {
                        printf("####### Discuss Link --> https://www.2braces.com/c-questions/for-loop-questions-c-3");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\n p[3] is similar to some address[3] which returns some garbage value. As it is a character type the garbage value which is display will be between -128 to 127");

                        break;
                    }
                case 10:
                    {
                        printf("####### Discuss Link --> https://www.indiabix.com/online-test/c-programming-test/17");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\n f(int a, int b) The variable a is declared in the function argument statement.\n int a; Here again we are declaring the variable a. Hence it shows the error \"Redeclaration of a\" ");


                        break;
                    }
                case 11:
                    {

                        printf("####### Discuss Link --> https://www.2braces.com/c-questions/for-loop-questions-c-5");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\n Here, for(; i++; printf(\"%%d\", i)) ;\n i.e) for(;0;printf(\"%%d\", i));\n //condition fails for the first time itself\n thus the loop terminated, but the value of i is incremented to 1.\nNow printf(\"%%d\",i); printf the value 1 to the output.");


                        break;
                    }
                case 12:
                    {
                        printf("####### Discuss Link --> https://www.2braces.com/c-questions/pointer-questions-c-2");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\n Here the characters in string \"helloworld\" is placed in address as follows. ptr +4 tells the compiler to start reading from 4th place of a string \"Helloworld\" ");


                        break;
                    }
                case 13:
                    {
                        printf("####### Discuss Link --> https://www.2braces.com/c-questions/pointer-questions-c-2");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\n In pointer, address operator and Multiplication operator are always cancel each other. Thus *&*ptr = *ptr");

                        break;
                    }
                case 14:
                    {
                        printf("####### Discuss Link --> https://www.2braces.com/c-questions/pointer-questions-c-2");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\n Difference between any two variables of same data type are always one.");
                        break;
                    }
                case 15:
                    {
                        printf("####### Discuss Link --> https://www.2braces.com/c-questions/pointer-questions-c-7");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\nHere, the starting address i.e) The address of P is skipped by pre incrementing the address. \"Noting more than that\".");
                        break;
                    }
                case 16:
                    {
                        printf("####### Discuss Link --> https://www.2braces.com/c-questions/pointer-questions-c-7");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\nIn the above program, increment operator cannot be operated with unary address of operator.instead try ptr= (&arr[1]+1); to display ngo");

                        break;
                    }
                case 17:
                    {
                        printf("####### Discuss Link --> https://www.2braces.com/c-questions/data-types-questions-c-4");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\nThough a char is of ranging from -128 to 127. Whatever a integer number we are adding, it will loop through out its range. Thus after 127 the number is -128.");



                        break;
                    }
                case 18:
                    {
                        printf("####### Discuss Link --> https://www.2braces.com/c-questions/data-types-questions-c-4");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\nextern is a keyword which can link to the variable declared even out of the program.");



                        break;
                    }
                case 19:
                    {
                        printf("####### Discuss Link --> https://www.2braces.com/c-questions/data-types-questions-c-4");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\nVolatile and const are C Keywords and their individual size is 4 bytes");

                        break;
                    }
                case 20:
                    {
                        printf("####### Discuss Link --> https://www.2braces.com/c-questions/data-types-questions-c-4");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\nSimply, function is looping again and again till num becomes 0 to exit the if condition.");


                        break;
                    }
                case 21:
                    {
                        printf("####### Discuss Link --> https://www.2braces.com/c-questions/data-types-questions-c-5");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\n%%s is the format specifier and it won't print in any case.");



                        break;
                    }
                case 22:
                    {
                        printf("####### Discuss Link --> https://www.2braces.com/c-questions/data-types-questions-c-5");
                        println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                        printf("\nAlternative %% are treated as format specifier and it won't display..");

                        break;



                    }
                case 23:
                    {

                       printf("####### Discuss Link --> https://www.2braces.com/c-questions/data-types-questions-c-5");
                       println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                       printf("\nA static variable num is shared among all calls of a function finally ended up with a output 0");

                       break;
                    }
                case 24:
                    {
                       printf("####### Discuss Link --> https://www.2braces.com/c-questions/data-types-questions-c-5");
                       println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                       printf("\nHere the program creates a user defined type num and creates a variable num1 of type num. Hence there is no problem with the output");

                        break;
                    }
                case 25:
                    {
                       printf("####### Discuss Link --> https://www.2braces.com/c-questions/operators-questions-c-3");
                       println();printf("------------------------------------ EXPLAINATION ---------------------------- ");println();
                       printf("\nPriority for the values assigned to any variable is given from left to right.");
                       break;
                    }

                default :
                    {
                        printf("\n######################### WARNING !!! ENTER A VALID CHOICE #############################\n");
                    }


          }


      }



int main()
{

         unsigned int chForLevel ;

            puts("\n************************ Welcome ! ! ! Test Your C programming skills ******************************\n");
         printf("\nEnter Your Name --> ");
         ff;
         gets(name);
         printf("\n************************ Hello "); printf("%s",name);
                                                                   puts(" *********************************");


    while(1)
    {
            puts("\n************************ Choose The LEVEL Of The Game *********************************\n");

         printf("\n****** 0.EXIT ***************");
         printf("\n****** 1. Master Level ******");
         printf("\n****** 2. Senior Level ******");
         printf("\n****** 3. Junior Level ******\nSELECT YOUR LEVEL = ");


         ff;
         scanf("%ud", &chForLevel);

            switch( chForLevel )
            {

                case 0:
                    {
                        char ch;
                        println();
                        printf("\nAre u sure To Exit !!!  ( y / n ) ... ");
                        ch = getche();

                        if(ch == 'y' || ch == 'Y')
                            exit(1);
                        else
                            break;
                    }

                                    //  1. Master Level
                case 1:
                {
                    int  i, contQuesOrBack;

                    printf("\n***************************** Master Level  *********************************\n");
                    puts("\nHere You Will Have To Answer 30  Questions ....");

                    puts("\nPRESS '1' --> CONTINUE  ||  PRESS '0' --> Exit From \"Master Level\" ");
                    ff;
                    scanf("%d",&contQuesOrBack);

                    if( contQuesOrBack == 0 )
                        break;

                    switch( contQuesOrBack )
                    {

                            case 1:
                                {
                                    int retAns , k, resultShown = 0;
                                      // Function Containing All Master Questions

                                    println();
                                    puts("\n");

                                    //for( int k=1 ; k <= SIZE ; k++ )
                                    for(  k=1 ; k <= SIZE ; k++ )
                                    {
                                    // calling a fun to print ques from 1 to 30
                                    // line 40
                                        QuestionsForMasterLevel( k ) ;
                                        printf("\nEnter your Answer : ");
                                        ff;
                                        scanf("%d",&retAns);

                                        if( retAns == 0 )
                                        {   // wanna Quit

                                            char checkQuit;
                                            printf("\n#################################### Test Uncompleted ###################################\n");
                                            printf("\nDo you Really want to quit ... ( y / n ) : ");
                                            checkQuit = getche();
                                            printf("\n");
                                            if( checkQuit == 'y' || checkQuit == 'Y')  // Definetely want to QUIT
                                            {
                                               calcResult(25);
                                               resultShown= 1;
                                               break;
                                            }
                                            else
                                            {
                                                continue;
                                            }

                                        }
                                        else if( retAns == 6 )
                                        {
                                            // Jab skip karega toh Ans ZERO maana jayega  and Last me calcResult me Zero handle karlenge
                                            setUserAns(0);


                                        }
                                        // If user selected an Option
                                        else
                                        {  // wanna cont.

                                            setUserAns( retAns );

                                        }

                                    } // for Loop ended

                                    if( resultShown == 0)
                                        calcResult(25);

                                    printf("\n\n######################### Test Finished ... Best Of Luck ! ########################\n");
                                    getch();
                                    break;

                                }// outer case 1 closed

                    } // switch for " Master_Level Closed "
                }


                //  Senior level OPEN ...

				 case 2:
                {
                   int  i, contQuesOrBack;

                    printf("\n***************************** SENIOR Level  *********************************\n");
                    puts("\nHere You Will Have To Answer 20  Questions ....");

                    puts("\nPRESS '1' --> CONTINUE  ||  PRESS '0' --> Exit From \"SENIOR Level\" ");
                    ff;
                    scanf("%d",&contQuesOrBack);

                    if( contQuesOrBack == 0 )
                        break;
                    switch( contQuesOrBack )
                    {

                            case 1:
                                {
                                    int retAns , k , resultShown = 0;
                                      // Function Containing All Master Questions

                                    println();
                                    puts("\n");

                                    //for( int k=1 ; k <= SIZE ; k++ )
                                    for(  k=1 ; k <= ( SIZE-5 ) ; k++ )
                                    {
                                    // calling a fun to print ques from 1 to 30
                                    // line 40
                                        QuestionsForMasterLevel( k ) ;
                                        printf("\nEnter your Answer : ");
                                        ff;
                                        scanf("%d",&retAns);

                                        if( retAns == 0 )
                                        {   // wanna Quit

                                            char checkQuit;
                                            printf("\n#################################### Test Uncompleted ###################################\n");
                                            printf("\nDo you Really want to quit ... ( y / n ) : ");
                                            checkQuit = getche();
                                            printf("\n");
                                            if( checkQuit == 'y' || checkQuit == 'Y')  // Definetely want to QUIT
                                            {
                                               calcResult(20);
                                               resultShown= 1;
                                               break;
                                            }
                                            else
                                            {
                                                continue;
                                            }

                                        }
                                        else if( retAns == 6 )
                                        {
                                            // Jab skip karega toh Ans ZERO maana jayega  and Last me calcResult me Zero handle karlenge
                                            setUserAns(0);
                                        }
                                        // If user selected an Option
                                        else
                                        {  // wanna cont.

                                            setUserAns( retAns );

                                        }

                                    } // for Loop ended

                                    if( resultShown == 0 )
                                        calcResult(20);

                                    printf("\n\n######################### Test Finished ... Best Of Luck ! ########################\n");
                                    getch();
                                    break;

                                }// outer case 1 closed

                    } // switch for " Master_Level Closed "

                } // senior level closed ...

                // Junior level OPEN ...
                case 3:
                {
                    int  i, contQuesOrBack;

                    printf("\n***************************** JUNIOR Level  *********************************\n");
                    puts("\nHere You Will Have To Answer 15  Questions ....");

                    puts("\nPRESS '1' --> CONTINUE  ||  PRESS '0' --> Exit From \"SENIOR Level\" ");
                    ff;
                    scanf("%d",&contQuesOrBack);

                    if( contQuesOrBack == 0 )
                        break;
                    switch( contQuesOrBack )
                    {


                            case 1:
                                {
                                    int retAns , k , resultShown = 0;
                                      // Function Containing All Master Questions

                                    println();
                                    puts("\n");

                                    //for( int k=1 ; k <= SIZE ; k++ )
                                    for(  k=1 ; k <= ( SIZE-10 ) ; k++ )
                                    {
                                    // calling a fun to print ques from 1 to 15
                                    // line 40
                                        QuestionsForMasterLevel( k ) ;
                                        printf("\nEnter your Answer : ");
                                        ff;
                                        scanf("%d",&retAns);

                                        if( retAns == 0 )
                                        {   // wanna Quit

                                            char checkQuit;
                                            printf("\n#################################### Test Uncompleted ###################################\n");
                                            printf("\nDo you Really want to quit ... ( y / n ) : ");
                                            checkQuit = getche();
                                            printf("\n");
                                            if( checkQuit == 'y' || checkQuit == 'Y')  // Definetely want to QUIT
                                            {
                                               calcResult(20);
                                               resultShown= 1;
                                               break;
                                            }
                                            else
                                            {
                                                continue;
                                            }

                                        }
                                        else if( retAns == 6 )
                                        {
                                            // Jab skip karega toh Ans ZERO maana jayega  and Last me calcResult me Zero handle karlenge
                                            setUserAns(0);
                                        }
                                        // If user selected an Option
                                        else
                                        {  // wanna cont.

                                            setUserAns( retAns );

                                        }

                                    } // for Loop ended

                                    if( resultShown == 0 )
                                        calcResult(SIZE -10);

                                    printf("\n\n######################### Test Finished ... Best Of Luck ! ########################\n");
                                    getch();
                                    break;

                                }// outer case 1 closed

                    } // switch for " Master_Level Closed "

                } // senior level closed ...


				default:
                    {
                        println();
                        printf("\t\t\t\t Warning !!! Enter a Valid Choice ... ");


                    }
            }     // switch for " Choosing_Level Closed "
    }
 getche();
 return 1;
}// main closed


