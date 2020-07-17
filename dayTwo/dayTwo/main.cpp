/*!
  Fundamentals revise code for C++ Flow Control:

  1. if - else
  2. ternary operator
  3. switch case
  4. do while loop
  5. for loop

  */


#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{

   QCoreApplication a(argc, argv);
   char right[5];
   char isPerfect[5];
   qDebug()<<"Enter \"true\" if you feel its correct: "
             "\nMumbai is capital of India?";
   cin >> right;
   int check1 = strcmp(right,"true");

   /*********** if-else ************/
   if(check1 == 0)
   {
      qDebug()<<"Nooo !!! Capital of India is Delhi. ";
   }
   else
   {
      qDebug()<<"Right !!! Capital of India is Delhi. ";
   }

   /******* Ternary Operator *********/

   qDebug()<<"Are you Perfect ?? Y/N ";
   cin>>isPerfect;
   int check2 = strcmp(isPerfect,"Y");
   (!check2)?check2=2:check2=1;

   /*******  Switch case ************/
   switch(check2)
   {
   case 1   : qDebug()<<"Perfection is not important, Optimism is :D \n";
   case 2   : qDebug()<<"Confidence is the key!! \n";
              break;
   default  : qDebug()<<"you really need to debug if this gets printed !!";
              break;
   }

   /******** do while loop **********/

   do
   {
      qDebug()<<"I am check2 variable, used "<<check2<<" times so far in this activity -_- ";
      check2++;
   }
   while(check2<10);


   /*********  for loop ***********/

   for(;check1<=check2;check1++)
   {
      qDebug()<<"I am check 1, will be used till i match check2 -_- , check1:"<<check1<<" check2:"<<check2;
   }

   return a.exec();
}
