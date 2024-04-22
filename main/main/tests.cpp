#include "Tests.h"
#include "MainMenu.h"


struct Question {
    string questionText;
    string answer;
};


void algebraTest() {
    vector<Question> algebraQuestions = {
        {"What is 2 + 2?", "4"},
        {"Solve for x: 3x + 5 = 17", "4"},
        {"What is the square root of 64?", "8"},
        {"If a = 5 and b = 3, what is a + b?", "8"},
        {"What is 3 * 5?", "15"},
        {"What is 10 - 7?", "3"},
        {"What is the sum of angles in a triangle?", "180"},
        {"What is the next number in the sequence: 1, 3, 5, 7, ...?", "9"},
        {"What is 12 / 4?", "3"},
        {"If x = 2 and y = 3, what is x * y?", "6"}
    };

    int score = 0;
    srand(time(nullptr));

    random_shuffle(algebraQuestions.begin(), algebraQuestions.end());

    int questionNumber = 1;

    for (const auto& question : algebraQuestions) {
        system("CLS");
        ascii();
        cout << setw(50) << "" << "Algebra Test" << endl;
        cout << setw(47) << "" << "Question " << questionNumber << " out of " << algebraQuestions.size() << ":" << endl;
        cout << endl;


        cout << setw(44) << "" << question.questionText << endl;
        cout << endl;
        cout << endl;
        string userAnswer;
        cout << setw(50) << "" << "Your Answer: ";
        cin >> userAnswer;

        if (userAnswer == question.answer) {
            score++;
            cout << setw(50) << "\x1b[32m" << "" << "Correct!" << "\x1b[37m" << endl;
        }
        else {
            system("CLS");
            ascii();
            cout << setw(45) << "\x1b[31m" << "" << "Incorrect. The correct answer is: " << "\x1b[37m" << question.answer << endl;
        }

        this_thread::sleep_for(chrono::seconds(2));
        questionNumber++;
    }

    system("CLS");
    ascii();
    cout << setw(50) << "Algebra Test Result" << endl;
    cout << setw(50) << "Your score: " << score << "/" << algebraQuestions.size() << endl;
    cout << endl;
    cout << endl;
    cout << setw(50) << "Press any button to go back: ";
    int back;
    cin >> back;
    if (back == 0) {
        main();
    }


}