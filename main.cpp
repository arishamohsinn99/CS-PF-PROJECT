#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
HANDLE console= GetStdHandle(STD_OUTPUT_HANDLE);
  
void title()
{
     SetConsoleTextAttribute(console,11);
     cout<<"**********************************************************************************************************************************\n\n"<<endl;
     cout<<"                                           ###      ###      ####       ##         ##"<<endl;
     cout<<"                                           ## ##   # ##     ##  ##      ##         ## "<<endl;
     cout<<"                                           ##   ##   ##    ########     ##         ##"<<endl;
     cout<<"                                           ##        ##    ##     ##    ##         ##"<<endl;
     cout<<"                                           ##        ##    ##     ##    ########   ########"<<endl;
     cout<<"\n";
     cout<<"         ###     ###      ##      ##     ##      ##      ####      #######    ##      ##    #######    ##      ##   ########"<<endl;
     cout<<"         ## ## ## ##     #  #     ## #   ##     #  #    #          ##         ## #  # ##    ##         ## #    ##      ##   "<<endl;
     cout<<"         ##   ##  ##    ######    ##   # ##    ######   #   ###    #######    ##  #   ##    #######    ##  #   ##      ##"<<endl;
     cout<<"         ##       ##    #    #    ##     ##    #    #   #     #    ##         ##      ##    ##         ##    # ##      ##"<<endl;  
     cout<<"         ##       ##    #    #    ##     ##    #    #    #####     #######    ##      ##    #######    ##      ##      ##"<<endl;
     cout<<"\n";
     cout<<"                               ######    ##      ##    #######    ########   ########    ###      ###"<<endl;
     cout<<"                               #           ##  ##      #             ##      ##          ## ##   # ## "<<endl;
     cout<<"                                ####         ##         ####         ##      ########    ##    #   ##"<<endl;
     cout<<"                                    #        ##              #       ##      ##          ##        ## "<<endl;
     cout<<"                               ######        ##       #######        ##      ########    ##        ##"<<endl;
     cout<<"\n";
     cout<<"*********************************************************************************************************************************\n\n"<<endl;

}

void panel()
{
     
     cout<<"                        ====================================================================================="<<endl;      
     cout<<"                                                        1. ADMIN PANEL"<<endl;
     cout<<"                                                        2. SHOPKEEPER PANEL"<<endl;
     cout<<"                                                        3. STAFF PANEL"<<endl;
     cout<<"                                                        0. EXIT"<<endl;
     cout<<"                        ====================================================================================="<<endl;
     cout<<"                                                    Select Who Is Logging In=";
     
}
void loginScreen(string &username, string &password)
{   
    
    cout<<"\n\n";
     cout<<"                                              _________________________________________"<<endl;
     cout<<"                                             |                                         |"<<endl;
     cout<<"                                             |  ====================================   |"<<endl;
     cout<<"                                             |  |                                   |  |"<<endl;
     cout<<"                                             |  |             * LOGIN *             |  |"<<endl;
     cout<<"                                             |   ===================================   |"<<endl;
     cout<<"                                             |  |                                   |  |"<<endl;
     cout<<"                                             |  |                                   |  |"<<endl;
     cout<<"                                                          USERNAME:";
                                                      getline(cin,username);

     cout<<"\n                                                           PASSWORD:";
                                                   getline(cin,password);
     
     cout<<"                                             |  |                                   |  |"<<endl;
     cout<<"                                             |  |                                   |  |"<<endl;
     cout<<"                                             |  |                                   |  |"<<endl;
     cout<<"                                             |  |                                   |  |"<<endl;
     cout<<"                                             |  |                                   |  |"<<endl;
     cout<<"                                             |  =====================================  |"<<endl;
     cout<<"                                             |                                         |"<<endl;
     cout<<"                                             |                                         |"<<endl;
     cout<<"                                             |_________________________________________|"<<endl;
     cout<<"\n\n";
}



             string shopName[100], tenantPhone[100],tenantShop[100],  shopkeeperName[100], tenantName[100], staffName[100], staffRole[100];
             int shopID[100], tenantID[100],tenantRent[100], shopFloor[100], staffID[100], staffSalary[100], totalFloors = 0, floorNumber[50], floorCapacity[50], floorOccupied[50];
             int totalShops = 0;
             int totalTenants = 0;
             int totalStaff = 0;


void AdminPanel()
{
     int choice_1,choice_shop, choice_admin,choice_shopkeeper, shopChoice , tenantChoice, staffChoice ,floorChoice, visitorChoice
    ,eventChoice , reportChoice;
     do{
          
          cout<<"\n\n\n";
          cout<<"*************************************************************************************************************************************"<<endl;
          cout<<"                                                              WELCOME TO \n"<<endl;
          cout<<"                                             ##    #####    ##     ##   ########   ##   ##"<<endl;
          cout<<"                                            #  #   ##   #   ## # # ##      ##      ## # ##"<<endl;
          cout<<"                                            ####   ##    #  ##  #  ##      ##      ##  ###"<<endl;
          cout<<"                                            #  #   ##   #   ##     ##      ##      ##   ##"<<endl;
          cout<<"                                            #  #   #####    ##     ##   ########   ##   ##\n"<<endl;
          cout<<"                                                                 PANEL"<<endl;
          cout<<"*************************************************************************************************************************************"<<endl;
          cout<<"\n";
          cout<<"                                                         1. Shop Management"<<endl;
          cout<<"                                                         2. Tenant Management"<<endl;
          cout<<"                                                         3. Staff Management"<<endl;
          cout<<"                                                         4. Floor and Space Management"<<endl;
          cout<<"                                                         5. Visitor Management"<<endl;
          cout<<"                                                         6. Event and Promotion Management "<<endl;
          cout<<"                                                         7. Reports and Analytic"<<endl;
          cout<<"                                                         0. logout"<<endl;
          cout<<"                                                            ENTER YOUR CHOICE=";
          cin>>choice_admin;
          cin.ignore();
          if(choice_admin == 1)
          {
               do{
                      cout<<"\n\n";
                      cout<<"*******************************************************************************"<<endl;
                      cout<<"                           SHOP MANAGEMENT"<<endl;
                      cout<<"*******************************************************************************"<<endl;
                           cout<<"1. Add Shops"<<endl;
                           cout<<"2. Update Shops"<<endl;
                           cout<<"3. Remove Shops"<<endl;
                           cout<<"4. View Shops"<<endl;
                           cout<<"5. Back"<<endl;
                           cout<<"Enter Choice= ";
                           cin>>shopChoice;
                           cin.ignore();
                           cout<<"\n\n";
                           if(shopChoice==1)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        ADD SHOPS"<<endl;
                              cout<<"**********************************************************"<<endl;
                              cout<<"Enter Shop ID: ";
                              cin>>shopID[totalShops];
                              cin.ignore();
                              cout<<"Enter Shop Name: ";
                              getline(cin, shopName[totalShops]);
                              cout<<"Enter Shopkeeper Name: ";
                              getline(cin, shopkeeperName[totalShops]);
                              cout<<"Enter Floor Number: ";
                              cin>>shopFloor[totalShops];
                              totalShops++;
                              cout<<"\nShop Added Successfully!\n";
                           }
                           else if(shopChoice==2)
                           {
                              int id;
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        UPDATE SHOPS"<<endl;
                              cout<<"**********************************************************"<<endl;
                              cout<<"Enter Shop ID to Update: ";
                              cin>>id;
                              cin.ignore();
                              bool found = false;

                              for(int i=0; i<totalShops; i++)
                              {
                                  if(shopID[i] == id)
                                      {
                                         found = true;
                                         cout<<"Enter New Shop Name: ";
                                         getline(cin, shopName[i]);
                                         cout<<"Enter New Shopkeeper Name: ";
                                         getline(cin, shopkeeperName[i]);
                                         cout<<"Enter New Floor Number: ";
                                         cin>>shopFloor[i];
                                         cout<<"\nShop Updated Successfully!"<<endl;
                                         break;

                                       }
                                       else if(found!=true)
                                         cout<<"Shop Not Found!"<<endl;
                                }
                             }
                           else if(shopChoice==3)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        REMOVE SHOPS"<<endl;
                              cout<<"**********************************************************"<<endl;
                              int id;
                              cout<<"Enter Shop ID to Update: ";
                              cin>>id;
                              cin.ignore();
                              bool found = false; 

                              for(int i=0; i<totalShops; i++)
                               {
                                    if(shopID[i] == id)
                                     {
                                       found = true;
                                         for(int j=i; j<totalShops-1; j++)
                                           {
                                                shopID[j] = shopID[j+1];
                                                shopName[j] = shopName[j+1];
                                                shopkeeperName[j] = shopkeeperName[j+1];
                                                shopFloor[j] = shopFloor[j+1];
                                           }
                                                    totalShops--;
                                           cout<<"Shop Removed Successfully!\n";
                                            break;
                                     }
                               }
                                if(found!=true)
                                {
                                   cout<<"Shop Not Found!"<<endl;
                                }
                            }
                           else if(shopChoice==4)
                           {
                              cout<<"\n          *********************************************************"<<endl;
                              cout<<"                                     VIEW SHOPS"<<endl;
                              cout<<"             **********************************************************"<<endl;
                                if(totalShops == 0)
                                    {
                                      cout<<"No Shops Available.\n";
                                    }
                                    else
                                    cout << setfill('-') << setw(80) << "-" << setfill(' ') << endl;
                                    cout << left<< setw(10) << "ID"<< setw(25) << "SHOP NAME"<< setw(25) << "SHOPKEEPER"<< setw(15) << "FLOOR"<<endl;
                                    cout << setfill('-') << setw(80) << "-" << setfill(' ') << endl;
                                    {
                                      for(int i=0; i<totalShops; i++)
                                       {
                                         cout << left<< setw(10) << shopID[i]<< setw(25) << shopName[i]<< setw(25) << shopkeeperName[i]<< setw(15) << shopFloor[i]<< endl;
                                         cout<<"\n";
                                       }
                                       cout << setfill('-') << setw(80) << "-" << setfill(' ') << endl;
                                    }
                              
                           }
               }while(shopChoice!=5);
          }
          else  if(choice_admin == 2)
          {
               do{
                      cout<<"\n\n";
                      cout<<"*******************************************************************************"<<endl;
                      cout<<"                            TENANT/SHOPKEEPER MANAGEMENT"<<endl;
                      cout<<"*******************************************************************************"<<endl;
                           cout<<"1. Add Shopkeeper"<<endl;
                           cout<<"2. View Shopkeeper"<<endl;
                           cout<<"3. Update Shopkeeper"<<endl;
                           cout<<"4. Remove Shopkeeper"<<endl;
                           cout<<"5. Back"<<endl;
                           cout<<"Enter Choice= ";
                           cin>>tenantChoice;
                           cin.ignore();
                           cout<<"\n\n";
                           if(tenantChoice==1)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        ADD SHOPKEEPER"<<endl;
                              cout<<"**********************************************************"<<endl;
                              cout<<"Enter Tenant ID: ";
                              cin>>tenantID[totalTenants];
                              cin.ignore();
                              cout<<"Enter Tenant Name: ";
                              getline(cin, tenantName[totalTenants]);   
                              cout<<"Enter Tenant Phone: ";
                              getline(cin, tenantPhone[totalTenants]);
                              cout<<"Enter Shop Name Allocated: ";
                              getline(cin, tenantShop[totalTenants]);
                              cout<<"Enter Monthly Rent: ";
                              cin>>tenantRent[totalTenants];
                              cin.ignore();
                              totalTenants++;
                              cout<<"\nTenant Added Successfully!"<<endl;

                           }
                           else if(tenantChoice==2)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        VIEW SHOPKEEPER"<<endl;
                              cout<<"**********************************************************"<<endl;
                              if(totalTenants == 0)
                                {
                                  cout<<"No Tenants Available.\n";
                                }
                              else
                                 {
                                     cout << setfill('-') << setw(100) << "-" << setfill(' ') << endl;
                                     cout << left << setw(10) << "ID"<< setw(25) << "NAME"<< setw(20) << "PHONE"<< setw(25) << "SHOP"<< setw(15) << "RENT" << endl;
                                     cout << setfill('-') << setw(100) << "-" << setfill(' ') << endl;
                                  for(int i=0; i<totalTenants; i++)
                                     {
                                       cout << left << setw(10) << tenantID[i]<< setw(25) << tenantName[i]<< setw(20) << tenantPhone[i]<< setw(25) << tenantShop[i]<< setw(15) << tenantRent[i] << endl;
                                     }
                                       cout << setfill('-') << setw(100) << "-" << setfill(' ') << endl;
                                 }

                           }
                           else if(tenantChoice==3)
                           {
                              int id;
                              bool found = false;
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        UPDATE SHOPKEEPER"<<endl;
                              cout<<"**********************************************************"<<endl;
                              cout<<"Enter Tenant ID to Update: ";
                              cin>>id;
                              cin.ignore();
                              for(int i=0; i<totalTenants; i++)
                                {
                                  if(tenantID[i] == id)
                                    {
                                      found = true;
                                      cout<<"Enter New Tenant Name: ";
                                      getline(cin, tenantName[i]);
                                      cout<<"Enter New Phone Number: ";
                                      getline(cin, tenantPhone[i]);
                                      cout<<"Enter New Shop Name: ";
                                      getline(cin, tenantShop[i]); 
                                      cout<<"Enter New Rent: ";
                                      cin>>tenantRent[i];
                                     cin.ignore();
                                     cout<<"\nTenant Updated Successfully!"<<endl;
                                     break;
                                    }
                                 }
                            if(found == false)
                               cout<<"Tenant Not Found!\n";

                           }
                           else if(tenantChoice==4)
                           {
                              int id;
                              bool found = false;
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        REMOVE SHOPKEEPER"<<endl;
                              cout<<"**********************************************************"<<endl;
                              cout<<"Enter Tenant ID to Remove: ";
                              cin>>id;
                              cin.ignore();
                              for(int i=0; i<totalTenants; i++)
                               {
                                   if(tenantID[i] == id)
                                    {
                                      found = true;
                                        for(int j=i; j<totalTenants-1; j++)
                                          {
                                                tenantID[j] = tenantID[j+1];
                                                tenantName[j] = tenantName[j+1];
                                                tenantPhone[j] = tenantPhone[j+1];
                                                tenantShop[j] = tenantShop[j+1];
                                                tenantRent[j] = tenantRent[j+1];
                                          }
                                                totalTenants--;
                                              cout<<"Tenant Removed Successfully!\n";
                                              break;
                                     }
                              }
                             if(found == false)
                                 cout<<"Tenant Not Found!\n";


                           }
               }while(tenantChoice!=5);
          }
           else  if(choice_admin == 3)
          {
               do{
                      cout<<"\n\n";
                      cout<<"*******************************************************************************"<<endl;
                      cout<<"                            STAFF MANAGEMENT"<<endl;
                      cout<<"*******************************************************************************"<<endl;
                           cout<<"1. Add Staff"<<endl;
                           cout<<"2. View All Staff"<<endl;
                           cout<<"3. Update Staff"<<endl;
                           cout<<"4. Remove Staff"<<endl;
                           cout<<"5. Assign duty to the staff"<<endl;
                           cout<<"6.Back"<<endl;
                           cout<<"Enter Choice= ";
                           cin>>staffChoice;
                           cin.ignore();
                           cout<<"\n\n";
                           if(staffChoice==1)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        ADD STAFF"<<endl;
                              cout<<"**********************************************************"<<endl;
                              cout<<"Enter Staff ID: ";
                              cin>>staffID[totalStaff];
                              cin.ignore();
                              cout<<"Enter Staff Name: ";
                              getline(cin, staffName[totalStaff]);
                              cout<<"Enter Staff Role: ";
                              getline(cin, staffRole[totalStaff]);
                              cout<<"Enter Salary: ";
                              cin>>staffSalary[totalStaff];
                              totalStaff++;
                              cout<<"\nStaff Added Successfully!\n";

                           }
                           else if(staffChoice==2)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        VIEW ALL STAFF"<<endl;
                              cout<<"**********************************************************"<<endl;
                                  if(totalStaff == 0)
                                    {
                                     cout<<"No Staff Available.\n";
                                    }
                                     else
                                     {
                                        cout << setfill('-') << setw(90) << "-" << setfill(' ') << endl;
                                        cout << left<< setw(10) << "ID"<< setw(25) << "NAME"<< setw(25) << "ROLE"<< setw(15) << "SALARY" << endl;
                                        cout << setfill('-') << setw(90) << "-" << setfill(' ') << endl;
                                     for(int i=0; i<totalStaff; i++)
                                         {
                                              cout << left<< setw(10) << staffID[i]<< setw(25) << staffName[i]<< setw(25) << staffRole[i]<< setw(15) << staffSalary[i] << endl;
                                         }

                                              cout << setfill('-') << setw(90) << "-" << setfill(' ') << endl;
                                     }

                           }
                           if(staffChoice==3)
                           {
                              int id;
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        UPDATE STAFF"<<endl;
                              cout<<"**********************************************************"<<endl;
                              cout<<"Enter Staff ID to Update: ";
                              cin>>id;
                              cin.ignore();
                              bool found = false;
                              for(int i=0; i<totalStaff; i++)
                                {
                                     if(staffID[i] == id)
                                      {
                                        found = true;
                                        cout<<"Enter New Staff Name: ";
                                        getline(cin, staffName[i]);
                                        cout<<"Enter New Staff Role: ";
                                        getline(cin, staffRole[i]);
                                        cout<<"Enter New Salary: ";
                                        cin>>staffSalary[i];
                                        cout<<"\nStaff Updated Successfully!\n";
                                        break;
                                     }
                                }
                                if(!found)
                                 cout<<"Staff Not Found!\n";

                           }
                           if(staffChoice==4)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                         REMOVE STAFF"<<endl;
                              cout<<"**********************************************************"<<endl;
                              int id;
                              cout<<"Enter Staff ID to Remove: ";
                              cin>>id;
                              cin.ignore();
                              bool found = false;
                              for(int i=0; i<totalStaff; i++)
                               {
                                  if(staffID[i] == id)
                                    {
                                     found = true;
                                       for(int j=i; j<totalStaff-1; j++)
                                         {
                                            staffID[j] = staffID[j+1];
                                            staffName[j] = staffName[j+1];
                                            staffRole[j] = staffRole[j+1];
                                            staffSalary[j] = staffSalary[j+1];
                                         }
                                            totalStaff--;
                                            cout<<"Staff Removed Successfully!\n";
                                            break;
                                     }
                               }
                                if(!found)
                                cout<<"Staff Not Found!\n";

                           }
                           if(staffChoice==5)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        ASSIGNING DUTY TO STAFF"<<endl;
                              cout<<"**********************************************************"<<endl;
                              int id;
                              bool found;
                              string duty;
                              cout<<"Enter Staff ID: ";
                              cin>>id;
                              cin.ignore();
                              found = false;
                              for(int i=0; i<totalStaff; i++)
                               {
                                   if(staffID[i] == id)
                                    {
                                        found = true;
                                        cout<<"Enter Duty to Assign: ";
                                        getline(cin, duty);
                                        cout<<"\nDuty Assigned Successfully to "<<staffName[i]<<"!\n";
                                        break;
                                    }
                               }
                                  if(!found)
                                   cout<<"Staff Not Found!\n";
                           }
               }while(staffChoice!=6);
          }
           else  if(choice_admin == 4)
          {
               do{
                      cout<<"\n\n";
                      cout<<"*******************************************************************************"<<endl;
                      cout<<"                      FLOOR AND SPACE MANAGEMENT"<<endl;
                      cout<<"*******************************************************************************"<<endl;
                           cout<<"1. View Floors"<<endl;
                           cout<<"2. View Available Spaces"<<endl;
                           cout<<"3. Allocte Space to New Shop"<<endl;
                           cout<<"4. Update Status of the Floor"<<endl;
                           cout<<"5. Mark Space as Vacant"<<endl;
                           cout<<"6. Back"<<endl;
                           cout<<"Enter Choice= ";
                           cin>>floorChoice;
                           cin.ignore();
                           cout<<"\n\n";
                           if(floorChoice==1)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        VIEW FLOOR"<<endl;
                              cout<<"**********************************************************"<<endl;
                              if(totalFloors == 0)
                               {
                                 cout<<"No Floors Added Yet.\n";
                               }
                               else
                                  {
                                   cout << setfill('-') << setw(60) << "-" << setfill(' ') << endl;
                                   cout << left << setw(15) << "FLOOR NO" << setw(20) << "CAPACITY"<< setw(20) << "OCCUPIED" << endl;
                                   cout << setfill('-') << setw(60) << "-" << setfill(' ') << endl;
                                     for(int i=0; i<totalFloors; i++)
                                      {
                                        cout << left << setw(15) << floorNumber[i]<< setw(20) << floorCapacity[i]<< setw(20) << floorOccupied[i] << endl;
                                      }
                                        cout << setfill('-') << setw(60) << "-" << setfill(' ') << endl;
                                  }

                           }
                           else if(floorChoice==2)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                         VIEW AVAILABLE SPACES"<<endl;
                              cout<<"**********************************************************"<<endl;
                              if(totalFloors == 0)
                               {
                                 cout<<"No Floors Added Yet.\n";
                               }
                               else
                               {
                               cout << left << setw(15) << "FLOOR NO"<< setw(25) << "AVAILABLE SPACES" << endl;
                               cout << setfill('-') << setw(40) << "-" << setfill(' ') << endl;
                                 for(int i=0; i<totalFloors; i++)
                                   {
                                      cout << left << setw(15) << floorNumber[i]<< setw(25) << (floorCapacity[i] - floorOccupied[i]) << endl;
                                   }
                               }

                           }
                           else if(floorChoice==3)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                         ALLOCATE SPACE TO NEW FLOOR"<<endl;
                              cout<<"**********************************************************"<<endl;
                              int floorNo;
                              bool found;
                              cout<<"Enter Floor Number to Allocate Space: ";
                              cin>>floorNo;
                              cin.ignore();
                              found = false;
                               for(int i=0; i<totalFloors; i++)
                                 {
                                     if(floorNumber[i] == floorNo)
                                     {
                                     found = true;
                                       if(floorOccupied[i] < floorCapacity[i])
                                       {
                                        floorOccupied[i]++;
                                        cout<<"Space Allocated Successfully on Floor "<<floorNo<<"\n";
                                       }
                                     else
                                       cout<<"No Available Space on this Floor!\n";
                                       break;
                                     }
                                 }
                             if(found!=true)
                            {
                                cout<<"Floor Not Found! Adding New Floor...\n";
                                floorNumber[totalFloors] = floorNo;
                                cout<<"Enter Floor Capacity: ";
                                cin>>floorCapacity[totalFloors];
                                floorOccupied[totalFloors] = 1; // Allocating first space
                                totalFloors++;
                                cout<<"New Floor Added and Space Allocated Successfully!\n";
                             }

                           }
                           else if(floorChoice==4)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                         UPDATE STATUS OF THE FLOOR"<<endl;
                              cout<<"**********************************************************"<<endl;
                              int floorNo;
                              bool found;
                              cout<<"Enter Floor Number to Update: ";
                              cin>>floorNo; 
                              cin.ignore();
                              found = false;
                               for(int i=0; i<totalFloors; i++)
                               {
                                  if(floorNumber[i] == floorNo)
                                     {
                                       found = true;
                                       cout<<"Enter New Floor Capacity: ";
                                       cin>>floorCapacity[i];
                                       cin.ignore();
                                       cout<<"Enter Number of Occupied Spaces: ";
                                       cin>>floorOccupied[i];
                                       cin.ignore();
                                       cout<<"Floor Status Updated Successfully!\n";
                                       break;
                                    }
                              }
                               if(found!=true)
                                  cout<<"Floor Not Found!\n";
                           }
                           else if(floorChoice==5)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                         MARK AS VACANT SPACE"<<endl;
                              cout<<"**********************************************************"<<endl;
                                                            int floorNo;
                               bool found ;
                              cout<<"Enter Floor Number: ";
                              cin>>floorNo;
                              cin.ignore();
                              found = false;
                                 for(int i=0; i<totalFloors; i++)
                                   {
                                     if(floorNumber[i] == floorNo)
                                        {
                                          found = true;
                                          if(floorOccupied[i] > 0)
                                            {
                                               floorOccupied[i]--;
                                               cout<<"Space Marked as Vacant on Floor "<<floorNo<<"\n";
                                            }
                                           else
                                            cout<<"No Occupied Space to Vacate on this Floor!\n";
                                            break;
                                          }
                                    }
                                     if(!found)
                                       cout<<"Floor Not Found!\n";

                           }
                         }while(floorChoice!=6);
          }
           else  if(choice_admin == 5)
          {
                  do{
                      cout<<"\n\n";
                      cout<<"*******************************************************************************"<<endl;
                      cout<<"                       VISITOR MANAGEMENT"<<endl;
                      cout<<"*******************************************************************************"<<endl;
                           cout<<"1. Record New Visitor Entry"<<endl;
                           cout<<"2. Record Exit"<<endl;
                           cout<<"3. View Total Visitors Today"<<endl;
                           cout<<"4. View Visitor Log"<<endl;
                           cout<<"5. Back"<<endl;
                           cout<<"Enter= ";
                           cin>>visitorChoice;
                           cout<<"\n\n";
                            if(visitorChoice==1)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                      RECORD NEW VISITOR ENTRY"<<endl;
                              cout<<"**********************************************************"<<endl;

                           }
                           else  if(eventChoice==2)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        RECORD EXIT"<<endl;
                              cout<<"**********************************************************"<<endl;

                           }
                           else  if(eventChoice==3)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        VIEW TOTAL VISITOR TODAY"<<endl;
                              cout<<"**********************************************************"<<endl;

                           }
                           else  if(eventChoice==4)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        VIEW VISITOR LOG"<<endl;
                              cout<<"**********************************************************"<<endl;

                           }
                           
                  }while(visitorChoice!=5);
          }
           else  if(choice_admin == 6)
          {
               do{
                      cout<<"\n\n";
                      cout<<"*******************************************************************************"<<endl;
                      cout<<"                       EVENT MANAGEMENT"<<endl;
                      cout<<"*******************************************************************************"<<endl;
                           cout<<"1. Add New Event"<<endl;
                           cout<<"2. Upate Event"<<endl;
                           cout<<"3. Cancel Event"<<endl;
                           cout<<"4. View All Event"<<endl;
                           cout<<"5. Back"<<endl;
                           cout<<"Enter Choice= ";
                           cin>>eventChoice;
                           cout<<"\n\n";
                           if(eventChoice==1)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        ADD NEW EVENT"<<endl;
                              cout<<"**********************************************************"<<endl;

                           }
                           else if(eventChoice==2)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        UPDATE EVENT"<<endl;
                              cout<<"**********************************************************"<<endl;

                           }
                           else if(eventChoice==3)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        CANCEL EVENT"<<endl;
                              cout<<"**********************************************************"<<endl;

                           }
                           else if(eventChoice==4)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        VIEW ALL EVENT"<<endl;
                              cout<<"**********************************************************"<<endl;

                           }
                 }while(eventChoice!=5);
          }
           else  if(choice_admin == 7)
          {
               do{    cout<<"\n\n";
                      cout<<"*******************************************************************************"<<endl;
                      cout<<"                      REPORTS AND ANALYTIC"<<endl;
                      cout<<"*******************************************************************************"<<endl;
                           cout<<"1. Total Shops Report"<<endl;
                           cout<<"2. Total Tenants Report"<<endl;
                           cout<<"3. Staff Report"<<endl;
                           cout<<"4. Visitor Report"<<endl;
                           cout<<"5. Events Report"<<endl;
                           cout<<"6. Generate Mall Summary"<<endl;
                           cout<<"7. Back"<<endl;
                           cout<<"Enter Choice= ";
                           cin>>reportChoice;
                           cout<<"\n\n";
                           if(reportChoice==1)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                        TOTAL SHOPS REPORT"<<endl;
                              cout<<"**********************************************************"<<endl;

                           }
                           else if(eventChoice==2)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                         TOTAL TENANTS REPORT"<<endl;
                              cout<<"**********************************************************"<<endl;

                           }
                           else if(eventChoice==3)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                         STAFF REPORT"<<endl;
                              cout<<"**********************************************************"<<endl;

                           }
                           else if(eventChoice==4)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                         VISITOR REPORT"<<endl;
                              cout<<"**********************************************************"<<endl;

                           }
                           else if(eventChoice==5)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                         EVENT REPORT"<<endl;
                              cout<<"**********************************************************"<<endl;

                           }
                           else if(eventChoice==6)
                           {
                              cout<<"\n*********************************************************"<<endl;
                              cout<<"                         GENERATE MALL SUMMARY"<<endl;
                              cout<<"**********************************************************"<<endl;

                           }
               }while(reportChoice!=7);
                           
          }
          
 }while(choice_admin!=0);
}

void ShopkeeperPanel()
{
     int choice_shopkeeper=1;
      do{

     cout<<"\n\n"<<endl;
       cout<<"*************************************************************************************************************************************"<<endl;
       cout<<"                                                                WELCOME TO\n"<<endl;
       cout<<"                #####   ##     ##    #######    #######    ##    ##    #######    #######   #######    ########    #######"<<endl;
       cout<<"                #       ##     ##    ##   ##    ##   ##    ##   ##     ##         ##        ##    #    ##          ##     # "<<endl;
       cout<<"                 ##     #########    ##   ##    #######    ## ##       #######    #######   #######    ########    ########"<<endl;
       cout<<"                   #    ##     ##    ##   ##    ##         ##  ##      ##         ##        ##         ##          ## ## "<<endl;
       cout<<"                ####    ##     ##    #######    ##         ##    ##    #######    #######   ##         ########    ##   ## \n"<<endl;
       cout<<"                                                                   PANEL"<<endl;
       cout<<"*************************************************************************************************************************************"<<endl;

          cout<<"\n"<<endl;
          cout<<"                                                        1. View Shop Details"<<endl;
          cout<<"                                                        2. Update Shop Information"<<endl;
          cout<<"                                                        3. Manage Products"<<endl;
          cout<<"                                                        4. View Sales Summary"<<endl;
          cout<<"                                                        5. Customer Billing"<<endl;
          cout<<"                                                        6. Request Maintenance"<<endl;
          cout<<"                                                        0. Logout"<<endl;
          cout<<"                                                           ENTER YOUR CHOICE=";
          cin>>choice_shopkeeper;

          
          if(choice_shopkeeper==1)
          {
               cout<<"******************************************************************************"<<endl;
               cout<<"                         VIEW SHOP DETAILS"<<endl;
               cout<<"*******************************************************************************"<<endl;
          }
          else if(choice_shopkeeper==2)
          {
               cout<<"******************************************************************************"<<endl;
               cout<<"                         UPDATE SHOP INFORMATION"<<endl;
               cout<<"*******************************************************************************"<<endl;
          }
          else if(choice_shopkeeper==3)
          {
               cout<<"******************************************************************************"<<endl;
               cout<<"                         MANAGE PRODUCTS"<<endl;
               cout<<"*******************************************************************************"<<endl;
          }
          else if(choice_shopkeeper==4)
          {
               cout<<"******************************************************************************"<<endl;
               cout<<"                         VIEW SALES SUMMARY"<<endl;
               cout<<"*******************************************************************************"<<endl;
          }
          else if(choice_shopkeeper==5)
          {
               cout<<"******************************************************************************"<<endl;
               cout<<"                         CUSTOMER BILING"<<endl;
               cout<<"*******************************************************************************"<<endl;
          }
          else if(choice_shopkeeper==6)
          {
               cout<<"******************************************************************************"<<endl;
               cout<<"                         REQUEST MAINTENANCE"<<endl;
               cout<<"*******************************************************************************"<<endl;
          }
          if(choice_shopkeeper != 0)
    {
             cout << "\nPress Enter to return to the menu";
             cin.ignore(); 
             cin.get(); 
    }
     }while(choice_shopkeeper!=0);
}
void StaffPanel()
{
       
             int staffChoice=1;
        while(staffChoice!=0)
             {  
          cout<<"*************************************************************************************************************************************"<<endl;
          cout<<"                                                               WELCOME TO\n"<<endl;
          cout<<"                                             ####    ######      ####      #######    ######"<<endl;
          cout<<"                                             #         ##       ##  ##     ##         ##     "<<endl;
          cout<<"                                              ###      ##      ########    #######    ######"<<endl;
          cout<<"                                                #      ##     ##      ##   ##         ##"<<endl;
          cout<<"                                             ####      ##     ##      ##   ##         ## "<<endl;
          cout<<"                                                                  PANEL"<<endl;
          cout<<"*************************************************************************************************************************************"<<endl;
          cout<<"\n"<<endl;

          cout<<"                                                         1. View Assigned Duties"<<endl;
          cout<<"                                                         2. Mark Attendance"<<endl;
          cout<<"                                                         3. Update Work Status"<<endl;
          cout<<"                                                         4. Report an Issue"<<endl;
          cout<<"                                                         5. View Salary Details"<<endl;
          cout<<"                                                         0. Logout"<<endl;
          cout<<"                                                          ENTER YOUR CHOICE=";
          cin>>staffChoice;
          if(staffChoice==1)
                {
                    cout<<"****************************************************************"<<endl;
                    cout<<"           VIEW ASSIGNED DUTIES"<<endl;
                    cout<<"****************************************************************"<<endl;
                }
                else if(staffChoice==2)
                {
                    cout<<"****************************************************************"<<endl;
                    cout<<"              MARK ATTENDANCE"<<endl;
                    cout<<"****************************************************************"<<endl;
                }
                 else if(staffChoice==3)
                {
                    cout<<"****************************************************************"<<endl;
                    cout<<"                UPDATE WORK STATUS "<<endl;
                    cout<<"****************************************************************"<<endl;
                }
                 else if(staffChoice==4)
                {
                    cout<<"****************************************************************"<<endl;
                    cout<<"              REPORT AN ISSUE"<<endl;
                    cout<<"****************************************************************"<<endl;
                }
                 else if(staffChoice==5)
                {
                    cout<<"****************************************************************"<<endl;
                    cout<<"              VIEW SALARY DETAILS"<<endl;
                    cout<<"****************************************************************"<<endl;
                }
                if(staffChoice != 0)
                 {
                    cout << "Press Enter to continue";
                    cin.ignore();
                    cin.get();
                 }
               
}
}


int main()
{
    string username, password;
    int choice_1;

             title();  
             panel();
             cin>>choice_1;
             cin.ignore();
   if(choice_1==1 || choice_1==2 || choice_1==3)
   { 
            loginScreen(username,password);

     if(username=="admin" && password=="admin")
       {   
         AdminPanel(); 
     
       }
    else if(username=="shopkeeper" && password=="shopkeeper")
       { 
        ShopkeeperPanel();
        
        }
    else if(username=="staff" && password=="staff" )
       {
       StaffPanel();
       }
 }
   else if(choice_1==0)
 {
     cout<<"EXIT"<<endl;
 }
}