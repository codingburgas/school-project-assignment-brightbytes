    #include <iostream>
    #include <vector>
    #include <algorithm>
    #include <cstdlib>
    #include <ctime>
    #include <iomanip>
    #include <chrono>
    #include <thread>
    using namespace std;

    // Define a structure to represent a question
    struct Question {
        string questionText;
        string answer;
    };

    // Function to display and handle the Algebra test
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
            cout << setw(50) << "Algebra Test" << endl;
            cout << "Question " << questionNumber << " out of " << algebraQuestions.size() << ":" << endl;
            cout << "Question: " << question.questionText << endl;
            string userAnswer;
            cout << "Your Answer: ";
            cin >> userAnswer;

            if (userAnswer == question.answer) {
                score++;
                cout << "Correct!" << endl;
            }
            else {
                cout << "Incorrect. The correct answer is: " << question.answer << endl;
            }

            this_thread::sleep_for(chrono::seconds(1));
            questionNumber++;
        }

        system("CLS");
        cout << setw(50) << "Algebra Test Result" << endl;
        cout << "Your score: " << score << "/" << algebraQuestions.size() << endl;
    }