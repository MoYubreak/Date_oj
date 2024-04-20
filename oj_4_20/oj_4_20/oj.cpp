////https://www.nowcoder.com/practice/eebb2983b7bf40408a1360efb33f9e5d?tpId=40&&tqId=31013&rp=1&ru=/activity/oj&qru=/ta/kaoyan/question-ranking
//#include <iostream>
//using namespace std;
//
//int main() {
//    int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//
//    int year, month, day, cout, n;
//    cin >> n;
//    while (n--)
//    {
//        cin >> year >> month >> day >> cout;
//
//        day += cout;
//        while (day > arr[month])
//        {
//            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//            {
//                arr[2] = 29;
//            }
//            day -= arr[month];
//            month++;
//            if (month == 13)
//            {
//                month = 1;
//                year++;
//            }
//
//            if (arr[2] == 29)
//            {
//                arr[2] = 28;
//            }
//        }
//
//
//        printf("%d-%02d-%02d\n", year, month, day);
//    }
//    return 0;
//}


//https://www.nowcoder.com/practice/b1f7a77416194fd3abd63737cdfcf82b?tpId=69&&tqId=29669&rp=1&ru=/activity/oj&qru=/ta/hust-kaoyan/question-ranking
//#include <iostream>
//using namespace std;
//
//int main() {
//    int year, day;
//    int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    while (cin >> year >> day)
//    {
//        int month = 1;
//        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//        {
//            arr[2]++;
//        }
//        for (int i = 1; i < 13; i++)
//        {
//            if (day > arr[month])
//            {
//                day -= arr[month];
//                month++;
//            }
//            else {
//                break;
//            }
//        }
//        printf("%d-%02d-%02d\n", year, month, day);
//        if (arr[2] == 29)
//        {
//            arr[2] = 28;
//        }
//    }
//    return 0;
//}