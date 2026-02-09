#include <iostream>
#include<string>
#include<cmath>
using namespace std;

struct strTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message)
{
    int  Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;

}
strTaskDuration ReadTaskDuration()
{
    strTaskDuration TaskDuration;
    TaskDuration.NumberOfDays = ReadPositiveNumber("please Enter Number of Days ? "); 
    TaskDuration.NumberOfHours = ReadPositiveNumber("please Enter Number of Hours ? "); 
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("please Enter Number of Minutes ? "); 
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("please Enter Number of Seconds ? "); 
    return TaskDuration;
}
int TaskDurationTnSeconds(strTaskDuration TaskDuration)
{
    int DurationInSeconds = 0;

    DurationInSeconds += TaskDuration.NumberOfDays * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
    DurationInSeconds += TaskDuration.NumberOfSeconds;

    return DurationInSeconds;

}

int main()
{
    cout << "\n Task Duration In Seconds:" << TaskDurationTnSeconds(ReadTaskDuration()) << endl;

    cout << endl;

    return 0;
};
