// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
//     int r, c;
//     scanf("%d %d", &r, &c);
//     int arr[r][c];
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
   
//     bool is_scaler = true;
//     if (r == c)
//     {
//         for (int i = 0; i < r; i++)
//         {
//             for (int j = 0; j < c; j++) 

//             {
//                 if (i != j)
//                 {
//                     if (arr[i][j] != 0)
//                     {
//                         is_scaler = false;
//                         printf("Not scaler Matrix\n");
//                     }
//                 }
//             }
//         }
//         if (is_scaler == true)
//         {
//             printf("This is scaler\n");
//         }
//     }
//     else
//     {
//         printf("Not scaler Matrix\n");
//     }
//     return 0;
// }