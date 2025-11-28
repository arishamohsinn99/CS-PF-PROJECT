#include<iostream>
using namespace std;
int main()
{
    string username, password;
    int choice_1 , choice_shop, choice_admin;
     cout<<"***************************************************************************************************************************\n\n"<<endl;
     cout<<"                                      ##       ##      ##       ##         ##"<<endl;
     cout<<"                                      ## #   # ##     #  #      ##         ## "<<endl;
     cout<<"                                      ##   #   ##    ######     ##         ##"<<endl;
     cout<<"                                      ##       ##    #     #    ##         ##"<<endl;
     cout<<"                                      ##       ##    #     #    ########   ########"<<endl;
     cout<<"\n";
     cout<<"##      ##      ##      ##     ##      ##      ####      ######    ##      ##    ######    ##      ##   ########"<<endl;
     cout<<"## #  # ##     #  #     ## #   ##     #  #    #          #         ## #  # ##    #         ## #    ##      ##   "<<endl;
     cout<<"##  #   ##    ######    ##   # ##    ######   #   ###    ######    ##  #   ##    ######    ##  #   ##      ##"<<endl;
     cout<<"##      ##    #    #    ##     ##    #    #   #     #    #         ##      ##    #         ##    # ##      ##"<<endl;  
     cout<<"##      ##    #    #    ##     ##    #    #    #####     ######    ##      ##    ######    ##      ##      ##"<<endl;
     cout<<"\n";
     cout<<"***************************************************************************************************************************\n\n"<<endl;
     cout<<"            ====================================================================================="<<endl;      
     cout<<"                                             1. ADMIN PANEL"<<endl;
     cout<<"                                             2. SHOPKEEPER"<<endl;
     cout<<"                                             3. STAFF MEMBER"<<endl;
     cout<<"                                             0.EXIT"<<endl;
     cout<<"                                             Select who is logging in=";
     cin>>choice_1;
     cin.ignore();
     cout<<"           ====================================================================================="<<endl; 
   if(choice_1==1 || choice_1==2 || choice_1==3)
   { 
     cout<<"                                       _________________________________________"<<endl;
     cout<<"                                      |                                         |"<<endl;
     cout<<"                                      |  ====================================   |"<<endl;
     cout<<"                                      |  |                                   |  |"<<endl;
     cout<<"                                      |  |             * LOGIN *             |  |"<<endl;
     cout<<"                                      |   ===================================   |"<<endl;
     cout<<"                                      |  |                                   |  |"<<endl;
     cout<<"                                      |  |                                   |  |"<<endl;
     cout<<"                                                   USERNAME:";
                                                      getline(cin,username);

     cout<<"\n                                                    PASSWORD:";
                                                   getline(cin,password);
     
     cout<<"                                      |  |                                   |  |"<<endl;
     cout<<"                                      |  |                                   |  |"<<endl;
     cout<<"                                      |  |                                   |  |"<<endl;
     cout<<"                                      |  |                                   |  |"<<endl;
     cout<<"                                      |  |                                   |  |"<<endl;
     cout<<"                                      |  =====================================  |"<<endl;
     cout<<"                                      |                                         |"<<endl;
     cout<<"                                      |                                         |"<<endl;
     cout<<"                                      |_________________________________________|"<<endl;
     if(username=="admin" && password=="admin")
     {    cout<<"\n\n\n";
          cout<<"                                                     WELCOME TO \n"<<endl;
          cout<<"                                        ##    #####    ##     ##   #######   ##   ##"<<endl;
          cout<<"                                       #  #   ##   #   ## # # ##      #      ## # ##"<<endl;
          cout<<"                                       ####   ##    #  ##  #  ##      #      ##  ###"<<endl;
          cout<<"                                       #  #   ##   #   ##     ##      #      ##   ##"<<endl;
          cout<<"                                       #  #   #####    ##     ##   #######   ##   ##\n"<<endl;
          cout<<"                                                          PANEL"<<endl;
          cout<<"\n";
          cout<<"                                             1. Shop Management"<<endl;
          cout<<"                                             2. Tenant Management"<<endl;
          cout<<"                                             3. Employee Management"<<endl;
          cout<<"                                             4. Floor and Space Management"<<endl;
          cout<<"                                             5. Visitor Management"<<endl;
          cout<<"                                             6. Event and Promotion Management "<<endl;
          cout<<"                                             7. Reports and Analytic"<<endl;
          cout<<"                                             0. logout"<<endl;
          cout<<"                                             ENTER YOUR CHOICE=";
          cin>>choice_admin;
          cin.ignore();
          if(choice_admin == 1)
          {
                      cout<<"*******************************************************************************"<<endl;
                      cout<<"                            SHOP MANAGEMENT"<<endl;
                      cout<<"*******************************************************************************"<<endl;
                           cout<<"1. Add Shops"<<endl;
                           cout<<"2. Update Shops"<<endl;
                           cout<<"3. Remove Shops"<<endl;
          }
     }
   }
   else if(choice_1==0)
   {
     cout<<"EXIT";
   }



}