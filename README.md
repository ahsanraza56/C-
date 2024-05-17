# To-Do Application in C++

This is a simple To-Do application implemented in C++. It allows users to manage their tasks efficiently.

## Features

- Add tasks: Users can add tasks with a title and description.
- Remove tasks: Users can remove tasks based on their titles.
- View tasks: Users can view all the tasks in the list.
- Mark tasks as completed: Users can mark tasks as completed.

## Getting Started

1. Clone the repository:
   ```bash
   git clone https://github.com/@ahsanraza56/C++.git
   ```

2. Navigate to the project directory:
   ```bash
   cd todo-cpp
   ```

3. Compile the source code:
   ```bash
   g++ -o todo main.cpp
   ```

4. Run the application:
   ```bash
   ./todo
   ```

## Usage

- **Add a task**: To add a task, run the application and follow the prompts to enter the title and description of the task.
- **Remove a task**: To remove a task, run the application and select the option to remove a task, then enter the title of the task to be removed.
- **View all tasks**: To view all tasks, run the application and select the option to view all tasks.
- **Mark a task as completed**: To mark a task as completed, run the application and select the option to mark a task as completed, then enter the title of the task to be marked as completed.

## Example

```plaintext
$ ./todo

1. Add a task
2. Remove a task
3. View all tasks
4. Mark a task as completed
5. Exit

Choose an option: 1
Enter task title: Finish coding assignment
Enter task description: Complete the implementation of the sorting algorithm.

Task added successfully!

$ ./todo

1. Add a task
2. Remove a task
3. View all tasks
4. Mark a task as completed
5. Exit

Choose an option: 3

Tasks:
1. [ ] Finish coding assignment - Complete the implementation of the sorting algorithm.

$ ./todo

1. Add a task
2. Remove a task
3. View all tasks
4. Mark a task as completed
5. Exit

Choose an option: 4
Enter the title of the task to mark as completed: Finish coding assignment

Task marked as completed successfully!

$ ./todo

1. Add a task
2. Remove a task
3. View all tasks
4. Mark a task as completed
5. Exit

Choose an option: 3

Tasks:
1. [x] Finish coding assignment - Complete the implementation of the sorting algorithm.
```

## Contributing

Contributions are welcome! If you'd like to contribute to this project, please fork the repository and submit a pull request with your changes.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
