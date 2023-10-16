#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main returns void
* keygen: password
* Return: always 0 (successfull)
*/
char generate_random_char(void)
{
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int index = rand() % (sizeof(charset) - 1);
return (charset[index]);
}
void generate_password(char *password, int length)
{
for (int i = 0; i < length; i++)
{
password[i] = generate_random_char();
}
password[length] = '\0';
}
int main(void)
{
srand(time(NULL));
int password_length = 10;
char password[password_length + 1];
generate_password(password, password_length);
printf("Generated Password: %s\n", password);
return (0);
}

