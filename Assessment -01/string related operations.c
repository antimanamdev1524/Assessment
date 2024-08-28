//reverse a string || Concatenation || Palindrome || Copy a string 
// Length of the string || Frequency of character in s string 
// Find number of vowels and consonants || Find number of blank spaces and digits 

#include<stdio.h>
#include<string.h>
//function for reverse string
int reverse (char a[])
{
	    int first = 0, last= strlen(a)-1;  
		  //strlen(a) means count the string length and -1 is using to subtract 1 from total string length to get last char  
        char temp;
    
        while (first<last)    //loop for string reverse
	   {
           temp = a[first];   //swap the string for reverse logic
           a[first] = a[last];
           a[last] = temp;
        
	    	first++;   //first char will be move to next(increasing order)
	    	last--;  //last char will be move to previous char (decreasing order)
	   }
}

//function for Concatenation
int merge(char p[10], char q[10], char r[25])
{
	    int i, j;     
	  
	    for(i=0; p[i]!='\0'; i++)    
	       {
	    	 r[i]= p[i];
	       }
	   
	    for(j=0; q[j]!='\0'; j++)
	       {
	    	 r[i]= q[j];
	    	 i++;
	       }	
		   r[i]='\0';
}
 
//function for palindrome
 int palindrome(char n[25])  
 {
		  //strlen(a) means count the string length and -1 is using to subtract 1 from total string length to get last char  
        int first = 0, last= strlen(n)-1;
        char temp;
    
        while (first<last)    //loop for string reverse
	   {
           temp = n[first];   //swap the string for reverse logic
           n[first] = n[last];
           n[last] = temp;
        
	    	first++;   //first char will be move to next(increasing order)
	    	last--;  //last char will be move to previous char (decreasing order)
        }
        
        if(n[first]==n[last])        //if string m is equal to string n (reverse of m) 
                {                
   	               printf("%s  is palindrom\n", n);
                }
                
	    else
		        {	
	               printf("%s is not palindrom\n", n);
	            }
	               return 0;
 }

//function for string copy
             int cpy(char x[10], char y[10])
                {
                  int i;
                  fflush(stdin);
            	  printf("Enter string: ");
    	          gets(x);
    	
	
	             for(i=0; x[i]!='\0'; i++)
	                {
		              y[i]= x[i];
	                }	
	                  y[i]= '\0';
                    
					printf("string copy: %s", y);  //logic for copy to string
                }
                
//function for string length
             int length(char c[10])			    
                {  
				int i; 
				    int len=0;
					 fflush(stdin);               
                   printf("Enter string: ");
                   gets(c);
	
	               for(i=0; c[i]!='\0'; i++)   //loop ko not null tk consider krne k liye '\0' means not null ka use kiya h
                   {
   	                 len++;
                   }
   
                    printf("\n Length of string is: %d\n", len);
		        }
		 
//function for Frequency of character in s string
             int char_frequency(char l[25], char ch) 
		        {
                    int i, count = 0;        
			         
					 for (i=0; l[i]!='\0'; i++)
			             {
                            if (l[i]==ch) 
					         {
                                count++;
                             }
                         }
                           return count;
                }   

// Function to count vowels and consonants
             void check_vowels_consonants(char letter[25], int*vowels, int*consonants) 
		          {
		  	         int i;
		  	         *vowels=0;
			         *consonants=0;
              
			         for (i=0; letter[i]!='\0'; i++) 
			              {
                             char ch = tolower(letter[i]);
                               if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
					              {
                                    (*vowels)++;
                                  }
					          else if (isalpha(ch)) 
					              {
                                    (*consonants)++;
                                  }
                          }
                  }

// Function to count blank spaces and digits
             void count_space_digits(char z[100], int*space, int*digits)
                  {
                  	 int i;
                     *space=0;
                     *digits=0;
        
		             for (i=0; z[i]!='\0'; i++) 
		                 {
                           if (isspace(z[i])) 
			                  {
                                 (*space)++;
                              }
		                   else if (isdigit(z[i])) 
			                  {
                                 (*digits)++;
                              }
                         }
                  }

main()
{
	    int choice;
		printf("  ...WELCOME...  \n ");	
	    
        do
      {
      	
	         printf("\nMain Menu: \n1. Reverse string \n2. Concatenation\n");;
	         printf("3. Palindrome \n4. String Copy \n5. String length\n");
	         printf("6. Frequency of character in s string\n7. Count Vowels and Consonants \n");
			 printf("8. Count blank spaces and digits \n9. Exit \n");
	
	         printf("\n\nPlease Enter your choice: ");
             scanf("%d", &choice);
      
	         fflush(stdin); // To consume the newline character left by scanf
	
        switch(choice)
   {	
            case 1:	//reverse string
            {
	 		      char a[50];

   	 	          printf("(To reverse the string)\na: ");
                  gets(a);
   
                  reverse(a);
                  printf("Reverse of a: %s\n\n", a);
             break;
            }
 
            case 2:	//Concatenation
            {
	              char p[10], q[10], r[25];
	              printf("\n(To merge string)\nP: ");
	              gets(p);
	              
	              printf("Q: ");
	              gets(q);
	
	              merge(p, q, r);
                  printf("string merge: %s\n", r); 
             break;
            }
  
            case 3:	//palindrome
            {	
	              char n[25];
				  fflush(stdin); 
 	              printf("\n(To check palindrome string)\nstring_1: ");
                  gets(n);  //string1 user input
 	
                  palindrome(n);
             break;
            }

            case 4:  //string copy
            {   
 	              char x[10], y[10];
                  cpy (x, y); 
	              printf("string copy: %s\n", y);
             break;
            }

            case 5:	//string length
            {
	              char c[10];
	              printf("\n(To find string length)\nstring:  ");
                  gets(c);
	
	              printf("string length: %d\n", strlen(c));
             break;
            }

             case 6:	//Frequency of character in s string
            {	
                  char l[25], ch; 
                  fflush(stdin); 
                  
                  printf("\n\n(To find the frequency of a character)\nstring: ");
                  gets(l);
    
                  printf("(To find the frequency of a char in string)\nEnter the character: ");
                  scanf("%c", &ch);
    
                  printf("Frequency of %c: %d\n", ch, char_frequency(l, ch));
             break;
            }

             case 7:     //Count vowels and consonants 
            {
                  char letter[25];
                  int vowels=0, consonants=0;
    
                  printf("\n(To count vowel and consonent)\nEnter a letter here: ");
                  gets(letter);
    
                  check_vowels_consonants(letter, &vowels, &consonants);
    
                  printf("Number of vowels: %d\n", vowels);   
                  printf("Number of consonants: %d\n", consonants);
             break;
            }

             case 8:	//Count blank spaces and digits		
            {
	              char z[100];
	              int digits=0, space=0;	
	              printf("\n(To count blank spaces and digits)\nType here...  ");
	              gets(z);
	
                  count_space_digits(z, &space, &digits);
    
                  printf("Number of blank space: %d\n", space);
                  printf("Number of digits: %d\n", digits);
             break;
            }

             default:  //exit 
            {
                  printf("Exit\n\n");
                  break;
            }             
      }
              if (choice !=0 || choice==9)
			   {
			   	 if (choice == 9) 
					{	
                       break; // Exit the loop
                    }
                else
                   {
                      printf("Do you want to continue? (Press 0 for Yes, 9 for No): ");
                      scanf("%d", &choice);
                   }					
               }           
}       
       while(choice !=9 || choice==0);
	    
	   printf("\nThank You\n\n "); 
}

