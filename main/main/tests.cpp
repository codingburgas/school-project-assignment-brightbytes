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
            system("CLS");
            ascii();
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
    cout << setw(50) <<""<< "Algebra Test Result" << endl;
    cout << setw(50) << "" << "Your score: " << score << "/" << algebraQuestions.size() << endl;
    cout << endl;
    cout << setw(50) << "" << "Press any button to go back: ";
    int back;
    cin >> back;
    if (back == 0) {
        system("CLS");
        main();
    }


}

void physicsTest() {

    vector<Question> physicsQuestions = {

        {"What is the formula for calculating velocity?", "velocity = distance / time"},
        {"What is the SI unit of force?", "Newton"},
        {"What is the formula for calculating acceleration?", "acceleration = (final_velocity - initial_velocity) / time"},
        {"What is the acceleration due to gravity on Earth?", "9.8 m/s^2"},
        {"What is the formula for calculating work?", "work = force * distance * cos(theta)"},
        {"What is the SI unit of energy?", "Joule"},
        {"What is the formula for calculating kinetic energy?", "kinetic_energy = 0.5 * mass * velocity^2"},
        {"What is the relationship between force, mass, and acceleration according to Newton's second law?", "force = mass * acceleration"},
        {"What is the formula for calculating potential energy?", "potential_energy = mass * gravity * height"},
        {"What is the SI unit of power?", "Watt"}

    };

    int score = 0;
    srand(time(nullptr));

    random_shuffle(physicsQuestions.begin(), physicsQuestions.end());

    int questionNumber = 1;

    for (const auto& question : physicsQuestions) {
        system("CLS");
        ascii();
        cout << setw(50) << "" << "Physics Test" << endl;
        cout << setw(47) << "" << "Question " << questionNumber << " out of " << physicsQuestions.size() << ":" << endl;
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
            cout << setw(45) << "\x1b[31m" << "" << "Incorrect. The correct answer is: " << "\x1b[37m" << question.answer << endl;
        }

        this_thread::sleep_for(chrono::seconds(2));
        questionNumber++;
    }

    system("CLS");
    cout << setw(50) << "Physics Test Result" << endl;
    cout << setw(50) << "Your score: " << score << "/" << physicsQuestions.size() << endl;
    cout << endl;
    cout << endl;
    cout << setw(50) << "Press any button to go back: ";
    int back;
    cin >> back;
    if (back == 0) {
        main();
    }
}

void chemistryTest() {
    vector<Question> chemistryQuestions = {
        {"What is the atomic number of carbon?", "6"},
        {"What is the chemical symbol for gold?", "Au"},
        {"What is the pH of a neutral solution?", "7"},
        {"What is the most abundant element in the universe?", "Hydrogen"},
        {"What is the chemical formula for water?", "H2O"},
        {"What is the process of converting a liquid into vapor called?", "Evaporation"},
        {"What is the chemical symbol for iron?", "Fe"},
        {"What is the unit of measurement for the amount of substance in chemistry?", "Mole"},
        {"What is the chemical name for baking soda?", "Sodium bicarbonate"},
        {"What is the formula for sulfuric acid?", "H2SO4"}
    };

    int score = 0;
    srand(time(nullptr));

    random_shuffle(chemistryQuestions.begin(), chemistryQuestions.end());

    int questionNumber = 1;

    for (const auto& question : chemistryQuestions) {
        system("CLS");
        ascii();
        cout << setw(50) << "" << "Chemistry Test" << endl;
        cout << setw(47) << "" << "Question " << questionNumber << " out of " << chemistryQuestions.size() << ":" << endl;
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
            cout << setw(45) << "\x1b[31m" << "" << "Incorrect. The correct answer is: " << "\x1b[37m" << question.answer << endl;
        }

        this_thread::sleep_for(chrono::seconds(2));
        questionNumber++;
    }

    system("CLS");
    cout << setw(50) << "Chemistry Test Result" << endl;
    cout << setw(50) << "Your score: " << score << "/" << chemistryQuestions.size() << endl;
    cout << endl;
    cout << endl;
    cout << setw(50) << "Press any button to go back: ";
    int back;
    cin >> back;
    if (back == 0) {
        main();
    }
}



void biologyTest() {
    vector<Question> biologyQuestions = {

        {"What is the powerhouse of the cell?", "Mitochondria"},
        {"What is the process by which plants make their own food?", "Photosynthesis"},
        {"What is the largest organ in the human body?", "Skin"},
        {"What is the process of cell division called?", "Mitosis"},
        {"What is the chemical responsible for carrying oxygen in red blood cells?", "Hemoglobin"},
        {"What is the main function of the respiratory system?", "Breathing"},
        {"What is the name of the longest bone in the human body?", "Femur"},
        {"What is the chemical formula for glucose?", "C6H12O6"},
        {"What is the smallest unit of life?", "Cell"},
        {"What is the function of DNA?", "Genetic information storage"}

    };

    int score = 0;
    srand(time(nullptr));

    random_shuffle(biologyQuestions.begin(), biologyQuestions.end());

    int questionNumber = 1;

    for (const auto& question : biologyQuestions) {
        system("CLS");
        ascii();
        cout << setw(50) << "" << "Biology Test" << endl;
        cout << setw(47) << "" << "Question " << questionNumber << " out of " << biologyQuestions.size() << ":" << endl;
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
            cout << setw(45) << "\x1b[31m" << "" << "Incorrect. The correct answer is: " << "\x1b[37m" << question.answer << endl;
        }

        this_thread::sleep_for(chrono::seconds(2));
        questionNumber++;
    }

    system("CLS");
    ascii();
    cout << setw(50) << "Biology Test Result" << endl;
    cout << setw(50) << "Your score: " << score << "/" << biologyQuestions.size() << endl;
    cout << endl;
    cout << endl;
    cout << setw(50) << "Press any button to go back: ";
    int back;
    cin >> back;
    if (back == 0) {
        main();
    }
}

void englishTest() {
    vector<Question> englishQuestions = {

        {"What is a synonym for 'happy'?", "Joyful"},
        {"What is the past tense of 'run'?", "Ran"},
        {"What is a group of words that expresses a complete thought called?", "Sentence"},
        {"What is the opposite of 'brave'?", "Cowardly"},
        {"What is the plural form of 'child'?", "Children"},
        {"What is a figure of speech in which a word or phrase is applied to an object or action to which it is not literally applicable?", "Metaphor"},
        {"What is the correct punctuation at the end of a statement?", "Period"},
        {"What is a word that imitates the sound it represents?", "Onomatopoeia"},
        {"What is the study of the rules for the formation of grammatical sentences in a language?", "Syntax"},
        {"What is the literary device that uses exaggerated language to describe something?", "Hyperbole"}
    };

    int score = 0;
    srand(time(nullptr));

    random_shuffle(englishQuestions.begin(), englishQuestions.end());

    int questionNumber = 1;

    for (const auto& question : englishQuestions) {
        system("CLS");
        ascii();
        cout << setw(50) << "" << "English Test" << endl;
        cout << setw(47) << "" << "Question " << questionNumber << " out of " << englishQuestions.size() << ":" << endl;
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
            cout << setw(45) << "\x1b[31m" << "" << "Incorrect. The correct answer is: " << "\x1b[37m" << question.answer << endl;
        }

        this_thread::sleep_for(chrono::seconds(2));
        questionNumber++;
    }

    system("CLS");
    cout << setw(50) << "English Test Result" << endl;
    cout << setw(50) << "Your score: " << score << "/" << englishQuestions.size() << endl;
    cout << endl;
    cout << endl;
    cout << setw(50) << "Press any button to go back: ";
    int back;
    cin >> back;
    if (back == 0) {
        main();
    }
}



void createTest() {
    vector<pair<string, string>> questionsWithAnswers; 
    string question, answer;
    ascii();

    cout << setw(40) << " " << "Enter 5 questions and their answers for the test:\n";
    cout << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << setw(47) << " " << "Question " << i << ": ";
        cin.ignore();
        getline(cin, question);
        cout << setw(47) << " " << "Answer " << i << ": ";
        getline(cin, answer);
        questionsWithAnswers.push_back({ question, answer });
    }
    ofstream outFile("../test_questions.txt");
    if (outFile.is_open()) {
        for (const auto& qa : questionsWithAnswers) {
            outFile << qa.first << endl;
            outFile << qa.second << endl;
        }
        outFile.close();
        system("CLS");

        cout << setw(50) << " " << "\x1b[32m" << "Test questions saved\n" << "\x1b[0m";
        main();
    }
    else {
        system("CLS");
        cout << setw(50) << " " << "\x1b[32m" << "Error: Unable to save test questions.\n" << "\x1b[0m";
        main();
    }
}

void takeTestFromQuestionsFile() {
    ifstream inFile("../test_questions.txt");
    if (!inFile.is_open()) {
        cout << "Error: Unable to open test questions file.\n";
        return;
    }

    vector<Question> questions;
    string questionText, answer;

    while (getline(inFile, questionText) && getline(inFile, answer)) {
        questions.push_back({ questionText, answer });
    }

    inFile.close();

    int score = 0;
    int questionNumber = 1;
    for (const auto& question : questions) {
        system("CLS");
        ascii();
        cout << setw(50) << "" << "Your Questionnaire" << endl;
        cout << endl;
        cout << setw(45) << "" << "Question " << questionNumber << " out of " << questions.size() << ":" << endl;
        cout << endl;

        cout << setw(45) << "" << question.questionText << endl;
        cout << endl;
        cout << endl;
        string userAnswer;
        cout << setw(50) << "" << "Your Answer: ";
        cin >> userAnswer;

        if (userAnswer == question.answer) {
            score++;
            system("CLS");
            ascii();
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
    cout << setw(50) << "Your questionnaire Result" << endl;
    cout << setw(50) << "Your score: " << score << "/" << questions.size() << endl;;
    cout << setw(50) << "Press any button to go back: ";
    int back;
    cin >> back;
    if (back == 0) {
        system("CLS");
        main();
    }
}

void yourtests() {
    system("CLS");
    ascii();
    cout << setw(50) << " " << "1. Your Tests\n";
    cout << setw(50) << " " << "2. Make Your Test\n";
    cout << setw(40) << " " << "Press any button to go back to the menu\n";

    cout << endl;
    cout << setw(50) << " " << "Enter your choice: ";
    int test1;
    cin >> test1;
    if (test1 == 1) {
        system("CLS");
        takeTestFromQuestionsFile();
    }
    else if (test1 == 2) {
        system("CLS");
        createTest();
    }
}
