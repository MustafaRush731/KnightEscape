/*--------------------------------------------
   Program 2: Knight Escape
   The objective of this game is to get the white knight to the empty
	square in the upper right-hand corner of the board.
	
	The knight can only move in the way that it does during a traditional
	chess game. This means that a knight can only move in a valid L-shape
	(two squares in a horizontal direction, then one in a vertical direction OR 
	two squares in a vertical direction, then one in a horizontal direction).
		       
   Course: CS 141, Spring 2022
   System: Replit
   Author: Mustafa Rushdi
    
 ---------------------------------------------*/

#include <iostream>		// for input and output
#include <cctype>		   // for toupper()
using namespace std;

// Global variables for the pieces are allowed for this program,
// but will generally not be allowed in the future.
// You will likely want to declare global variables at least for the 25 board positions.
// ...

string p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25;
char menuOption;
int sourcePosition, designatedPosition;
int moveNumber;
int score;



// Characters of the pieces to be used on the board
// Note that these are global constants, so their values cannot be changed.
const string WhiteKnight = "\u2658";		// White knight character
const string BlackKnight = "\u265E";		// Black knight character
const string BlankPosition = " ";           // Blank position character
//--------------------------------------------------------------------------------
// Display welcome message, introducing the user to the program and
// describing the instructions for the game

void displayWelcomeMessage()
{
    cout << "Program 2: Knight Escape \n"
         << "CS 141, Spring 2022, UIC \n"
         << " \n"
         << "The objective of this puzzle is to get the white knight "
		 << "up to the empty square in the top right corner of the board. "
		 << "Use standard knight moves from a traditional chess game, "
		 << "where a knight moves in an L-shape. \n"
		 << "This means that a knight can only move either "
		 << "1) two squares in a horizontal direction, then one in a vertical direction, OR "
		 << "2) two squares in a vertical direction, then one in a horizontal direction."
		 << " \n"
		 << "Your score decreases by 5 with each valid move, and by 10 with each invalid move. \n"
		 << "Try to complete the puzzle with the smallest number of valid moves!"
    	 << endl;
}//end displayWelcomeMessage()

// I created this function to give each variable a value and also be able to reset the game

void setBoard()
{
    p1=p2=p3=p4=p6=p7=p8=p9=p10=p11=p12=p13=p14=p15=p16=p17=p18=p19=p20=p22=p23=p24=p25=BlackKnight;
    p21=WhiteKnight;
    p5=BlankPosition;
    score = 500;
    moveNumber = 1;
}

// This string is used to get the value in each position so i could identify if it has a knight or blank space

string getPosition(int position)
{
    switch(position){
    case 1: return p1; break;
    case 2: return p2; break;
    case 3: return p3; break;
    case 4: return p4; break;
    case 5: return p5; break;
    case 6: return p6; break;
    case 7: return p7; break;
    case 8: return p8; break;
    case 9: return p9; break;
    case 10: return p10; break;
    case 11: return p11; break;
    case 12: return p12; break;
    case 13: return p13; break;
    case 14: return p14; break;
    case 15: return p15; break;
    case 16: return p16; break;
    case 17: return p17; break;
    case 18: return p18; break;
    case 19: return p19; break;
    case 20: return p20; break;
    case 21: return p21; break;
    case 22: return p22; break;
    case 23: return p23; break;
    case 24: return p24; break;
    case 25: return p25; break;
}
return "";
}


//This function is used to return the possible L moves a character can make at a certain position

bool ValidMove(){
   if (sourcePosition == 1){
      if (designatedPosition == 12 || designatedPosition == 8 ){
         return true;
      }
      else{
         return false;
      }
   }
   if (sourcePosition == 2){
      if (designatedPosition == 9 || designatedPosition == 11 || designatedPosition == 13){
         return true;
      }
      else{
         return false;
      }
   }
   if (sourcePosition == 3){
      if (designatedPosition == 14 || designatedPosition == 10 || designatedPosition == 12 || designatedPosition == 6)
      {
         return true;
      }
      else{
         return false;
      }
   }
      if (sourcePosition == 4){
      if (designatedPosition == 7 || designatedPosition == 15 || designatedPosition == 13)
      {
         return true;
      }
      else{
         return false;
      }
   }   
   if (sourcePosition == 5){
      if (designatedPosition == 14 || designatedPosition == 8)
      {
         return true;
      }
      else{
         return false;
      } 
   }   
   if (sourcePosition == 6){
      if (designatedPosition == 3 || designatedPosition == 13 || designatedPosition == 17)
      {
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 7){
      if (designatedPosition == 4 || designatedPosition == 16 || designatedPosition == 14 || designatedPosition == 18)
      {
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 8){
      if (designatedPosition == 1 || designatedPosition == 11 || designatedPosition == 15 || designatedPosition == 17 || designatedPosition == 19 || designatedPosition == 5)
      {
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 9){
      if (designatedPosition == 2 || designatedPosition == 18 || designatedPosition == 20 || designatedPosition == 12)
      {
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 10)
   {
      if (designatedPosition == 3 || designatedPosition == 13 || designatedPosition == 19)
      {
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 11){
      if (designatedPosition == 2 || designatedPosition == 13 || designatedPosition == 18 ||designatedPosition == 22)
      { 
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 12){
      if (designatedPosition == 1 || designatedPosition == 3 || designatedPosition == 21 || designatedPosition == 23 || designatedPosition == 19 || designatedPosition == 9)
      {
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 13){
      if (designatedPosition == 2 || designatedPosition == 4 || designatedPosition == 6 || designatedPosition == 10 || designatedPosition == 16 || designatedPosition == 17 || designatedPosition == 19 || designatedPosition == 20)
      {
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 14){
      if (designatedPosition == 3 || designatedPosition == 5 || designatedPosition == 7 || designatedPosition == 17 || designatedPosition == 23 || designatedPosition == 25)
      {
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 15){
      if (designatedPosition == 24 || designatedPosition == 8 || designatedPosition == 18 || designatedPosition == 4)
      {
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 16){
      if (designatedPosition == 13 || designatedPosition == 23 || designatedPosition == 7)
      {
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 17){
      if (designatedPosition == 7 || designatedPosition == 8 || designatedPosition == 14 || designatedPosition == 24)
      {
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 18){
      if (designatedPosition == 7 || designatedPosition == 9 || designatedPosition == 11 || designatedPosition == 15 || designatedPosition == 21 || designatedPosition == 25)
      {
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 19){
      if (designatedPosition == 12 || designatedPosition == 22 || designatedPosition == 8 || designatedPosition == 10){
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 20){
      if (designatedPosition == 13 || designatedPosition == 23 || designatedPosition == 9){
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 21){
      if (designatedPosition == 18 || designatedPosition == 12){
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 22){
      if (designatedPosition == 13 || designatedPosition == 11 || designatedPosition == 19){
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 23){
      if (designatedPosition == 14 || designatedPosition == 12 || designatedPosition == 20 || designatedPosition == 16){
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 24){
      if (designatedPosition == 13 || designatedPosition == 15 || designatedPosition == 17){
         return true;
      }
      else{
         return false;
      }
   }   if (sourcePosition == 25){
      if (designatedPosition == 14 || designatedPosition == 18){
         return true;
      }
      else{
         return false;
      }
   }
   return 0;
}


//This function is made to swap pieces if and only if the source Position make a valid L move

void swapPieces(){
		string temp;
		  if (sourcePosition == 1){
		    if(ValidMove())
		   {
		      switch(designatedPosition)
		      {
		         case(12):
		         {
		            temp = p1;
		            p1 = p12; 
		            p12 = temp;
		            break;
		         }
		         case(8):
		         {
		            temp = p1;
		            p1 = p8; 
		            p8 = temp;
		            break;
		         }
		      }
		   }
		  }
		  if (sourcePosition == 2){
		    if(ValidMove())
		   {
		      switch(designatedPosition)
		      {
		         case(9):
		         {
		            temp = p2;
		            p2 = p9; 
		            p9 = temp;
		            break;
		         }
		         case(11):
		         {
		            temp = p2;
		            p2 = p11; 
		            p11 = temp;
		            break;
		         }
		         case(13):
		         {
		            temp = p2;
		            p2 = p13; 
		            p13 = temp;
		            break;
		         }
		      }
		   }
		  }
		  else if (sourcePosition == 3){
		    if(ValidMove())
		   {
		      switch(designatedPosition)
		      {
		         case(14):
		         {
		            temp = p3;
		            p3 = p14; 
		            p14 = temp;
		            break;
		         }
		         case(10):
		         {
		            temp = p3;
		            p3 = p10; 
		            p10 = temp;
		            break;
		         }
		         case(12):
		         {
		            temp = p3;
		            p3 = p12; 
		            p12 = temp;
		            break;
		         }
		         case(6):
		         {
		             temp = p3;
		             p3 = p6;
		             p6 = temp;
		             break;
		         }
		      }
		   }
		  }
		  else if (sourcePosition == 4){
		    if(ValidMove())
		   {
		      switch(designatedPosition)
		      {
		         case(7):
		         {
		            temp = p4;
		            p4 = p7; 
		            p7 = temp;
		            break;
		         }
		         case(15):
		         {
		            temp = p4;
		            p4 = p15; 
		            p15 = temp;
		            break;
		         }
		         case(13):
		         {
		            temp = p4;
		            p4 = p13; 
		            p13 = temp;
		            break;
		         }
		      }
		   }
		  }
		  else if (sourcePosition == 5){
		    if(ValidMove())
		    {
		      switch(designatedPosition)
		      {
		         case(14):
		         {
		            temp = p5;
		            p5 = p14; 
		            p14 = temp;
		            break;
		         }
		         case(8):
		         {
		            temp = p5;
		            p5 = p8; 
		            p8 = temp;
		            break;
		         }
		         }
		      }
		   }
		   else if (sourcePosition == 6){
		    if(ValidMove())
		   {
		      switch(designatedPosition)
		      {
		         case(3):
		         {
		            temp = p6;
		            p6 = p3; 
		            p3 = temp;
		            break;
		         }
		         case(13):
		         {
		            temp = p6;
		            p6 = p13; 
		            p13 = temp;
		            break;
		         }
		         case(17):
		         {
		            temp = p6;
		            p6 = p17; 
		            p17 = temp;
		            break;
		         }
		         }
		      }
		   }

      else if (sourcePosition == 7){
		    if(ValidMove())
		   {
		      switch(designatedPosition)
		      {
		         case(4):
		         {
		            temp = p7;
		            p7 = p4; 
		            p4 = temp;
		            break;
		         }
		         case(16):
		         {
		            temp = p7;
		            p7 = p16; 
		            p16 = temp;
		            break;
		         }
		         case(14):
		         {
		            temp = p7;
		            p7 = p14; 
		            p14 = temp;
		            break;
		         }
             case(18):
		         {
		            temp = p7;
		            p7 = p18; 
		            p18 = temp;
		            break;
		         }
		         }
		      }
		   }
       else if (sourcePosition ==8){
		    if(ValidMove())
		   {
		      switch(designatedPosition)
		      {
		         case(1):
		         {
		            temp = p8;
		            p8 = p1; 
		            p1 = temp;
		            break;
		         }
		         case(11):
		         {
		            temp = p8;
		            p8 = p11; 
		            p11 = temp;
		            break;
		         }
		         case(15):
		         {
		            temp = p8;
		            p8 = p15; 
		            p15 = temp;
		            break;
		         }
		         case(17):
		         {
		            temp = p8;
		            p8 = p17; 
		            p17 = temp;
		            break;
		         }
		         case(19):
		         {
		            temp = p8;
		            p8 = p19; 
		            p19 = temp;
		            break;
		         }
		         case(5):
		         {
		            temp = p8;
		            p8 = p5; 
		            p5 = temp;
		            break;
		         }
          }
       }
       }      
       else if (sourcePosition ==9){
		    if(ValidMove())
		   {
		      switch(designatedPosition)
		      {
		         case(2):
		         {
		            temp = p9;
		            p9 = p2; 
		            p2 = temp;
		            break;
		         }
		         case(18):
		         {
		            temp = p9;
		            p9 = p18; 
		            p18 = temp;
		            break;
		         }
		         case(20):
		         {
		            temp = p9;
		            p9 = p20; 
		            p20 = temp;
		            break;
		         }
		         case(12):
		         {
		            temp = p9;
		            p9 = p12; 
		            p12 = temp;
		            break;
		         }
		      }
		   }
       }
        else if (sourcePosition ==10){
		    if(ValidMove())
		   {
		      switch(designatedPosition)
		      {
		         case(3):
		         {
		            temp = p10;
		            p10 = p3; 
		            p3 = temp;
		            break;
		         }
		         case(13):
		         {
		            temp = p10;
		            p10 = p13; 
		            p13 = temp;
		            break;
		         }
		         case(19):
		         {
		            temp = p10;
		            p10 = p19; 
		            p19 = temp;
		            break;
		         }
		      }
		   }
        }
        else if (sourcePosition== 11){
		   if(ValidMove())
		   {
		      switch(designatedPosition)
		      {   
		         case(2):
		         {
		            temp = p11;
		            p11 = p2; 
		            p2 = temp;
		            break;
		         }
		         case(13):
		         {
		            temp = p11;
		            p11 = p13; 
		            p13 = temp;
		            break;
		         }
		         case(18):
		         {
		            temp = p11;
		            p11 = p18; 
		            p18 = temp;
		            break;
		         }
		         case(22):
		         {
		            temp = p11;
		            p11 = p22; 
		            p22 = temp;
		            break;
		         }
		      }
		   }
      }
      else if (sourcePosition== 12){
		   if(ValidMove())
		   {
		      switch(designatedPosition)
		      {   
		         case(1):
		         {
		            temp = p12;
		            p12 = p1; 
		            p1 = temp;
		            break;
		         }
		         case(3):
		         {
		            temp = p12;
		            p12 = p3; 
		            p3 = temp;
		            break;
		         }
		         case(21):
		         {
		            temp = p12;
		            p12 = p21; 
		            p21 = temp;
		            break;
		         }
		         case(23):
		         {
		            temp = p12;
		            p12 = p23; 
		            p23 = temp;
		            break;
		         }
		         case(19):
		         {
		            temp = p12;
		            p12 = p19; 
		            p19 = temp;
		            break;
		         }
		         case(9):
		         {
		            temp = p12;
		            p12 = p9; 
		            p9 = temp;
		            break;
		         }
		      }
		   }
        }
        else if (sourcePosition== 13){
		   if(ValidMove())
		   {
		      switch(designatedPosition)
		      {   
		         case(2):
		         {
		            temp = p13;
		            p13 = p2; 
		            p2 = temp;
		            break;
		         }
		         case(4):
		         {
		            temp = p13;
		            p13 = p4; 
		            p4 = temp;
		            break;
		         }
		         case(6):
		         {
		            temp = p13;
		            p13 = p6; 
		            p6 = temp;
		            break;
		         }
		         case(10):
		         {
		            temp = p13;
		            p13 = p10; 
		            p10 = temp;
		            break;
		         }
		         case(16):
		         {
		            temp = p13;
		            p13 = p16; 
		            p16 = temp;
		            break;
		         }
		         case(17):
		         {
		            temp = p13;
		            p13 = p17; 
		            p17 = temp;
		            break;
		         }
		         case(19):
		         {
		            temp = p13;
		            p13 = p19; 
		            p19 = temp;
		            break;
		         }
		         case(20):
		         {
		            temp = p13;
		            p13 = p20; 
		            p20 = temp;
		            break;
		         }
          }
       }
    }
      else if (sourcePosition== 14){
		   if(ValidMove())
		   {
		      switch(designatedPosition)
		      {   
		         case(3):
		         {
		            temp = p14;
		            p14 = p3; 
		            p3 = temp;
		            break;
		         }
		         case(7):
		         {
		            temp = p14;
		            p14 = p7; 
		            p7 = temp;
		            break;
		         }
		         case(17):
		         {
		            temp = p14;
		            p14 = p17; 
		            p17 = temp;
		            break;
		         }
		         case(5):
		         {
		            temp = p14;
		            p14 = p5; 
		            p5 = temp;
		            break;
		         }
		         case(23):
		         {
		            temp = p14;
		            p14 = p23; 
		            p23 = temp;
		            break;
		         }
		         case(25):
		         {
		            temp = p14;
		            p14 = p25; 
		            p25 = temp;
		            break;
		         }
		      }
		   }
      }
      else if (sourcePosition== 15){
		   if(ValidMove())
		   {
		      switch(designatedPosition)
		      {   
		         case(24):
		         {
		            temp = p15;
		            p15 = p24; 
		            p24 = temp;
		            break;
		         }
		         case(8):
		         {
		            temp = p15;
		            p15 = p8; 
		            p8 = temp;
		            break;
		         }
		         case(18):
		         {
		            temp = p15;
		            p15 = p18; 
		            p18 = temp;
		            break;
		         }
		         case(4):
		         {
		            temp = p15;
		            p15 = p4; 
		            p4 = temp;
		            break;
		         }
		      }
		   }
        }
        else if (sourcePosition== 16){
		   if(ValidMove())
		   {
		      switch(designatedPosition)
		      {   
		         case(13):
		         {
		            temp = p16;
		            p16 = p13; 
		            p13 = temp;
		            break;
		         }
		         case(23):
		         {
		            temp = p16;
		            p16 = p23; 
		            p23 = temp;
		            break;
		         }
		         case(7):
		         {
		            temp = p16;
		            p16 = p7; 
		            p7 = temp;
		            break;
		         }
		      }
		   }
      }
      else if (sourcePosition== 17){
		   if(ValidMove())
		   {
		      switch(designatedPosition)
		      {   
		         case(7):
		         {
		            temp = p17;
		            p17 = p7; 
		            p7 = temp;
		            break;
		         }
		         case(8):
		         {
		            temp = p17;
		            p17 = p8; 
		            p8 = temp;
		            break;
		         }
		         case(14):
		         {
		            temp = p17;
		            p17 = p14; 
		            p14 = temp;
		            break;
		         }
		         case(24):
		         {
		            temp = p17;
		            p17 = p24; 
		            p24 = temp;
		            break;
		         }
		      }
		   }
      }
      else if (sourcePosition== 18){
		   if(ValidMove())
		   {
		      switch(designatedPosition)
		      {   
		         case(7):
		         {
		            temp = p18;
		            p18 = p7; 
		            p7 = temp;
		            break;
		         }
		         case(9):
		         {
		            temp = p18;
		            p18 = p9; 
		            p9 = temp;
		            break;
		         }
		         case(11):
		         {
		            temp = p18;
		            p18 = p11; 
		            p11 = temp;
		            break;
		         }
		         case(15):
		         {
		            temp = p18;
		            p18 = p15; 
		            p15 = temp;
		            break;
		         }
		         case(21):
		         {
		            temp = p18;
		            p18 = p21; 
		            p21 = temp;
		            break;
		         }
		         case(25):
		         {
		            temp = p18;
		            p18 = p25; 
		            p25 = temp;
		            break;
		         }

		      }
		   }
		}
		else if (sourcePosition== 19){
		   if(ValidMove())
		   {
		      switch(designatedPosition)
		      {   
		         case(12):
		         {
		            temp = p19;
		            p19 = p12; 
		            p12 = temp;
		            break;
		         }
		         case(22):
		         {
		            temp = p19;
		            p19 = p22; 
		            p22 = temp;
		            break;
		         }
		         case(8):
		         {
		            temp = p19;
		            p19 = p8; 
		            p8 = temp;
		            break;
		         }
		         case(10):
		         {
		            temp = p19;
		            p19 = p10; 
		            p10 = temp;
		            break;
		         }
		      }
		   }
		}
		else if (sourcePosition ==20){
		    if(ValidMove())
		   {
		      switch(designatedPosition)
		      {
		         case(23):
		         {
		            temp = p20;
		            p20 = p23; 
		            p23 = temp;
		            break;
		         }
		         case(13):
		         {
		            temp = p20;
		            p20 = p13; 
		            p13 = temp;
		            break;
		         }
		         case(9):
		         {
		            temp = p20;
		            p20 = p9; 
		            p9 = temp;
		            break;
		         }
		      }
		   }
       }
       else if (sourcePosition ==21){
		    if(ValidMove())
		   {
		      switch(designatedPosition)
		      {
		         case(18):
		         {
		            temp = p21;
		            p21 = p18; 
		            p18 = temp;
		            break;
		         }
		         case(12):
		         {
		            temp = p21;
		            p21 = p12; 
		            p12 = temp;
		            break;
		         }
		      }
		   }
       }
		else if (sourcePosition== 22){
		   if(ValidMove())
		   {
		      switch(designatedPosition)
		      {   
		         case(11):
		         {
		            temp = p22;
		            p22 = p11; 
		            p11 = temp;
		            break;
		         }
		         case(13):
		         {
		            temp = p22;
		            p22 = p13; 
		            p13 = temp;
		            break;
		         }
		         case(19):
		         {
		            temp = p22;
		            p22 = p19; 
		            p19 = temp;
		            break;
		         }
		      }
		   }
		}
		else if (sourcePosition == 23){
		    if(ValidMove())
		   {
		      switch(designatedPosition)
		      {
		         case(12):
		         {
		            temp = p23;
		            p23 = p12; 
		            p12 = temp;
		            break;
		         }
		         case(14):
		         {
		            temp = p23;
		            p23 = p14; 
		            p14 = temp;
		            break;
		         }
		         case(20):
		         {
		            temp = p23;
		            p23 = p20; 
		            p20 = temp;
		            break;
		         }
		         case(16):
		         {
		             temp = p23;
		             p23 = p16;
		             p16 = temp;
		             break;
		         }
		      }
		   }
		}
		else if (sourcePosition == 24){
		   if(ValidMove())
		   {
		      switch(designatedPosition)
		      {
		         case(13):
		         {
		            temp = p24;
		            p24 = p13; 
		            p13 = temp;
		            break;
		         }
		         case(15):
		         {
		            temp = p24;
		            p24 = p15; 
		            p15 = temp;
		            break;
		         }
		         case(17):
		         {
		            temp = p24;
		            p24 = p17; 
		            p17 = temp;
		            break;
		         }
		      }
		   }
		}
		else if (sourcePosition == 25){
		   if(ValidMove())
		   {
		      switch(designatedPosition)
		      {
		         case(14):
		         {
		            temp = p25;
		            p25 = p14; 
		            p14 = temp;
		            break;
		         }
		         case(18):
		         {
		            temp = p25;
		            p25 = p18; 
		            p18 = temp;
		            break;
		         }
		      }
		   }
		}
		
}

   
   


    
// ----------------------------------------------------------------------
// Display the current board, along with the corresponding positions
// This function makes use of global variables p1..p25, which represent
// each of the positions on the board
void displayBoard()
{
    cout <<"\n"
         <<                          "    Board   " <<                               "      Position \n"
         << " " <<  p1 << " " <<  p2 << " " <<  p3 << " " <<  p4 << " " <<  p5 << "     1  2  3  4  5 \n"
         << " " <<  p6 << "" <<  p7 << " " <<  p8 << " " <<  p9 << " " << p10 << "      6  7  8  9 10 \n"
         << " " << p11 << " " << p12 << " " << p13 << " " << p14 << " " << p15 << "    11 12 13 14 15 \n"
         << " " << p16 << " " << p17 << " " << p18 << " " << p19 << " " << p20 << "    16 17 18 19 20 \n"
         << " " << p21 << " " << p22 << " " << p23 << " " << p24 << " " << p25 << "    21 22 23 24 25 \n"
         << endl;
}
//end displayBoard()


// ----------------------------------------------------------------------
// Main() function of the program, containing the loop that controls
// game play
int main() {
   
   displayWelcomeMessage();
	
	// Set board values to the default starting position
   // ...
   
   setBoard();
   displayBoard();
   cout << "Current score: " << score << endl;
   cout << endl;
   
   
   // This while loop is only running when the score is greater than 0
   while(score > 0) {
      cout << moveNumber << ". "
             << "Enter one of the following: \n"
			 << "  - M to move a knight from one position to another, \n"
			 << "  - R to reset the board back to the beginning, or \n"
			 << "  - X to exit the game. \n"
			 << "Your choice -> ";
		cin >> menuOption;
		menuOption = toupper(menuOption); // convert user input to uppercase
		
		
		// If statment made for when the user inputs X to exit a game.
		if(menuOption == 'X')
		{
		    cout << "Exiting..." << endl;
		    break;
		}
		//if statement made for when the user inputs R to reset the games which inclued moves, board and score.
		if(menuOption == 'R')
		{
		    cout << endl;
		    cout << "   *** Restarting" << endl;
		    setBoard();
		    displayBoard();
		    cout <<"Current score: " << score << endl;
		    cout << endl;
		    continue;
		}
		//If statment executes when the user inputs M 
		if(menuOption == 'M')
		{
		    cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): ";
		    cin >> sourcePosition;
		    cout << " ";
		    cin >> designatedPosition;
		    cout << "You have chosen to move a knight from position " << sourcePosition << " to position " << designatedPosition << ".";
		    cout << endl;
		
		// Checks weather the from position is valid from  1- 25 
		if(sourcePosition < 1 || sourcePosition > 25)
		{
		    cout << "The source position should be a valid position on the board (1-25). Try again. " << endl;
		    score = score - 10;
		    cout << "Current score: " << score << endl;
		    cout << endl;
		    continue;
		}
		// Check that TO position is valid, i.e. within 1-25
		if(designatedPosition < 1 || designatedPosition > 25)
		{
		    cout << "The destination position should be a valid position on the board (1-25). Try again. " << endl;
		    score = score - 10;
		    cout << "Current score: " << score << endl;
		    cout << endl;
		    continue;
		}
		
		// Check that the source position has a knight
		if(getPosition(sourcePosition) != BlackKnight && getPosition(sourcePosition) != WhiteKnight)
		{
		    cout << "The source position should have a knight. Try again." << endl;
		    score = score - 10;
		    cout << endl;
		    cout << "Current score: " << score << endl;
		    cout << endl;
		    continue;
		}
		
		// Check that the destination position is empty
		if(getPosition(designatedPosition) != BlankPosition)
		{
		    cout << "The destination position should be empty. Try again. " << endl;
		    score = score - 10;
		    cout << endl;
		    cout << "Current score: " << score << endl;
		    cout << endl;
		    continue;
		}
	
		// Check that the move is valid - knights can only move in an L-shape
		if(ValidMove() == false)
		{
		    cout << "Invalid move. Knights can only move in an L-shape. Try again." << endl;
		    score = score - 10;
		    cout << endl;
		    cout << "Current score: " << score << endl;
		    cout << endl;
		    continue;
		}
		
		// Make the move and update the board
		if(ValidMove() == true)
		{
		    swapPieces();
		    displayBoard();
		    score = score - 5;
		    moveNumber++;
		    //Checks if the user wins the game when the white knight is in position 5
		    if(p5 == WhiteKnight)
		    {
		        cout << "Congratulations, you did it! ";
		        cout << endl;
		        break;
		    }
		    else
		    {
		        cout << "Current score: " << score << endl;
		        cout << endl;
		    }
		    continue;
		}
		}
       
   } // end loop for game play
   
   // Check for a win
   // ...
   
   //Excecutes when the user hase a score of 0 or less they run out of moves
   if(score <= 0)
   {
       cout <<  "You have run out of moves. Try to do better next time! ";
       cout << endl;
   }


   cout << "Thank you for playing!" << endl;

	return 0;
}