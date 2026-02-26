// #include <stdio.h>
// void fun (int arr[],int n)
// {
//      for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             for (int j = i; j < n; j++)
//             {
//                  arr[i] = arr[j + 1];
//                  arr[j+1]=0;
//                  break;
//             }
//         }
//     }
//      for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     fun(arr,n);

//     // int tmp = 0;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     if (arr[i] == 0)
//     //     {
//     //         for (int j = i; j < n; j++)
//     //         {
//     //              arr[j] = arr[j + 1];
//     //              arr[j+1]=0;
//     //         }
//     //     }
//     // }
//     // for (int i = 0; i < n; i++)
//     // {
//     //     printf("%d ", arr[i]);
//     // }
//     return 0;
// }