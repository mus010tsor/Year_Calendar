#include <iostream>
#include <iomanip>

int main(){

std::cout << "Enter the year: " << std::endl;
int year;
std::cin >> year;
std::cout << "Enter the first week day of the year [1:Monday, ..., 7:Sunday]: " << std::endl;
int first_wd;
std::cin >> first_wd;

if ((first_wd < 1) || (first_wd > 7)){
    std::cout << "Invalid week day!" << std::endl;
    return 0;
}

std::cout << "Calendar for " << year << std::endl;

const unsigned int months {12}; // for the loop to repeat until all the months are displayed 

const unsigned int wth {5}; // space between the day names on the calendar

// the width size per line = 7 (quantity of setw-statements per line) * 5 (value of 'wth' variable)
// We need to move to the next line after Sunday
int wth_control {0}; 

    for (size_t i_month {0}; i_month < months; i_month++){
        // a month calendar 

        unsigned int total_days; // in one month  
        switch (i_month)
        {
        case 0:{
            std::cout << "--January " << year << "--"  << std::endl;
            total_days = 32;
        }
            break;
        case 1:{
            std::cout << "--February " << year << "--"  << std::endl;
            total_days = 30;        
        }
            break;
        case 2:{
            std::cout << "--March " << year << "--"  << std::endl;
            total_days = 32;
        }
            break;
        case 3:{
            std::cout << "--April " << year << "--"  << std::endl;
            total_days = 31;
        }
            break;
        case 4:{
            std::cout << "--May " << year << "--"  << std::endl;
            total_days = 32;
        }
            break;  
        case 5:{
            std::cout << "--June " << year << "--"  << std::endl;
            total_days = 31;
        }
            break; 
        case 6:{
            std::cout << "--July " << year << "--"  << std::endl;
            total_days = 32;
        }
            break; 
        case 7:{
            std::cout << "--August " << year << "--"  << std::endl;
            total_days = 31;
        }
            break;
        case 8:{
            std::cout << "--September " << year << "--"  << std::endl;
            total_days = 32;
        }
            break; 
        case 9:{
            std::cout << "--October " << year << "--"  << std::endl;
            total_days = 31;
        }
            break;
        case 10:{
            std::cout << "--November " << year << "--"  << std::endl;
            total_days = 32;
        }
            break;
        case 11:{
            std::cout << "--December " << year << "--"  << std::endl;
            total_days = 31;
        }
            break;        


        default:
            break;
        }
        
        

        // week days display
        std::cout << std::setw(wth) << "Mon" << std::setw(wth) << "Tue" << std::setw(wth) << "Wed" 
        << std::setw(wth) << "Thur" << std::setw(wth) << "Fri" << std::setw(wth) << "Sat" <<
        std::setw(wth) << "Sun" << std::endl; 
        
        bool margin = false; // to set up the margin in the first row for January

        // this is for January
        if (i_month == 0){
            switch (first_wd) { 
            case 1:{       
                for (size_t i {1}; i < total_days; i++){
                    if (margin == false){               
                    std::cout << std::setw(5) << i; 
                    wth_control +=5;
                    i++;
                    margin = true;
                    }
                    std::cout << std::setw(5) << i; 
                    wth_control +=5;
                        if (wth_control == 35){
                            std::cout << std::endl;
                            wth_control = 0;                    
                        }
                }
            }
                break;
            case 2:{       
                for (size_t i {1}; i < total_days; i++){
                    if (margin == false){               
                    std::cout << std::setw(10) << i; 
                    wth_control +=10;
                    i++;
                    margin = true;
                    }
                    std::cout << std::setw(5) << i; 
                    wth_control +=5;
                        if (wth_control == 35){
                            std::cout << std::endl;
                            wth_control = 0;                    
                        }
                }
            }
                break;
            case 3:{       
                for (size_t i {1}; i < total_days; i++){
                    if (margin == false){               
                    std::cout << std::setw(15) << i; 
                    wth_control +=15;
                    i++;
                    margin = true;
                    }
                    std::cout << std::setw(5) << i; 
                    wth_control +=5;
                        if (wth_control == 35){
                            std::cout << std::endl;
                            wth_control = 0;                    
                        }
                }
            }
                break;
            case 4:{       
                for (size_t i {1}; i < total_days; i++){
                    if (margin == false){               
                    std::cout << std::setw(20) << i; 
                    wth_control +=20;
                    i++;
                    margin = true;
                    }
                    std::cout << std::setw(5) << i; 
                    wth_control +=5;
                        if (wth_control == 35){
                            std::cout << std::endl;
                            wth_control = 0;                    
                        }
                }
            }
                break;        
            case 5:{       
                for (size_t i {1}; i < total_days; i++){
                    if (margin == false){               
                    std::cout << std::setw(25) << i; 
                    wth_control +=25;
                    i++;
                    margin = true;
                    }
                    std::cout << std::setw(5) << i; 
                    wth_control +=5;
                        if (wth_control == 35){
                            std::cout << std::endl;
                            wth_control = 0;                    
                        }
                }
            }
                break;
            case 6:{       
                for (size_t i {1}; i < total_days; i++){
                    if (margin == false){               
                    std::cout << std::setw(30) << i; 
                    wth_control +=30;
                    i++;
                    margin = true;
                    }
                    std::cout << std::setw(5) << i; 
                    wth_control +=5;
                        if (wth_control == 35){
                            std::cout << std::endl;
                            wth_control = 0;                    
                        }
                }
            }
                break;
            case 7:{       
                for (size_t i {1}; i < total_days; i++){
                    if (margin == false){               
                    std::cout << std::setw(35) << i; 
                    std::cout << std::endl;
                    i++;
                    margin = true;
                    }
                    std::cout << std::setw(5) << i; 
                    wth_control +=5;
                        if (wth_control == 35){
                            std::cout << std::endl;
                            wth_control = 0;                    
                        }
                }
            }
                break;        

            default:
            std::cout << "This is an invalid day!";
                break;
            }
            std::cout << std::endl << std::endl;
            continue;
        }
    
     // now the other months are printed out
            switch (wth_control){
            case 0:{ // if the last day of the previous month was Sunday
                for (size_t i {1}; i < total_days; i++){
                        std::cout << std::setw(5) << i; 
                        wth_control +=5;
                        if (wth_control == 35){
                            std::cout << std::endl;
                            wth_control = 0;
                        }  
                }
            }
            break;
            case 30:{ // if the last day of the previous month was Saturday
                std::cout << std::setw(35) << 1 << std::endl;
                wth_control = 0; 
                for (size_t i {2}; i < total_days; i++){
                    std::cout << std::setw(5) << i; 
                    wth_control +=5; 
                    if (wth_control == 35){
                        std::cout << std::endl;
                        wth_control = 0;
                    }  

                } 
            }     
            break;
            
            default:{ // the other days
                std::cout << std::setw(wth_control + 5) << 1;
                wth_control +=5;
                for (size_t i {2}; i < total_days; i++){
                    std::cout << std::setw(5) << i; 
                    wth_control +=5; 
                    if (wth_control == 35){
                        std::cout << std::endl;
                        wth_control = 0;
                    }  
                }
                break;
            }
            }
            std::cout << std::endl << std::endl;    
    }
return 0;
}





