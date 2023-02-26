#include <stdio.h>
#include <string.h>


int num_words = 0;
char input_str[100 * 100];

int main()
{
    scanf("%[^\n]", input_str); 
    char words[100][100]; 
    char *token = strtok(input_str, " "); 
    
    while(token != NULL)
    {
        strcpy(words[++num_words], token);
        token = strtok(NULL, " ");
    }
    
    for(int i = 1; i < num_words; i++)
    {
        for(int j = i + 1; j <= num_words; j++)
        {
            if(strlen(words[i]) < strlen(words[j]))
            {
                char temp[100];
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
            else if(strlen(words[i]) == strlen(words[j]))
            {
                if(strcmp(words[i], words[j]) > 0)
                {
                    char temp[100];
                    strcpy(temp, words[i]);
                    strcpy(words[i], words[j]);
                    strcpy(words[j], temp);
                }
            }
        }
    }
    
    for(int i = 1; i <= num_words; i++)
    {
        printf("%s ", words[i]);
        printf("\n");
    }
    
    return 0;
}
