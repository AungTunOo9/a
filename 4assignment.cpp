#include <stdio.h>
#include <string.h>

int main()
{
   FILE *fp;
   char word[1000];
   char ch;
   char *filename = "data.txt";
   char *search = "winhtut";
   int count = 0;
   int pos[1000];
   int pointer = 0;

   fp = fopen(filename, "r");

   do
   {
      ch = fscanf(fp, "%s", word);
      if(strcmp(word, search) == 0)
        {
         pos[count] = pointer;
         count++;
        }
      pointer++;

   } while (ch != EOF);

    if(count == 0)
        printf("%s not found in %s\n", search,filename);
    else
        {
        printf("%s is found at --> ", search);
        int i;
        for(i = 0; i<count; i++)
            {
                printf("%d ", pos[i]);
            }
        printf("positions.\n");
        printf("It include %d%s",count," times.\n");
        }

   fclose(fp);

   return 0;
}
