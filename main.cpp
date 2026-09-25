#include <iostream>
#include <string>
using namespace std;

int main()
{
 // first decision for color site.
 int Original = 1; // True represents the original color palette as seen by individuals with standard, trichromatic vision.
 int Prot = 2; // is short for Protanopia, a type of red-green color blindness caused by the complete absence of red retinal photoreceptors.
 int Deut = 3; // misheard or autocorrected as Daughter stands for Deuteranopia, a form of red-green color blindness where green photoreceptors are absent.
 int Tryt = 4; // commonly misspelled variant of Trit stands for Tritanopia, a rare form of color blindness affecting the ability to distinguish blue and yellow hues.

 // Color
 int Red = 1; //#FF0000
 int Blue = 2; //#0000FF 
 int Green = 3; //#008000  
 int Yellow = 4; //#FFFF00  
 int Orange = 5; //#FFA500 
 int Purple = 6; //#9D00FF 
 

 // if or else if (PlayerDecision == ____){
 int PlayerDecision = 0;
 //}

 // switch (______){
 int ColorOriginal = 0;
 int ColorProt = 0;
 int ColorDeut = 0;
 int ColorTryt = 0;
 //{

 //for the: do{}while (DifferentResponse == 'Y'); 
 char DifferentResponse = 0 ;
 
  do {
    do {    
         // This is what the user sees : cout << "____" << endl;
         cout << "Color Vision Deficiency Palette: how the other person sees the color?" << endl;
         cout << "1 = Original" << endl;
         cout << "2 = Prot" << endl;
         cout << "3 = Deut" << endl;
         cout << "4 = Tryt" << endl;
         cout << "Enter the Color Vision Deficiency of your choice: ";
         cin >> PlayerDecision;
         
       } while (PlayerDecision >= 5 || PlayerDecision <= 0 ); // or = || reminder .

           // Reminder fill in the blanks for Original:"What they see is Prot color is ___ and Deut color is ___ and Tryt color is ___ " << endl;
        if (PlayerDecision == Original){
          do{
             cout << "Pick a Color!" << endl;
             cout << "1 = Red" << endl;
             cout << "2 = Blue" << endl;
             cout << "3 = Green" << endl;
             cout << "4 = Yellow" << endl;
             cout << "5 = Orange" << endl;
             cout << "6 = Purple" << endl;

             cout << "Enter the Color of your choice: ";
             cin >> ColorOriginal;
            } while (ColorOriginal >= 7 or ColorOriginal <= 0 );

                switch (ColorOriginal){
                case 1:
                 cout << "What they see is Prot color is light brown and Deut color is brown and Tryt color is light red." << endl;
                 break;

                 case 2:
                 cout << "What they see is Prot color is darker blue and Deut color is darker blue and Tryt color is greenish gray fusion."<< endl ;
                 break;

                 case 3:
                 cout << "What they see is Prot color is Grey Broen and Deut color is Brown and Tryt color is Dark Teal." << endl;
                 break;

                 case 4:
                 cout << "What they see is Prot color is Bossy Glossy and Deut color is Bossy Glossy and Tryt color is Very light pink." << endl;
                 break;

                 case 5: 
                 cout << "What they see is Prot color is warm, medium-light shade of yellow-orange and Deut color is Slightly dark orange and Tryt color is Light Pink." << endl;
                 break;

                 case 6:
                 cout << "What they see is Prot color is slightly darkest blue and Deut color is slightly darkest blue and Tryt color is Brown." << endl;
                 break;

                 default:
                 cout << "Invalid entry" << endl;
                 break;  
                }
        }
        //Reminder fill in the blanks for Prot:"What they see is Original color is ___ and Deut color is ___ and Tryt color is ___ " << endl;
        else if (PlayerDecision == Prot){
          do{
             cout << "Pick a Color!" << endl;
             cout << "1 = Red" << endl;
             cout << "2 = Blue" << endl;
             cout << "3 = Green" << endl;
             cout << "4 = Yellow" << endl;
             cout << "5 = Orange" << endl;
             cout << "6 = Purple" << endl;
             cout << "Enter the Color of your choice: ";
             cin >> ColorProt;
            } while (ColorProt >= 7 or ColorProt <= 0 );

                switch (ColorProt){
                 case 1:
                 cout << "What they see is Original color is Red and Deut color is brown and Tryt color is light red." << endl;
                 break;

                 case 2:
                 cout << "What they see is Original color is Blue and Deut color is darker blue and Tryt color is greenish gray fusion."<< endl ;
                 break;

                 case 3:
                 cout << "What they see is Original color is Green and Deut color is Brown and Tryt color is Dark Teal." << endl;
                 break;

                 case 4:
                 cout << "What they see is Original color is Yellow and Deut color is Bossy Glossy and Tryt color is Very light pink." << endl;
                 break;

                 case 5:
                 cout << "What they see is Original color is Orange and Deut color is Slightly dark orange and Tryt color is Light Pink." << endl;
                 break;

                 case 6:
                 cout << "What they see is Original color is Purple and Deut color is slightly darkest blue and Tryt color is Brown." << endl;
                 break;

                 default:
                 cout << "Invalid entry" << endl;
                 break;
                }
        }
        //Reminder fill in the blanks for Deut:"What they see is Original color is ___ and Prot color is ___ and Tryt color is ___ " << endl;
        else if (PlayerDecision == Deut){
          do{
             cout << "Pick a Color!" << endl;
             cout << "1 = Red" << endl;
             cout << "2 = Blue" << endl;
             cout << "3 = Green" << endl;
             cout << "4 = Yellow" << endl;
             cout << "5 = Orange" << endl;
             cout << "6 = Purple" << endl;
             cout << "Enter the Color of your choice: ";
             cin >> ColorDeut;
            } while (ColorDeut >= 7 or ColorDeut <= 0 );

                switch (ColorDeut){
                 case 1:
                 cout << "What they see is Original color is Red and Prot color is light brown and Tryt color is light red." << endl;
                 break;

                 case 2:
                 cout << "What they see is Original color is Blue and Prot color is darker blue and Tryt color is greenish gray fusion."<< endl ;
                 break;

                 case 3:
                 cout << "What they see is Original color is Green and Prot color is Grey Broen and Tryt color is Dark Teal." << endl;
                 break;

                 case 4:
                 cout << "What they see is Original color is Yellow and Prot color is Bossy Glossy  and Tryt color is Very light pink." << endl;
                 break;

                 case 5: 
                 cout << "What they see is Original color is Orange and Prot color is warm, medium-light shade of yellow-orange and Tryt color is Light Pink." << endl;
                 break;

                 case 6:
                 cout << "What they see is Original color is Purple and Prot color is slightly darkest blue and Tryt color is Brown." << endl;
                 break;

                 default:
                 cout << "Invalid entry" << endl;
                 break;
                }
        }

        //Reminder fill in the blanks for Tryt:"What they see is Original color is ___ and Prot color is ___ and Deut color is ___ " << endl;
        else if (PlayerDecision == Tryt){
          do{
             cout << "Pick a Color!" << endl;
             cout << "1 = Red" << endl;
             cout << "2 = Blue" << endl;
             cout << "3 = Green" << endl;
             cout << "4 = Yellow" << endl;
             cout << "5 = Orange" << endl;
             cout << "6 = Purple" << endl;
             cout << "Enter the Color of your choice: ";
             cin >> ColorTryt;
            } while (ColorTryt >= 7 || ColorTryt <= 0 ); 


                switch (ColorTryt){
                 case 1:
                 cout << "What they see is Original color is Red and Prot color is light brown and Deut color is brown color." << endl;
                 break;

                 case 2:
                 cout << "What they see is Original color is Blue and Prot color is darker blue and Deut color is greenish gray fusion."<< endl ;
                 break;

                 case 3:
                 cout << "What they see is Original color is Green and Prot color is Grey Broen and Deut color is Brown." << endl;
                 break;

                 case 4:
                 cout << "What they see is Original color is Yellow and Prot color is Bossy Glossy  and Deut color is Bossy Glossy." << endl;
                 break; 

                 case 5: 
                 cout << "What they see is Original color is Orange and Prot color is warm, medium-light shade of yellow-orange and Deut color is Slightly dark orange." << endl;
                 break;

                 case 6: 
                 cout << "What they see is Original color is Purple and Prot color is slightly darkest blue and Deut color is slightly darkest blue." << endl;
                 break;

                 default:
                 cout << "Invalid entry" << endl;
                 break;
                }
        }
            do {
                cout << "Would you like to pick a different option of seeing color? (y)es or (n)o " << endl;
                cin >> DifferentResponse;

                if (DifferentResponse >= 'a' && DifferentResponse <= 'z') {
                    DifferentResponse = DifferentResponse - 'a' + 'A';
                }

                if (DifferentResponse != 'Y' && DifferentResponse != 'N') {
                    cout << "Please choose y or n" << endl;
                }
        
               } while (DifferentResponse != 'Y' && DifferentResponse != 'N');

    } while (DifferentResponse == 'Y');
  
 return 0;
}
