#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[50];
    int age;
    char email[50];
    char pass[50];
    for (int i = 0; i < 1; i++){
        printf("Enter name: ");
        scanf("%s",&name);
        printf("Enter age: ");
        scanf("%d",&age);
        printf("Enter email: ");
        scanf("%s",&email);
        printf("Enter password: ");
        scanf("%s",&pass);

    }
    char checkemail[50];
    char checkpass[50];
    for (int i = 0; i < 1; i++){
        printf("Enter email to login: ");
        scanf("%s",&checkemail);
        printf("Enter password: ");
        scanf("%s",&checkpass);
    }
    int cmpemail = strcmp(email , checkemail);
    int cmppass = strcmp(pass,checkpass);
    if (cmpemail == 0 && cmppass == 0){
        printf("Login Successful");
    }else if(cmpemail != 0){
        printf("Email wrong");
    }
    else {
        printf("Password wrong");
    }
    return 0;
}
