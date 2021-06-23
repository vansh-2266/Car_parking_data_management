
#include <iostream>
using namespace std;

int main(){
      cout<<"\t \t \t V E H I C L E   P A R K I N G   D A T A   M A N A G E M E N T. "<<endl<<endl;
      
      int Car = 0 , Bike = 0 , Auto = 0 , Truck = 0; // declaring all variables as vehicle.
      int entry;// user input that you will enter.
      
      // This varible of fairs has defined to take amount to parking charge imposed vehicles to vehicles .  
      int car_fair ;
      cout << "Enter the reqiured parking fair for Car : ";
      cin>> car_fair;
      int bike_fair ;
      cout << "Enter the reqiured parking fair for bike : ";
      cin>> bike_fair;
      int  auto_fair;
      cout << "Enter the reqiured parking fair for auto : ";
      cin>> auto_fair;
      int truck_fair ;
      cout << "Enter the reqiured parking fair for  truck : ";
      cin>> truck_fair;


      while(1){ // we are runnig this code in infinite loop to take user input again and again for different input and different results!!

          // These are some instruction while using this programm where it is mentioned that which key signifies which output !
          cout<<"Press 1 to get Entry of Car."<<endl;
          cout<<"Press 2 to get Entry of Bike."<<endl;
          cout<<"Press 3 to get Entry of Auto."<<endl;
          cout<<"Press 4 to get Entry of Truck."<<endl;
          cout<<"Press 5 to get All Total Entry."<<endl;
          cout<<"Press 6 to get Total ammount Earned by parking of different vehicles."<<endl;
          cout<<"Press 7 to  Delete your all data entry."<<endl;
          cout<<"Press 8 to get Exit this programm.."<<endl<<endl;

          cout<<"Enter your Input :"<<" ";
          cin>>entry;

          if(entry == 1){
              system("CLS"); // This is clear screen command.             
               Car++;
          }
          else if(entry == 2){
              system("CLS");
              Bike++;
          }
          else if (entry == 3){
              system("CLS");
              Auto++;
          }
          else if(entry == 4){
              system("CLS");
              Truck++ ;
          }
          else if (entry == 5){
              
              system("CLS");

              cout<<" \t \t Total Parked Vehical in Parking Zone."<<endl<<endl;
              cout<<"Total no. of Car Parked:"<<Car<<endl;
              cout<<"Total no. of Bike Parked:"<< Bike<<endl;
              cout<<"Total no. of Auto Parked:"<<Auto<<endl;
              cout<<"Total no. of Truck Parked:"<<Truck<<endl<<endl;
          }
          else if (entry == 6){

              system("CLS");

              cout<<" \t \t Total ammount Earned by parking of different vehicles."<<endl<<endl;
              cout<<"Parking money earn by Car:"<< car_fair * Car <<endl;
              cout<<"Parking money earn by Bike:"<< bike_fair * Bike <<endl;
              cout<<"Parking money earn by Auto:"<< auto_fair * Auto <<endl;
              cout<<"Parking money earn by Truck:"<< truck_fair * Truck <<endl<<endl;
              cout<<"Total ammount Earned by parking of different vehicles:"<<((car_fair*Car) +(bike_fair * Bike)+(auto_fair * Auto )+(truck_fair * Truck))<<endl<<endl;

          }
          else if(entry == 7){
              Car = 0;
              Bike = 0;
              Auto = 0;
              Truck =  0;
             cout<<"Your data has been Deleted"<<endl<<endl;  
          }
          else if(entry == 8){
              exit(0);
          }
          else{
              cout<<" Your Entry is Invalid !! "<<endl<<endl;
          }




      }




      return 0;
}