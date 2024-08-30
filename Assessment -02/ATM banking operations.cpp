#include<iostream>
#include<time.h> 
using namespace std;

class myclass
{
    public:

    myclass() //constructor
	    {
		        cout<<"  Welcome To ATM\n";
		        cout<<"\n.......................\n\n";
	    }
		 
    Date_Time()    //Function_1
	    {
	            time_t ct=time(0);  //time_t (data type), time(0) (it returns value in second forms)
                string currenttime=ctime(&ct);     //show current day & time name as 
                   cout<<"Current date: "<<currenttime;
		           cout<<"\n.......................\n";	
	    }
    
    Menu()   //Function_2
	    {
                int choice;   
                
	            do   //loop for again and again execution 
	          	  {
                     cout<<"Press 1 and then Press Enter to access Your Account via pin number\n\tor\nPress 0 and press Enter to get Help_ ";
                     cin>>choice; 
			         
			            switch(choice)
                           {
      	          	          case 1:    //press 1 for atm account access and helps to reach next step
	      	          	             { 
	      	       	          	        cout<<"\n-------\n\t\t:::::::ATM ACCOUNT ACCESS:::::::\n";
			 	          	            break;	          	
		   	          	           	 }	
	  	          	          case 0:     
	  	  	          	             {	  	  	 
	  	  	 	          	            break;
		  	          	             }
	   	           	          default:
	   	 	          	             {
	   	 		          	            cout<<"/nPlease enter correct choice";
		 	          	          	 }        
                            } 
					 
  
                  } while(choice==0 || choice!=1);   //untill loop of while condition does not false 
        }
  
	 
    ATM_AccountAccess()   //Function_3   (function for atm pin)
	    {                   
    	        int pin;
    	        
    	            cout<<"\nEnter Your Acc Pin Access Number! [onlu one attemp is allowed]:  ";
         	        cin>>pin;
    	
    	        if(pin==12345)  //(pin number is fixed according to assessment)
    	               {
    	   	              cout<<" \n-------\n \t\t:::::::ATM ACCOUNT STATUS:::::::";
    	   	              cout<<"\n     You must have the correct pin number to access this account. \n  See your bank representative for assistance during bank opening hours\n\t\tThanks for, your choice today!!\n\n";
		               }
		        else    
		               {
		   	              cout<<"  \n\t\t...THANK YOU...\n";
		   	              cout<<"You had made your attempt which failed!!! No more attempts allowed!! Sorry";
		               }
	    }
// after enter correct pin next step is....
         
    Main_Menu()    //Function_4   (function for display main menu)
        { 
                int n, balance=2000;  //balance value is fixed by developer for better understanding (it's temporary) 
    	        
			do   //loop for again and again execution unitll user doesn't want to stop it
    	        {  	  
    	  	          cout<<"\nEnter[1] to Deposit Cash\n";
    	  	          cout<<"Enter[2] to Withdraw Cash\n";
    	  	          cout<<"Enter[3] to Balance Inquiry\n";
    	  	          cout<<"Enter[0] to Exit ATM\n";
    	  	  
                      cout<<"Enter Your Choice";
    	  	          cin>>n;
    	  	  
    	  	        if(n==0)
    	                 {
    	        	        cout<<"\n\nExit";
    	        	        break;
				         }
			  
    	            switch(n)
    	            {
    	   	             case 1:     //deposit amount with customer details
    	   	  	              {  	   	  	 	   	   	  	 	
    	   	  	 	             cout<<"\n-------\n\t\t:::::::ATM ACCOUNT DEPOSIT SYSTEM:::::::\n\n";
    	   	  	          
							    string  name, address, branch;	  
	                            int acc_number;
    	   	     	   	  	 	
					             cout<<"The Names of the Account Holders are: ";
    	   	  	 	             cin>>name;
    	   	  	 	             cout<<"The Account Holders' address is: ";
    	   	  	 	             cin>>address;
    	   	  	 	             cout<<"The Branch location is: ";
    	   	  	              	 cin>>branch;
    	   	  	 	             cout<<"Account number: ";
    	   	  	 	             cin>>acc_number;
	
    	   	  	 	             cout<<"Present available balance is: "<<balance;
                  
                                //deposit logic 
		                        int add_amt;		            
					             cout<<"\nEnter the Amount to be Deposited RS. ";
		                         cin>>add_amt;
		                      		   		 			                   		 
		 	                     balance= balance + add_amt;    //new balance   
		 	                     cout<<"\nYour new available Balanced Amount is Rs. "<<balance;		 	                  
			                     
			                     cout<<"\nPress any key to continue...";
			                     cin.ignore();
								 cin.get();
								 break;
				              }
				 
			             case 2:   //withdrawal amount with customer details
    	   	  	              {
    	   	  	 	             cout<<"\n-------\n\t\t:::::::ATM ACCOUNT WITHDRAWAL SYSTEM:::::::\n";
    	   	  	 	             
//								string  name, address, branch;	  
//	                            int acc_number;
//	                
//					             cout<<"The Names of the Account Holders are: ";
//    	   	  	 	             cin>>name;
//    	   	  	 	             cout<<"The Account Holders' address is: ";
//    	   	  	 	             cin>>address;
//    	   	  	 	             cout<<"The Branch location is: ";
//    	   	  	              	 cin>>branch;
//    	   	  	              	 cout<<"Account number: ";
//    	   	  	              	 cin>>acc_number;
	
    	   	  	              	 cout<<"Present available balance is: "<<balance;  //it will be show new balance (if deposited or not)
                  
                                //withdrawal logic
		                        int withdrawal_amt;
		                         cout<<"\nEnter the Amount to be Withdrawal RS. ";
		                         cin>>withdrawal_amt;
		                    		 			                   		 
		 	                    balance = balance - withdrawal_amt;   //  //it will be calculate new balance (after withdrawal)
		 	        
		 	                    if(balance>=withdrawal_amt)   //condition to show withdrawal balance (if user is trying to withdrawal)
		 	                      {
		 	         	            cout<<"\nYour new available Balanced Amount is Rs. "<<balance;
					              }
					            else
					              {
					 	            cout<<"\nInsufficient Available Balance in your account\n    \t Sorry !!\n";
					              }		 	       						 	              
			                     
			                     cout<<"\nPress any key to continue...";
			                     cin.ignore();  //ignore buffering
			                     cin.get();   //it help to stop directly show next execution without press enter key
								 break;
				              }
				              
			             case 3:   //it shows current balance
			  	              {
			  	 	             cout<<"\n-------\n\t\t:::::::Check Balance:::::::\n\n";
			  	 	             cout<<"Your Account Balance is: "<<balance<<endl;
			  	                 
			  	                 cout<<"\nPress Enter key to continue...";
								 cin.ignore();   //works as fflush(stdin) to stop buffering
								 cin.get();   //wait for user input for exist or next scree
			  	 	             break;
				              }
				              
			             default:   //if user entered incorrect choice 
			  	              {
			  	 	            if(n!=0 && n>3)
			  	 	              cout<<"\nplease enter correct choice...\n";			  	 
			  	                  break;	
				              }			
		            }			   
               } 
			   while(n!=0);	  		 		  		  	
	    }
		  	 
   ~myclass()    //destructor
	    {
		     cout<<"\nThank You";
	    }
};

main()      //main function
{	
	myclass obj;    //class named myclass is calling  all the function 
	obj.Date_Time();	
	obj.Menu();
	obj.ATM_AccountAccess();
	obj.Main_Menu();
}
