// main.c
   #include <stdio.h>
   #include <stdlib.h>
   #include <string.h>

   void parse_csv_line(char *line) {
       char *token = strtok(line, ",");
       int column = 0;
       
       while (token != NULL) {
           printf("Column %d: %s\n", column++, token);
           token = strtok(NULL, ",");
       }
       printf("\n");
   }

   void read_csv_file(const char *filename) {
       FILE *file = fopen(filename, "r");
       if (file == NULL) {
           printf("Error: Could not open file %s\n", filename);
           return;
       }
       
       char line[1024];
       while (fgets(line, sizeof(line), file)) {
           printf("%s", line);
       }
       
       fclose(file);
   }

   int main(int argc, char *argv[]) {
       if (argc != 2) {
           printf("Usage: %s <csv_file>\n", argv[0]);
           return 1;
       }
       
       read_csv_file(argv[1]);
       return 0;
   }
