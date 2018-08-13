/* 
 AUTHOR: N.J. Cagomoc
 
 PROGRAM: Simple Mathematical and Science Problem
 DESCRIPTION: This program calculates the number of correct answer per category 
 
*/
#include<iostream>
using namespace std;
int main()
{
	// Declare the variables
	string FN;
	string LN;
	char MI;
	char choice;
	string menu="yes";
	
	cout << "Enter First name :" ;
	cin >> FN;
	cout << "Enter Surname :" ;
	cin >> LN;
	cout << "Enter Middle Initial :" ;
	cin >> MI;
	
	
	   while(menu=="yes"||menu=="Yes"||menu=="YES")
	{
		
		
		//Prompt the user to enter his/her choice
		cout << "Enter your choice"<< endl;
		cout << " \n  a- Mathematical Problem \n  b- Science Problem \n\n Answer :" ;
		cin >> choice;
		cout << "\n\n";
		
		if(choice=='a')
		{
			
			//Declare the varibles
			float a,d,e,f;
			float b;
			float c;
			int score=0;
			bool iscorrect;
			string again="yes";
	
	
	while(again=="yes"||again=="Yes"||again=="YES")
	{
			
			cout << "Mathematical Problem" << endl; 
			
			//Problem No.1
			cout << "1.) How many positive factors does 100 have ? " << endl;
			cout << "Your answer is :";
			cin >> a;
			 iscorrect =a==9;
			 
			 if (iscorrect)
			   {
			 	cout << a << " is correct"<< endl;
			 	score++;
			 	cout << "\n\n";
			   }
			   else
			   {
			 	cout << a << " is wrong"<< endl;
			 	cout << "\n\n";
			   }
			 
			 //Problem No.2
			 cout << "2.) Find the sum of all counting numbers from 1-10000" << endl;
			 cout << "Your answer is :" ;
			 cin >> b;
			  iscorrect =b==50005000;
			  
			  if (iscorrect){
			 	cout << b << " is correct"<< endl;
			 	score++;
			 	cout << "\n\n";
			    }
				else
				{
			 	cout << b << " is wrong"<< endl;
			 	cout << "\n\n";
			   }
			 
			 //Problem No.3
			 cout << "3.) What is the greatest number of bags that can be use to hold 55 marbles if each bag must contain atleat 1 marble but no two bags may contain the same number of marbles" <<  endl;
			 cout << "Your answer is :";
			 cin >> c;
			 iscorrect =c==6;
			 
			 if (iscorrect){
			 	cout << c << " is correct"<< endl;
			 	score++;
			 	cout << "\n\n";
			   }
			   else
			   {
			 	cout << c << " is wrong" << endl;
			 	cout << "\n\n";
			   }
			
			 
			cout << LN << "," << FN << " " << MI << "." << "\n" << endl;
			cout << "Your score in Mathematical Problem is :" <<score << "\n" << endl;
			
		    // Indicates if you passed or failed	
		 if (score>=2)
		 {
		 	cout << "You passed in this category" << "\n" <<endl ;
		 }
		 else
		 {
		 	cout << "You Failed in this category" << "\n" <<endl;
		 }	
		 
		 
		 //loop to try it again
	     cout << "\n\n Do you want to try it again? (yes/no):";
	     cin  >> again;
	     cout << " \n\n\n";
    	}
		
		//loop to go back to the menu	
		 cout << "Do you want to return to the menu? (yes/no)";
		 cin >> menu;
		 cout <<"\n\n";
		 
       }
	   
	  
       
    else if(choice=='b')
	   {
	   	
	   	//Declare the variables
		string aa,bb,cc,dd,ee,ff;
	   	string gg,hh,ii;
		float jj,kk,ll;
		int score=0;
		bool iscorrect;
	    string again="yes";
	
	
	  while(again=="yes"||again=="Yes"||again=="YES")
	   {
		
		  cout << "Science problem is divided into four phase " << "\n" << " \n 1st-Biology \n 2nd-Earth Science \n 3rd-Chemistry \n 4th-Physics" <<endl;
		
		  cout << "\n" << " Biology " << "\n" <<endl;
		
		//Problem No.1
	    cout << "1.) The part of a flower from which fruits are formed is the ____"  << endl;
			cout << "Your answer is :";
			cin >> aa;
			 iscorrect =aa=="ovary";
			 
			 if (iscorrect){
			 	cout << aa << " is correct"<< endl;
			 	score++;
			 	cout << "\n\n";
			 }else{
			 	cout << aa << " is wrong"<< endl;
			 	cout << "\n\n";
			 }
		
		//Problem No.2	 
	    cout << "2.) The tiny vessels that supply cells with oxygen and nutrients" << endl;
			 cout << "Your answer is :" ;
			 cin >> bb;
			  iscorrect =bb=="capillaries";
			  
			  
			  if (iscorrect){
			 	cout << bb << " is correct"<< endl;
			 	score++;
			 	cout << "\n\n";
			 }else{
			 	cout << bb << " is wrong"<< endl;
			 	cout << "\n\n";
			 }
		
		//Problem No.3	 
		cout << "3.) What is the product of photosynthesis ?" <<  endl;
			 cout << "Your answer is :";
			 cin >> cc;
			 iscorrect =cc=="oxygen";
			 
			 if (iscorrect){
			 	cout << cc << " is correct"<< endl;
			 	score++;
			 	cout << "\n\n";
			 }
			 else
			 {
			 	cout << cc << " is wrong" << endl;
			 	cout << "\n\n";
			 }
			
			
		cout << "\n" << " Earth Science " <<"\n" << endl;
		
		//Problem No.4
		cout << "4.) The layer of the atmosphere closest to the earth is ____" << endl;
			cout << "Your answer is :";
			cin >> dd;
			 iscorrect =dd=="stratosphere";
			 
			 if (iscorrect){
			 	cout << dd << " is correct"<< endl;
			 	score++;
			 	cout << "\n\n";
			 }
			 else
			 {
			 	cout << dd << " is ";
{
			 	cout << dd << " is wrong"<< endl;
			 	cout << "\n\n";
			 }
		
		//Problem No.5	 
		cout << "5.) The best type of soil for growing plants is ____" << endl;
			 cout << "Your answer is :" ;
			 cin >> ee;
			  iscorrect =ee=="clay";
			  
			  if (iscorrect){
			 	cout << ee << " is correct"<< endl;
			 	score++;
			 	cout << "\n\n";
			 }
			 else
			 {
			 	cout << ee << " is wrong"<< endl;
			 	cout << "\n\n";
			 }
		
		//Problem No.6	 
		cout << "6.) Boiling point of water in celsius is _____" << endl;
			 cout << "Your answer is :" ;
			 cin >> ff;
			  iscorrect =ff=="100";
			  
			  if (iscorrect){
			 	cout << ff << " is correct"<< endl;
			 	score++;
			 	cout << "\n\n";
			 }
			 else
			 {
			 	cout << ff << " is wrong"<< endl;
			 	cout << "\n\n";
			 }
		
		//Problem No.7	 
		cout << "7.) The process in which rocks are broken into soil is _____" <<  endl;
			 cout << "Your answer is :";
			 cin >> gg;
			 iscorrect =gg=="earthquake";
			 
			 if (iscorrect){
			 	cout << gg << " is correct"<< endl;
			 	score++;
			 	cout << "\n\n";
			 }
			 else
			 {
			 	cout << gg << " is wrong" << endl;
			 	cout << "\n\n";
			 }
			
			
		cout << "\n" << " Chemistry " <<"\n" << endl;
		
		//Problelm No.8
		cout << "8.) The simplest of substance is ____" << endl;
			cout << "Your answer is :";
			cin >> hh;
			 iscorrect =hh=="element";
			 
			 if (iscorrect){
			 	cout << hh << " is correct"<< endl;
			 	score++;
			 	cout << "\n\n";
			 }
			 else
			 {
			 	cout << hh << " is wrong"<< endl;
			 	cout << "\n\n";
			 }
		
		//Problem No.9	 
		cout << "9.) Atoms of the same element with different numbers of neutons is _____" << endl;
			cout << "Your answer is :";
			cin >> ii;
			 iscorrect =ii=="isotopes";
			 
			 if (iscorrect){
			 	cout << ii << " is correct"<< endl;
			 	score++;
			 	cout << "\n\n";
			 }
			 else
			 {
			 	cout << ii << " is wrong"<< endl;
			 	cout << "\n\n";
			 }
			 
			 
		cout << "\n" << " Physics " << "\n" << endl;
		
		//Problem No.10
		cout << "10.) The area of a rectangle with length of 4 , width of 6 and the height of 7 is _____" << endl;
			cout << "Your answer is :";
			cin >> jj;
			 iscorrect =jj==168;
			 
			 if (iscorrect){
			 	cout << jj << " is correct"<< endl;
			 	score++;
			 	cout << "\n\n";
			 }
			 else
			 {
			 	cout << jj << " is wrong"<< endl;
			 	cout << "\n\n";
			 }
		
		//Problem No.11	 
		cout << "11.) What is the circumference of a circle with radius of 5 ? " << endl;
			 cout << "Your answer is :" ;
			 cin >> kk;
			  iscorrect =kk==104.72;
			  
			  if (iscorrect){
			 	cout << kk << " is correct"<< endl;
			 	score++;
			 	cout << "\n\n";
			 }
			 else
			 {
			 	cout << kk << " is wrong"<< endl;
			 	cout << "\n\n";
			 }
		
		//Problem No.12	 
		cout << "12.) With force of 200N and area of 100 sqmeter .The pressure is ______" <<  endl;
			 cout << "Your answer is :";
			 cin >> ll;
			 iscorrect =ll==2;
			 
			 if (iscorrect){
			 	cout << ll << " is correct"<< endl;
			 	score++;
			 	cout << "\n\n";
			 }
			 else
			 {
			 	cout << ll << " is wrong" << endl;
			 	cout << "\n\n";
			 }
			 
			cout << LN << "," << FN << " " << MI << "." << "\n" << endl;
			cout << "Your score for science problem is :" <<score << endl;\
			
		//Indicates if you passed or failed	
		if (score>=6)
		 {
		 	cout << "You passed in this category" << "\n" <<endl ;
		 }
		 else
		 {
		 	cout << "You Failed in this category" << "\n" <<endl;
		 }
		 
		 //loop to try it again
	    cout << "\n\n Do you want to try it again? (yes/no):";
	    cin  >> again;
	    cout << " \n\n\n";
	    }
		
		//loop to go back to the menu
		 cout << "Do you want to return to the menu? (yes/no) :";
		 cin >> menu;
		 cout <<"\n\n";
		}
	}
   
   return 0;
   }
}


