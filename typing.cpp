#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <string.h>
#include <time.h>

int score = 0;  //your score.
int missedCounter = 0; //alphabets or number of digits missed.
int levelChoice = 0;  //selection of level.
int wrongKeyCounter = 0; //wrong key counter.
int speedChoice = 0;  //selection of speed.
char startingIntroString[] = "\n\n\t\t\t\tGame Developed by Usman Siddique  !!  pcphunt.blogspot.com";
char startNewGameString[] = "\n\t\n\n\t\t\t\tStart New Game  \n\n\nSelect Game Level \n\n(1) Capital Alphabet Mode (A-Z)\n(3) Digits Mode (0-9)\n\nYour Choice is -------------->  ";
char selectLevelString[] = "\n\n\nSelect Speed Level\n\n(1) Speed Level One\n(2) Speed Level Two\nYour Choice is -------------->   ";
char authorString[] = "\n\n\t\t\t\tTyping Tutor\n\n\nThis Game is developed by Usman Siddique\nStudent of COMSATS Institue of Information and Technology ,Wah cantt\nDedicated to my parents and beloved Sir Saqib Hussaain\n\n\n\n\n\nErrors and suggestions will be Appreciated . \nEmail Address : usmansiddique851@gmail.com\n\n\n\t\tPress BackSpace to return to Main Menu\n\n\n\t\t\t\tESC to Exit \n\n\n\t\t\tall rights reserved@pcphunt.blogspot.com";
char helpString[] = "\n\t\t\tTyping Tutor\n\n\nThis game helps to improve your typing speed and sharpens your brain. Game has  three modes for the players. First is Begineers mode which is for basic typing,  next one is Learner mode which is designed for Medium typing speed and last one  is Expert Mode which is designed to sharpen your skills at their best\n\nSpeed Level 1 : 1 second time delay\nSpeed Level 2 : 500 milisecond time delay\nSpeed level 3 : 300 milisecond time delay\n\nGame consits of Capital Alphabets, Small Alphabets, and Numbers (0-9) which varies with different difficulty level\n\nThis game also consist of Score Card which displays your currant Score and also Consists of Missing Alphabets Counter displayed in the game.\n\n\t\t\tBackSpace to return to Main Menu.\n\n\t\t\t\tESC to Exit Game.\n\n\t\t\tall rights reserved@pcphunt.blogspot.com";
int choice= 0 ;  //for first selection
int t=100 ; //for time
int  delayTime = 0; //time used for delay.
int missedNum[100]; //for numbers  missed.

struct node{
       int data;
       int x;
       int y;
       node *next;
       }*first,*l,*temp;

void InsertNode(int dat);
void deleteNode(int data);
void author();
void startingScreen();
void levelSelection();
void gameBoard();
void helpScreen();
int randX();
void printChar();
void capitalAlphabet();
void digits();
void gameLost();
int searchInLinkList(int data);
void keyPressed();
void winningScreen();

void main(){
 clrscr();
 srand ( time(NULL) );
 startingScreen();
 getch();
} //ending of main

void author(){
 char k;
 int key;
 clrscr();
 for (int i=0 ; authorString[i]!= '\0' ; i++){
  printf("%c",authorString[i]);
  delay(50);
 } //ending of for.
 do {
 k = getch();
 key = k;
 if(key == 8){ //backspace key ascii.
 startingScreen();
 } //ending of if.
 }while(key!=27); //escape key ascii.
} //ending of author.


void startingScreen(){
  choice = 0;
 clrscr();
 for (int i=0 ; startingIntroString[i]!='\0' ; i++){
  printf("%c",startingIntroString[i]);
  delay(100);
 } //ending of for.
 delay(100);
 printf("\n\n\n\n\t\t\tTyping Tutor Game\n\n\n(1) To Start Game\n(2) To Help\n(3) About Author\n(4) Exit Game\n\nEnter your option -------> ");
 scanf("%d",&choice);
 if(choice == 1){
  levelSelection();
 } //ending of if.
 if(choice == 2){
  helpScreen();
 } //ending of if.
 if(choice == 3){
  author();
 } //ending of if.
 else if (choice == 4){
  exit(0);
 } //enidng of if for choice 4
 else
 startingScreen();
}  //ending of starting screen.

void levelSelection(){
 clrscr();
 for (int i=0 ; startNewGameString[i]!= '\0' ; i++){
  printf("%c",startNewGameString[i]);
  delay(10);
 } //ending of for.
 scanf("%d",&levelChoice);
 for (int j=0 ; selectLevelString[j]!='\0' ; j++){
  printf("%c",selectLevelString[j]);
  delay(10);
 }
 scanf("%d",&speedChoice);
 if (levelChoice>=1 && levelChoice<=3 && speedChoice>=1 && speedChoice<=2){
  if (speedChoice == 1){
   delayTime = 1000;
  } //ending of if
  else if (speedChoice == 2){
   delayTime = 500;
  } //ending of else if
  keyPressed();
 } //ending of if.
 else{
  levelSelection();
 } //ending of else.
} //ending of level  selection.


void InsertNode(int data , int x , int y ){
     if(first == NULL){
     first = new node();
     first->data = data;
     first->x = x;
     first->y = y;
  first->next = NULL;
     l = first;
     }
     else {
   while(l->next!=NULL)
    l=l->next;
    temp = new node();
    temp->data = data;
    temp->x = x;
    temp->y = y;
    temp->next = NULL;
    l->next = temp;
    l = temp;

   }         //ending of else.
     }            //ending of insert node.
   
void deleteNode(int data){
   temp = l =first;
   while(l){
   if(l->data == data){
        if(l==first){
    first = first->next;
    l=NULL;
    l=first;
        }    //ending of if within if.
        else if(l->next!=NULL){
       temp->next=l->next;
       l=NULL;
       l=temp->next;
        }     //ending of second if within if
        else {
      temp->next = NULL;
      l = NULL;
      l=temp;
        }    //ending of else   within if.
   }        //ending of if.
   temp  = l;
   l = l->next;
 
   }       //ending of while.
}    //ending of  delete node.

void helpScreen(){
 char k;
 int key;
 clrscr();
 for (int i=0 ; helpString[i] ; i++){
  printf("%c",helpString[i]);
  delay(25);
 } //ending of for.
 do {
 k = getch();
 key = k;
 if(key == 8){ //backspace key ascii.
 startingScreen();
 } //ending of if.
 }while(key!=27); //escape key ascii.

}  //ending of help screen.

int randX(){
 int x = 0 ;
 x = (rand()%80)+1;  //xaxis is between 1-80
 return x;
} //ending of rand x founction.

void printChar(){
 clrscr();
  l = first;
     while(l->next){
         gotoxy(l->x,l->y++);
              printf("%c",l->data);
            if(l->y<=20)
     l =  l->next;
     else{
   missedNum[missedCounter++] = l->data ; //string missed and missed counter.
     deleteNode(l->data);
     printChar();
   } //ending of if for deleting above maximum y.
       } //ending of while
       gotoxy(l->x,l->y++);
       printf("%c\n",l->data);
 gotoxy(1,20);
 printf("______________________________________________________________________________");
 gotoxy(1,22);
 printf("Score : %d",score);
 gotoxy(27,22);
 printf("Time Left : %d ",t--);
 gotoxy(60,22);
 printf("Digits Missed : %d",missedCounter);
 gotoxy(1,24);
 printf("Characters Missed : ");
 for (int i=0 ; i<missedCounter ; i++){
  printf("%c ",missedNum[i]);
} //enidng of for.
 gotoxy(60,24);
 printf("Wrong Key Hits : %d",wrongKeyCounter);
} //ending of printing function

void capitalAlphabet(){
 int randNum = 0;
 randNum = 65 + (rand() % (int)(90 - 65 + 1)); //random number formula between 65-90 for (A-Z)
 InsertNode(randNum,randX(),0);
 printChar();
} //ending of capital alphabet.
void digits(){
 int randNum = 0;
 randNum = 48 + (rand() % (int)(57 - 48 + 1)); //random number formula between 48-57 for (0-9)
 InsertNode(randNum,randX(),0);
 printChar();
} //ending of digits.
void keyPressed(){
  int key=0;
  do{
  if(kbhit()){
  char k =getch();
  key = k;
  if(searchInLinkList(key) == 1){
   score++;
   deleteNode(key);
  } //ending of if within if.
  else{
  wrongKeyCounter++;
  } //ending of else.
 } //ending of if kbhit
 if (levelChoice == 1){
  capitalAlphabet();
 } //ending of if.
 else if(levelChoice == 3){
  digits();
 } //ending of else if.
 delay(delayTime);
}while(key != 27 && missedCounter+wrongKeyCounter<10 && t>0); //escape key.
if(missedCounter+wrongKeyCounter>=10){
 gameLost();
} //ending of if with lost conditions.
if (t<=0){
 winningScreen();
}

 } //ending of key pressed method.

void gameLost(){
 clrscr();
 
 delay(1000);
 printf("\n\n\t\t\t\tSummary");
 delay(1000);
 printf("\n\n\t\t\tYou Have Lost the Game");
 delay(1000);
 printf("\n\n\t\t\tScore : %d",score);
 delay(1000);
 printf("\n\n\t\t\tNumber of Wrong Keys Hit : %d",wrongKeyCounter);
 delay(1000);
 printf("\n\n\t\t\tNumber of Character Missed : %d",missedCounter);
 printf("\n\n\t\t\tCharacters Missed : ");
 for (int i = 0; i<missedCounter ; i++){
  printf("%c  ",missedNum[i]);
  delay(1000);
 } //ending of for.
 delay(1000);
 printf("\n\n\t\t\tBetter Luck Next Time");
 delay(1000);
 printf("\n\n\tYou should try again to increase your score.");
 delay(1000);
 printf("\n\nYou will be redirected to Exit after 1 Second ........... Please Wait");
 delay(4000);
 exit(0);
}

int searchInLinkList(int data){
 int search = 0;
 l = first;
 while(l){
   if(l->data == data){
        search = 1;
        return search;
   }        //ending of if.
   l = l->next;
 }
 return search;
} //ending of serach in link list function.

void winningScreen(){
 clrscr();
 delay(1000);
 printf("\n\t\t\t\tCongratulations :) ");
 delay(1000);
 printf("\n\n\t\t\tYou Have Won the Game !!!!");
 delay(1000);
 printf("\n\n\n\tNumber of Wrong key Hits : %d ",wrongKeyCounter);
 delay(1000);
 printf("\n\tNumber of Character Missed : %d ",missedCounter);
 delay(1000);
 printf("\n\n\tCharacters Missed : ");
 for (int i = 0; i< missedCounter ; i++){
  printf("%c ",missedNum[i]);
  delay(1000);
 } //ending of if.
 delay(1000);
 printf("\n\n\n\t\Try Again to Increase your Score.");
 delay(1000);
 printf("\n\n\n\t\t\tYou will be redirected to Exit after 2 Seconds.");
 sleep(3);
 exit(0);
} //ending of winning screen.

