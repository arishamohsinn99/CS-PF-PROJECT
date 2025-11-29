#include<iostream>
using namespace std;
int main()
{
    string username, password;
    int choice_1 , choice_shop, choice_admin,choice_shopkeeper;
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
     {   choice_admin=1;
          while(choice_admin!=0)   
          {   
          cout<<"\n\n\n";
          cout<<"                                                        WELCOME TO \n"<<endl;
          cout<<"                                        ##    #####    ##     ##   #######   ##   ##"<<endl;
          cout<<"                                       #  #   ##   #   ## # # ##      #      ## # ##"<<endl;
          cout<<"                                       ####   ##    #  ##  #  ##      #      ##  ###"<<endl;
          cout<<"                                       #  #   ##   #   ##     ##      #      ##   ##"<<endl;
          cout<<"                                       #  #   #####    ##     ##   #######   ##   ##\n"<<endl;
          cout<<"                                                          PANEL"<<endl;
          cout<<"\n";
          cout<<"                                             1. Shop Management"<<endl;
          cout<<"                                             2. Tenant Management"<<endl;
          cout<<"                                             3. Staff Management"<<endl;
          cout<<"                                             4. Floor and Space Management"<<endl;
          cout<<"                                             5. Visitor Management"<<endl;
          cout<<"                                             6. Event and Promotion Management "<<endl;
          cout<<"                                             7. Reports and Analytic"<<endl;
          cout<<"                                             0. logout"<<endl;
          cout<<"                                               ENTER YOUR CHOICE=";
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
          else  if(choice_admin == 2)
          {
                      cout<<"*******************************************************************************"<<endl;
                      cout<<"                            TENANT/SHOPKEEPER MANAGEMENT"<<endl;
                      cout<<"*******************************************************************************"<<endl;
                           cout<<"1. Add Shopkeeper"<<endl;
                           cout<<"2. View Shopkeeper"<<endl;
                           cout<<"3. Update Shopkeeper"<<endl;
                           cout<<"4. Remove Shopkeeper"<<endl;
          }
           else  if(choice_admin == 3)
          {
                      cout<<"*******************************************************************************"<<endl;
                      cout<<"                            STAFF MANAGEMENT"<<endl;
                      cout<<"*******************************************************************************"<<endl;
                           cout<<"1. Add Staff"<<endl;
                           cout<<"2. View All Staff"<<endl;
                           cout<<"3. Update Staff"<<endl;
                           cout<<"4. Remove Staff"<<endl;
                           cout<<"5. Assign duty to the staff"<<endl;
          }
           else  if(choice_admin == 4)
          {
                      cout<<"*******************************************************************************"<<endl;
                      cout<<"                      FLOOR AND SPACE MANAGEMENT"<<endl;
                      cout<<"*******************************************************************************"<<endl;
                           cout<<"1. View Floors"<<endl;
                           cout<<"2. View Available Spaces"<<endl;
                           cout<<"3. Allocte Space to New Shop"<<endl;
                           cout<<"4. Update Status of the Floor"<<endl;
                           cout<<"5. Mark Space as Vacant"<<endl;
          }
           else  if(choice_admin == 5)
          {
                      cout<<"*******************************************************************************"<<endl;
                      cout<<"                       VISITOR MANAGEMENT"<<endl;
                      cout<<"*******************************************************************************"<<endl;
                           cout<<"1. Record New Visitor Entry"<<endl;
                           cout<<"2. Record Exit"<<endl;
                           cout<<"3. View Total Visitors Today"<<endl;
                           cout<<"4. View Visitor Log"<<endl;
                           
          }
           else  if(choice_admin == 6)
          {
                      cout<<"*******************************************************************************"<<endl;
                      cout<<"                       EVENT MANAGEMENT"<<endl;
                      cout<<"*******************************************************************************"<<endl;
                           cout<<"1. Add New Event"<<endl;
                           cout<<"2. Upate Event"<<endl;
                           cout<<"3. Cancel Event"<<endl;
                           cout<<"4. View VAll Event"<<endl;
                           
          }
           else  if(choice_admin == 7)
          {
                      cout<<"*******************************************************************************"<<endl;
                      cout<<"                      REPORTS AND ANALYTIC"<<endl;
                      cout<<"*******************************************************************************"<<endl;
                           cout<<"1. Total Shops Report"<<endl;
                           cout<<"2. Total Tenants Report"<<endl;
                           cout<<"3. Staff Report"<<endl;
                           cout<<"4. Visitor Report"<<endl;
                           cout<<"5. Events Report"<<endl;
                           cout<<"6. Generate Mall Summar"<<endl;
                           
          }
          
     }
    }
    else if(username=="shopkeeper" && password=="shopkeeper")
    {
       cout<<"\n\n"<<endl;
       cout<<"                                                                    WELCOME TO\n"<<endl;
       cout<<"                     #####   ##     ##    #######    #######    ##    ##    #######    #######   #######    ########    #######"<<endl;
       cout<<"                     #       ##     ##    ##   ##    ##   ##    ##   ##     ##         ##        ##    #    ##          ##     # "<<endl;
       cout<<"                      ##     #########    ##   ##    #######    ## ##       #######    #######   #######    ########    ########"<<endl;
       cout<<"                        #    ##     ##    ##   ##    ##         ##  ##      ##         ##        ##         ##          ## ## "<<endl;
       cout<<"                     ####    ##     ##    #######    ##         ##    ##    #######    #######   ##         ########    ##   ## \n"<<endl;
       cout<<"                                                                        PANEL"<<endl;

          cout<<"                                             1. View Shop Details"<<endl;
          cout<<"                                             2. Update Shop Information"<<endl;
          cout<<"                                             3. Manage Products"<<endl;
          cout<<"                                             4. View Sales Summary"<<endl;
          cout<<"                                             5. Customer Billing"<<endl;
          cout<<"                                             6. Request Maintenance"<<endl;
          cout<<"                                             0. Logout"<<endl;
          cout<<"                                               ENTER YOUR CHOICE=";
          cin>>choice_shopkeeper;
    }
    else if(username=="staff" && password=="staff" )
    {
          cout<<"                                                   STAFF PANEL"<<endl;
          cout<<"                                             1. View Assigned Duties"<<endl;
          cout<<"                                             2. Mark Attendance"<<endl;
          cout<<"                                             3. Update Work Status"<<endl;
          cout<<"                                             4. Report an Issue"<<endl;
          cout<<"                                             5. View Salary Details"<<endl;
          cout<<"                                             0. Logout"<<endl;
          cout<<"                                               ENTER YOUR CHOICE=";
    }
   }
   else if(choice_1==0)
   {
     cout<<"EXIT";
   }



}