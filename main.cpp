#include <iostream>

using namespace std;

int main()
{
   int quant;
   int choice;
   //Quantity
   int Qrooms=0, Qpasta=0, Qburgers=0, Qnoodles=0, Qshake=0, Qchicken=0;
   //Sold
   int Srooms=0, Spasta=0, Sburgers=0, Snoodles=0, Sshake=0, Schicken=0;
   //Total
   int Total_rooms=0, Total_pasta=0, Total_burgers=0, Total_noodles=0, Total_shake=0, Total_chicken=0;

   cout<<"\n\t Quantity of items we have";
   cout<<"\n Rooms available:";
   cin>>Qrooms;
   cout <<"\n Quantity of pasta:";
   cin>>Qpasta;
   cout <<"\n Quantity of burgers:";
   cin>>Qburgers;
   cout <<"\n Quantity of noodles:";
   cin>>Qnoodles;
   cout <<"\n Quantity of shake:";
   cin>>Qshake;
   cout <<"\n Quantity of chicken:";
   cin>>Qchicken;

   m:
   cout<<"\n\t\t\t Please select from the menu options";
   cout<<"\n\n1) Rooms";
   cout<<"\n2) Pasta";
   cout<<"\n3) Burgers";
   cout<<"\n4) Noodles";
   cout<<"\n5) Shake";
   cout<<"\n6) Chicken";
   cout<<"\n7) Information regarding sales and collection";
   cout<<"\n8) Exit";

   cout<<"\n\n Please enter your choice!";
   cin>>choice;

   switch(choice)
   {
  case 1:
    cout<<"\n\n Enter the number of rooms you want: ";
    cin>>quant;
    if(Qrooms - Srooms >=quant)
    {
        Srooms = Srooms + quant;
        Total_rooms= Total_rooms + quant *1200;
        cout<<"\n\n\t\t"<<quant<<"Room/Rooms have been alloted to you!";
    }
    else
    {
        cout<<"\n\tOnly"<<Qrooms - Srooms<<"Rooms remaining in hotel";
        break;

          case 2:
    cout<<"\n\n Enter the number of Pasta Quantity: ";
    cin>>quant;
    if(Qpasta - Spasta >=quant)
    {
        Spasta = Spasta + quant;
        Total_pasta= Total_pasta + quant *250;
        cout<<"\n\n\t\t"<<quant<<"Pasta is ordered!";
    }
    else
    {
        cout<<"\n\tOnly"<<Qpasta - Spasta<<"Pasta remaining in hotel";
        break;

         case 3:
    cout<<"\n\n Enter the number of Burger Quantity: ";
    cin>>quant;
    if(Qburgers - Sburgers >=quant)
    {
        Sburgers = Sburgers + quant;
        Total_burgers= Total_burgers + quant *120;
        cout<<"\n\n\t\t"<<quant<<"Burger is ordered!";
    }
    else
    {
        cout<<"\n\tOnly"<<Qburgers - Sburgers<<"Burger remaining in hotel";
        break;

         case 4:
    cout<<"\n\n Enter the number of Noodles Quantity: ";
    cin>>quant;
    if(Qnoodles - Snoodles >=quant)
    {
        Snoodles = Snoodles + quant;
        Total_noodles = Total_noodles + quant *100;
        cout<<"\n\n\t\t"<<quant<<"Noodles is ordered!";
    }
    else
    {
        cout<<"\n\tOnly"<<Qnoodles - Snoodles<<"noodles remaining in hotel";
        break;

         case 5:
    cout<<"\n\n Enter the number of Shake Quantity: ";
    cin>>quant;
    if(Qshake - Sshake >=quant)
    {
        Sshake = Sshake + quant;
        Total_shake= Total_shake + quant *200;
        cout<<"\n\n\t\t"<<quant<<"Shake is ordered!";
    }
    else
    {
        cout<<"\n\tOnly"<<Qshake - Sshake<<"Shake remaining in hotel";
        break;

         case 6:
    cout<<"\n\n Enter the number of Chicken Quantity: ";
    cin>>quant;
    if(Qchicken - Schicken >=quant)
    {
        Schicken = Schicken + quant;
        Total_chicken= Total_chicken + quant *150;
        cout<<"\n\n\t\t"<<quant<<"Chicken is ordered!";
    }
    else
    {
        cout<<"\n\tOnly"<<Qchicken - Schicken<<"Pasta remaining in hotel";
        break;

         case 7:
             cout<<"\n\t\t Details of sales and collection";
             cout<<"n\n Number of rooms we had: "<<Qrooms;
             cout<<"n\n Number of rooms we gave for rent: "<<Srooms;
             cout<<"n\n Remaining rooms: "<<Qrooms - Srooms;
             cout<<"n\n Total rooms collection for the day: "<<Total_rooms;

             cout<<"n\n Number of pasta we had: "<<Qpasta;
             cout<<"n\n Number of pasta we gave for rent: "<<Spasta;
             cout<<"n\n Remaining pasta: "<<Qpasta - Spasta;
             cout<<"n\n Total pasta collection for the day: "<<Total_pasta;

             cout<<"n\n Number of burgers we had: "<<Qburgers;
             cout<<"n\n Number of burgers we gave for rent: "<<Sburgers;
             cout<<"n\n Remaining burgers: "<<Qburgers - Sburgers;
             cout<<"n\n Total burgers collection for the day: "<<Total_burgers;

             cout<<"n\n Number of noodles we had: "<<Qnoodles;
             cout<<"n\n Number of noodles we gave for rent: "<<Snoodles;
             cout<<"n\n Remaining noodles: "<<Qnoodles - Snoodles;
             cout<<"n\n Total noodles collection for the day: "<<Total_noodles;

             cout<<"n\n Number of shake we had: "<<Qshake;
             cout<<"n\n Number of shake we gave for rent: "<<Sshake;
             cout<<"n\n Remaining shake: "<<Qshake - Sshake;
             cout<<"n\n Total shake collection for the day: "<<Total_shake;

             cout<<"n\n Number of chicken we had: "<<Qchicken;
             cout<<"n\n Number of chicken we gave for rent: "<<Srooms;
             cout<<"n\n Remaining chicken: "<<Qchicken - Schicken;
             cout<<"n\n Total chicken collection for the day: "<<Total_chicken;



             case 8:
                 exit(0);

             default:
                cout<<"\n Please select the numbers mentioned above!";




    }


    }}}}}}
    goto m;
    }


