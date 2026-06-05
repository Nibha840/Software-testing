#include <stdio.h>
// // Input: 101 50000.0 5
// // Output: Final Salary: 52500.00

// int main(){
//     int e_id;
//     float b_salary, f_salary;
//     char bns_char;
//     int bns_prcnt;

//     scanf("%d %f %c", &e_id, &b_salary, &bns_char);

//     bns_prcnt = bns_char - '0';
//     f_salary = b_salary + (b_salary * bns_prcnt / 100);
//     printf("Final Salary: %.2f\n", f_salary);
//     return 0;
// }

int main() {
     char ch;
     scanf("%c", &ch);

     if(ch >= 65 && ch <= 90) {
        printf("valid password, size: %lu byte", sizeof(ch));
     }else{
            printf("invalid password, size: %lu byte", sizeof(ch));
     }
     return 0;
}
//RUN COMMAND:
// gcc assign2a.c -o assign2a
// ./assign2a
