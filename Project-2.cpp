#include <iostream>
#include <string>
#include<cstdlib>
#include<ctime>
using namespace std;

enum enQuestionsLevel { Easy= 1,Med = 2, Hard = 3 ,Mix=4 };
enum enOperationType {Add = 1,Sub = 2,Mul = 3,Div=4,MixOp=5};

struct stQuestion
{
    int Number1 = 0;
    int Number2 = 0;
    enOperationType OperationType;
    enQuestionsLevel QuestionsLevel;
    int CorrectAnswer = 0;
    int PlayerAnswer = 0;
    bool AnswerResult = false;
};
struct stQuizz
{
    stQuestion QuestionList[100];
    short NumberOfQuestions;
    enQuestionsLevel QuestionsLevel;
    enOperationType OpType;
    short NumberOfRightAnswers=0;
    short NumberOfwrongAnswers=0;
    bool IsPass = false;
};

int RandomNumber(int From, int To)
{
   return rand() % (To - From + 1) + From;
   
}
enOperationType GetRandomOperationType()
{
    int Op = RandomNumber(1, 4);
    return(enOperationType)Op;
}
int SimpleCalculator(int Number1, int Number2, enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return Number1 + Number2;
    case enOperationType::Sub:
        return Number1 - Number2;
    case enOperationType::Mul:
        return Number1 * Number2;
    case enOperationType::Div:
        return Number1 / Number2;
    default:
        return Number1 + Number2;
    }
}
string GetOpTypeSymbol(enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return"+";
    case enOperationType::Sub:
        return"-";
    case enOperationType::Mul:
        return"*";
    case enOperationType::Div:
        return"/";
    default:
        return"Mix";
    }
}
void SetScreenColor(bool Right)
{
    if (Right)
        system("color 2F");
    else
    {
        system("color 4F");
        cout << "\a";

    }
}
short ReadHowManyQuestions()
{
    short NumberOfQuestions;
    do
    {
        cout << "How Many Questions do you want to answer ? " << endl;
        cin >> NumberOfQuestions;
    } while (NumberOfQuestions < 1 || NumberOfQuestions>10);
    return NumberOfQuestions;
}

enOperationType ReadOpType()
{
    short OpType;
    do
    {
        cout << "Enter Operation Type: [1]Add,[2]Sub,[3]Mul,[4]Div,[5]Mix?\n";
        cin >> OpType;

    } while (OpType < 1 || OpType>5);

    return(enOperationType)OpType;

}


stQuestion GenerateQuestion(enQuestionsLevel QuestionsLevel, enOperationType OpType)
{
    stQuestion Question;

    if (QuestionsLevel == enQuestionsLevel::Mix)
    {
        QuestionsLevel = (enQuestionsLevel)RandomNumber(1, 3);
    }
    if (OpType == enOperationType::MixOp)
    {
        OpType = GetRandomOperationType();
    }
    Question.OperationType = OpType;

    switch (QuestionsLevel)
    {
    case enQuestionsLevel::Easy:
        Question.Number1 = RandomNumber(1, 10);
        Question.Number2 = RandomNumber(1, 10);

        Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
        Question.QuestionsLevel = QuestionsLevel;
        return Question;

    case enQuestionsLevel::Med:
        Question.Number1 = RandomNumber(10, 50);
        Question.Number2 = RandomNumber(10, 50);

        Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
        Question.QuestionsLevel = QuestionsLevel;
        return Question;

    case enQuestionsLevel::Hard:
        Question.Number1 = RandomNumber(50, 100);
        Question.Number2 = RandomNumber(50, 100);

        Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
        Question.QuestionsLevel = QuestionsLevel;
        return Question;
    }


    return Question;
}
string GetQuestionLevelText(enQuestionsLevel QuestionLevel)
{
    string arrQuestionLevelText[4] = { "Easy","Med","Hard","Mix" };
    return arrQuestionLevelText[ QuestionLevel - 1];
}
void GenerateQuizzQuestions(stQuizz&Quizz)
{
    for (short Question = 0; Question < Quizz.NumberOfQuestions; Question++)
    {
        Quizz.QuestionList[Question] = GenerateQuestion(Quizz.QuestionsLevel, Quizz.OpType);
    }
}

void  printTheQuestion(stQuizz&Quizz,short QuestionNumber)
{
    cout << "\n";
    cout << "Question[" << QuestionNumber + 1 << "/" << Quizz.NumberOfQuestions << "]\n\n";
    cout << Quizz.QuestionList[QuestionNumber].Number1 << endl;
    cout << Quizz.QuestionList[QuestionNumber].Number2 << " ";
    cout << GetOpTypeSymbol(Quizz.QuestionList[QuestionNumber].OperationType);
    cout << "\n_______" << endl;

}
int ReadQuestionAnswer()
{
    int Answer = 0;
    cin >> Answer;
    return Answer;
}
void CorrectTheQuestionAnswer(stQuizz& Quizz, short QuestionNumber)
{
    if (Quizz.QuestionList[QuestionNumber].PlayerAnswer!=Quizz.QuestionList[QuestionNumber].CorrectAnswer)
    {
        Quizz.QuestionList[QuestionNumber].AnswerResult = false;
        Quizz.NumberOfwrongAnswers++;

        cout << "Worng Answer :-(\n";
        cout << "The right answer is : ";
        cout << Quizz.QuestionList[QuestionNumber].CorrectAnswer;
        cout << "\n";
    }
    else
    {
        Quizz.QuestionList[QuestionNumber].AnswerResult = true;
        Quizz.NumberOfRightAnswers++;

        cout << "Right Answer :-) \n";
    }
    cout << endl;

   SetScreenColor( Quizz.QuestionList[QuestionNumber].AnswerResult);

}
void AskAndCorrectQuestionListAnswers(stQuizz&Quizz)
{
    for (short QuestionNumber  = 0;QuestionNumber  < Quizz.NumberOfQuestions;QuestionNumber ++)
    {
        printTheQuestion(Quizz, QuestionNumber);
        Quizz.QuestionList[QuestionNumber].PlayerAnswer = ReadQuestionAnswer();
        CorrectTheQuestionAnswer(Quizz, QuestionNumber);
    }
    Quizz.IsPass = (Quizz.NumberOfRightAnswers >= Quizz.NumberOfwrongAnswers);
}



string GetFinalResultsText(bool pass)
{
    if (pass)
        return "PASS :-)";
    else
        return"Fail :-(";
}
void PrintQuizzResults(stQuizz Quizz)
{
    cout << "\n";
    cout << "____________________________\n\n";
    cout << "Final Resutls is " << GetFinalResultsText(Quizz.IsPass);
    cout << "____________________________\n\n";

    cout << "Number of Questions  :" << Quizz.NumberOfQuestions << endl;
    cout << "Questions Level      :" << GetQuestionLevelText(Quizz.QuestionsLevel) << endl;
    cout << "OpType               :" << GetOpTypeSymbol(Quizz.OpType) << endl;
    cout << "Number of Right Answers:" << Quizz.NumberOfRightAnswers << endl;
    cout << "Number of Wrong Answers :" << Quizz.NumberOfwrongAnswers << endl;
    cout << "____________________________\n\n";
}

enQuestionsLevel ReadQuestionsLevel()
{
    short QuestionLevel = 0;
    do
    {
        cout << "Enter Questions Level: [1]Easy,[2]Med,[3] Hard,[4]Mix?\n";
        cin >> QuestionLevel;

    } while (QuestionLevel < 1 || QuestionLevel>4);

    return(enQuestionsLevel)QuestionLevel;
}

void PlayMathGame()
{
    stQuizz Quizz;

    Quizz.NumberOfQuestions = ReadHowManyQuestions();
    Quizz.QuestionsLevel = ReadQuestionsLevel();
    Quizz.OpType = ReadOpType();

    GenerateQuizzQuestions(Quizz);
    AskAndCorrectQuestionListAnswers(Quizz);
    PrintQuizzResults(Quizz);


}
void ResetScreen() 
{
    system("cls");
    system("color 0F");
}
short ReadHowManyRounds()
{
    short GameRounds = 1;
    do
    {
        cout << "How Many Rounds1 to 10 ?\n";
        cin >> GameRounds;

    } while (GameRounds<1||GameRounds>10);

    return GameRounds;
}
void StartGame()
{
    char PlayAgain = 'Y';
    do
    {
        ResetScreen(); // 1. تنظيف
        PlayMathGame();
        cout << endl << "Do you want to play again? Y/N";
        cin >> PlayAgain;

    } while (PlayAgain == 'Y' || PlayAgain == 'y');
}
        

    
int main()
{
    
    srand((unsigned)time(NULL));
    StartGame();


    return 0;
}
