/*
    Problem statement : Accept string from user and one charcter return the last occurance of that character
 
 Input : "Hello"
            l
 Output : 3

 Input : "Hello World"
              l
 Output : 9
 
 Input : "AE Demo"
                e
 Output : 4

 Input : "AE Demo"
               H
 Output : -1

 */
 
   #include<stdio.h>
 
 int LastOccurence(char str[],char ch)
 {
     int i = 0;
	 int iPos = -1;
	 
	if((str == NULL) || (ch == '\0'))
    {
        return -1;
    }
	 
     while(str[i] != '\0')
	 {
	    if(str[i] == ch)
		{
        iPos = i;
		}
		i++;
	 }	
	 return iPos;
 }
 
 
 int main()
 {
   char carr[30];
   int iRet = 0;
   char ch = '\0';
   
   printf("Enter The String \n");
   scanf("%[^'\n']s",carr);            // // Accept the input till user enerets enter key //not necessary to write &ch because array name consider as first index
   
   printf("Enter the character to check last occurance\n");
   scanf(" %c",&ch);
   
   iRet = LastOccurence(carr,ch);
   
   if(iRet == -1)
   {
	   printf("Given character is not present \n");
   }
   else
   {
     printf(" last occurance of given character is: %d\n", iRet);
   }
 
 return 0;
 }
 
 /*
 
 output
 
 D:\ProgramTopicWise\LB\4ProblemsOnString\LastOccurence>myexe
Enter The String
nikita
Enter the character to check last occurance
i
 last occurance of given character is: 3
 
 */