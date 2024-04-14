#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Task {
    string description;
    bool completed;
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& description) {
        Task newTask;
        newTask.description = description;
        newTask.completed = false;
        tasks.push_back(newTask);
        cout << "Task added successfully." << endl;
    }
    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks in the to-do list." << endl;
        } else {
            cout << "To-Do List:" << endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". ";
                if (tasks[i].completed) {
                    cout << "[X] ";
                } else {
                    cout << "[ ] ";
                }
                cout << tasks[i].description << endl;
            }
        }
    }
    void deleteTask(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks.erase(tasks.begin() + index);
            cout << "Task deleted successfully." << endl;
        } else {
            cout << "Invalid task index." << endl;
        }
    }
};

int main() {
    ToDoList todoList;
    char choice;
    string taskDescription;
    int index;

    do {
        cout << "\nMenu:\n1. Add Task\n2. View Tasks\n3. Delete Task\n4. Quit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                cout << "Enter task description: ";
                cin.ignore(); 
                getline(cin, taskDescription);
                todoList.addTask(taskDescription);
                break;

            case '2':
                todoList.viewTasks();
                break;

            case '3':
                cout << "Enter task index to delete: ";
                cin >> index;
                todoList.deleteTask(index - 1); 
                break;

            case '4':
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != '4');

    return 0;
}
