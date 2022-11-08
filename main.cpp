// CPP Program to demonstrate main() with
// return type
#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <list>

 using namespace std;

   /* FUNCTION DEFINITION */

bool Validitycheck (char ip[16], string email, int num);
bool validateIP (char str[]);
void DepositMoney ();
void withdrawMoney ();
void displayBalance ();
void Transfer ();
void ChangeDetails ();
bool IPCheck (char str[]);
bool EmailCheck (string email);
bool NumberCheck (int num);


  // define any other function here.

// Main Program
int
main ()
{

int intialbalance = 10000;

cout <<"\t **************** WELCOME MR C++ EXPERT TO MY BANKING APPLICATION ******************* \n";
cout << endl;
cout <<"**********Please provide your credentials that are :: "<<endl

<<" \t **** IP-Address" << endl
 <<"\t **** Email" <<
endl
    <<"\t **** ID " << endl << endl << endl;

    //string ipaddress;
  char ipaddress[16];		// declare the size of string
  // cin.getline(str, 100); // use getline() function to read a string from input stream
  string email;

int id;
cout << "\t ******** Enter Your IP Address :";
cin.getline (ipaddress, 16);
cout << endl;
cout << "\t ******** Enter Your Email Address:";
cin >> email;
cout << endl;
cout << "\t ******** Enter Your ID :";
cin >> id;
cout << endl;

cout <<"******************** WAIT !! We are Checking Your Credentials ********************"
<<endl << endl;

    // Sleep(1000);

    /* CHECKING VALIDITY OF CREDENTIALS */
    bool checkresult = Validitycheck (ipaddress, email, id);	// This line call a function validitycheck with arguments ipaddress, email and id. The return
  // value is true or false

    // If ValidtyCheck is true move to next lines of code otherwise terminate processing
    if (checkresult)		// if checkresult is true
    {
cout << endl << endl;
cout <<" \t ***** What you want to Do ??? Choose the Action character *****"<<endl << endl;
cout << " \t   W : Money Withdraw" << endl
	<<"\t   D : Deposit"

<<
endl
 <<"\t   B : Balance" << endl
	<<"\t   T : Transfer" <<

endl
 <<"\t   C : Change Details" << endl

<<"\t   Q : Quit or Exit"
 <<
endl << endl;
string input;
cin >> input;
bool t = true;
while (t)

	{

if (input == "W" || input == "w")
	    {
cout << "Calling Withdraw Option";
t = false;

}

	  else if (input == "D" || input == "d")
	    {
cout << "Deposit";
t = false;

}

	  else if (input == "B" || input == "b")

	    {

cout << "Display Balance";
t = false;

}

	  else if (input == "T" || input == "t")
	    {
cout << "Transfer Balance";
t = false;

}
	  else if (input == "C" || input == "c")
	    {
cout << "Change Deails";
t = false;
}
	  else if (input == "Q" || input == "q")
	    {
cout << "QUIT";
t = false;

}

	  else

	    {


cout << endl;








cout <<







"Select correct value for Example W for Withdraw .... Try Again"







<<endl << endl;








cout << "   W : Money Withdraw" << endl
		<<"   D : Deposit"
 <<
endl
 <<"   B : Balance" << endl
		<<"   T : Transfer" <<

endl
 <<"   T : Transfer" << endl
		<<"   C : Change Details"
 <<endl
 <<"   Q : Quit or Exit"
		<<endl << endl;








cin >> input;








}








}








}








  else				// if checkresult is false
    {








cout <<



"\t \t **** check result failed, Please try again ****";








}









}

















/* Function Definition */

  // Function for Validity Check

bool Validitycheck (char ip[16], string email, int num)
{








    /* Here you need to perform three checks
       1. Call the Validate IP address Function -- Lab 4G.
       2. Call the Validate Email Address Function -- Lab 5A.
       3. Call the function for checking num >0000 and num <9999
     */

    // Example:
    bool xx;








bool icheck = validateIP (ip);








bool emailcheck = EmailCheck (email);








bool numcheck = NumberCheck (num);









if (icheck && emailcheck && numcheck)








    {








cout << " \t \t Check Successful -------------- " << endl;	// you can return boolean true value to main()
      xx = true;








}








  else








    {








cout << "\t \t Check Unsuccessful XXXXXXXXXXX" << endl;	//you can return boolean false value to main()
      xx = false;








}








cout << endl << endl;








cout << " \t \t CHECK Completed ........" << endl;










return xx;	// you should replace this to value your returning depending upon the credentials
}

  // Function for Deposit
void
DepositMoney (int initialbalance)
{






int deposit;
cout << "How much you want to deposit" << endl;
cin >> deposit;
if (deposit > 0)

    {

initialbalance = initialbalance + deposit;
cout << "Your new balance is:" << initialbalance;
}

    // Get how much user want to deposit and display balance after adding
}

  // Function for Withdraw

void
withdrawMoney ()
{








// Get how much user want to withdraw and display balance after minus
}








  // Function for Display Balance
void
displayBalance ()
{








    // display balance after adding
}








  //function for Transfer Money
void
Transfer (int initialbalance)
{






cout << "Transfer Balance";






int transfer;






cout << "How much to transfer" << endl;






cin >> transfer;






initialbalance = initialbalance - transfer;






cout << "your remains are:<< initialbalance";








// Get how much user want to transfer and display balance after transfer
}








  // Function for change Details

void
ChangeDetails ()
{


}

bool validateIP (char str[])
{







int iparray[4];	// this will hold values when "." is removed from the string e.g 192.168.1.1 ====> 192 168 1 1
  int i = 0;







    // The code to split the string using "." operator
  char *token = strtok (str, ".");






while (token != NULL)






    {






int num = stoi (token);	// this line convert string to integer. Example handling ip address 192.168.1.1
      iparray[i] = num;		// this line puts num to iparray for example iparray[0]=192, iparray[1]=168, iparray[2]=1, iparray[3]=1,
      token = strtok (NULL, ".");






i++;






}
int getArrayLength = sizeof (iparray) / sizeof (int);	//sizeof(iparray) is library function returns size in bytes when need to find number of elements
  // in iparray thats why we divided it by sizeof(int) which is 4 bytes.
  // if the token size is not equal to four
  if (getArrayLength - 1 != 3)






    {






return false;






}







    // validate each field of the IP-address
    for (int j = 0; j <= getArrayLength - 1; j++)






    {






	// check number if greater >0 and less than 255
	if (iparray[j] > 255 || iparray[j] < 0)






	{






return false;






}






}






return true;






}













  /* This function only converts array of characters to string Optional only used for testing */

string convertToString (char *a, int size)
{

int i;






string s = "";






for (i = 0; i < size; i++)

    {
s = s + a[i];
}



return s;



}

bool EmailCheck (string email)
{


    // your code for number check return true or false value. Lab 5A.

return true;


}



bool NumberCheck (int num)
{
if (num > 999 && num < 9999)
    {

return true;
}
  else
    {

return false;

}
    // code for number check, return true or false. Hint simple if statement for > and < logic

}

