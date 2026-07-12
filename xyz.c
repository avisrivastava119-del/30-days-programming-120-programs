// #include <stdio.h>
// #include <stdlib.h>   // system() ke liye
// #include <string.h>   // sprintf() ke liye

// int main() {
//     char folderName[50];  // folder ka naam store karne ke liye

//     for (int i = 1; i <= 30; i++) {
//         // Folder name generate karna: sa.day_01, sa.day_02, ...
//         sprintf(folderName, "sa.day_%02d", i);

//         // Windows command: mkdir
//         char command[100];
//         sprintf(command, "mkdir %s", folderName);

//         // Command execute karna
//         system(command);

//         printf("Folder created: %s\n", folderName);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <sys/stat.h>

// int main() {
//     FILE *fp;
//     char folder[] = "sa.day_30";   // 👈 Change this to your remaining folder name
//     char filepath[100];
//     char filename[20];
//     struct stat st;

//     // Check if folder exists
//     if (stat(folder, &st) == 0 && S_ISDIR(st.st_mode)) {
//         printf("Folder '%s' exists. Creating files...\n", folder);

//         // Create files que_05.c to que_08.c
//         for (int i = 117; i <= 120; i++) {
//             sprintf(filename, "que_%02d.c", i);
//             sprintf(filepath, "%s/%s", folder, filename);

//             fp = fopen(filepath, "w");
//             if (fp == NULL) {
//                 printf("Error creating file %s\n", filepath);
//                 exit(1);
//             }

//             fprintf(fp, "// This is %s inside %s\n", filename, folder);
//             fclose(fp);
//             printf("Created: %s\n", filepath);
//         }
//     } else {
//         printf("Folder '%s' does not exist!\n", folder);
//     }

//     return 0;
// }
