enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialChracter = 3, Digit = 4 };

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SamallLetter:
    {
        return char(RandomNumber(97, 122));
        break;
    }
    case enCharType::CapitalLetter:
    {
        return char(RandomNumber(65, 90));
        break;
    }
    case enCharType::SpecialChracter:
    {
        return char(RandomNumber(33, 47));
        break;
    }
    case enCharType::Digit:
    {
        return char(RandomNumber(48, 57));
        break;
    }
    }
    return'\0';
}

string GenerateWord(enCharType CharType ,short Length)
{
    string Word = "";
    for (int i = 1; i <= Length; i++)
    {
        Word = Word + GetRandomCharacter(CharType);
    }
    return Word;
}

string GenerateKey()
{
    string Key = "";
    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key+GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key+GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key+GenerateWord(enCharType::CapitalLetter, 4);
    return Key;
}

void GenerateKeys(short NumberOfKeys)
{
    for (int i = 1; i <= NumberOfKeys; i++)
    {
        cout << "Key[" << i << "]:";
        cout << GenerateKey() << endl;
    }
}

void FillArrayWithKeys(string arr[100], int& arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = GenerateKey();
}

void PrintStringArray(string arr[100], int arrLength)
{
    cout << "\nArray elements:\n\n";

    for (int i = 0; i < arrLength; i++)
    {
        cout << "Array[" << i << "]:";
        cout << arr[i] << "\n";
    }
    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL)); 

    string arr[100];
    int arrLength = 0;
    arrLength = ReadPositiveNumber("how many keys do you want to generate? \n");

    FillArrayWithKeys(arr, arrLength);

    PrintStringArray(arr, arrLength);


    return 0;
}

