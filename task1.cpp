#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib> // for system("clear")

#ifdef _WIN32
#include <conio.h>
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

using namespace std;

const string RED_TEXT = "\033[1;31m";
const string GREEN_TEXT = "\033[1;32m";
const string YELLOW_TEXT = "\033[1;33m";
const string MAGENTA_TEXT = "\033[1;35m";
const string RESET_TEXT = "\033[0m";

struct Task {
    string description;
    bool completed;

    Task(const string& desc) : description(desc), completed(false) {}
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& description) {
        tasks.push_back(Task(description));
        cout << GREEN_TEXT << "Task added successfully!" << RESET_TEXT << endl;
    }

    void markTaskAsCompleted(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].completed = true;
            cout << GREEN_TEXT << "Task marked as completed!" << RESET_TEXT << endl;
        } else {
            cout << RED_TEXT << "Invalid task index!" << RESET_TEXT << endl;
        }
    }

    void displayTasks() {
        system(CLEAR);
        cout << MAGENTA_TEXT << "********************** TO-DO LIST **********************\n" << RESET_TEXT << endl;
        if (tasks.empty()) {
            cout << YELLOW_TEXT << "No tasks in the list.\n" << RESET_TEXT << endl;
        } else {
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << (tasks[i].completed ? "[X] " : "[ ] ") << tasks[i].description << endl;
            }
            cout << endl;
        }
    }
};

int main() {
    ToDoList todoList;
    char choice;

    do {
        cout << "\033[1;34m1. Add Task" << endl;
        cout << "2. Mark Task as Completed" << endl;
        cout << "3. Display Tasks" << endl;
        cout << "4. Exit" << RESET_TEXT << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                string taskDescription;
                cout << "\nEnter task description: ";
                cin.ignore();
                getline(cin, taskDescription);
                todoList.addTask(taskDescription);
                break;
            }
            case '2': {
                int taskIndex;
                cout << "\nEnter index of task to mark as completed: ";
                cin >> taskIndex;
                todoList.markTaskAsCompleted(taskIndex - 1);
                break;
            }
            case '3':
                todoList.displayTasks();
                break;
            case '4':
                cout << "\033[1;34mExiting program." << RESET_TEXT << endl;
                break;
            default:
                cout << RED_TEXT << "Invalid choice. Please try again." << RESET_TEXT << endl;
        }
        cout << "\nPress Enter to continue...";
        cin.ignore();
        cin.get();
    } while (choice != '4');

    return 0;
}
