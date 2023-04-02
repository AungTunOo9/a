#include "stdio.h"
#include "bank_project.h"


int main(){
    space_counter();
    loadingAllDataFromFile();
    printingAllData();
    welcome();

    current_data_toTransfer(3000);
    unsigned int total = calculate_amounts_same_days(0);

//   get_limit_amount(0);
//    printf("\nTrans limit for get limit amount fun : %d \n",trans_limit);

//    get_time();
//    printf("current edited time :%s",Ctime[0].c_time);

//    integer_to_char(1000);

    return 0;
}

