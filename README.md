Student Management System
A Windows Forms application built with C++/CLI that provides comprehensive student data management with secure user authentication and database integration.
Features
User Authentication

User Registration: New users can create accounts with name, email, phone, address, and password
Secure Login: Authentication system with encrypted password validation
Form Navigation: Seamless switching between login and registration forms

Student Management

Data Entry: Add student information including enrollment ID, names, father's name, DOB, semester, and contact details
Data Validation: Input validation to ensure data integrity
View Records: Display all student records in formatted table view
Real-time Operations: Instant database updates and retrieval

Security Features

Parameterized SQL queries preventing SQL injection attacks
Password masking in input fields
Comprehensive error handling and user feedback

Technology Stack

Frontend: Windows Forms (C++/CLI)
Backend: SQL Server Database
Platform: Microsoft Visual Studio 2022
Framework: .NET Framework 4.7.2

Database Schema
Users Table
sqlCREATE TABLE users (
    id INT PRIMARY KEY IDENTITY(1,1),
    name NVARCHAR(100),
    email NVARCHAR(100),
    phone NVARCHAR(20),
    address NVARCHAR(200),
    password NVARCHAR(100)
);
Student_Info Table
sqlCREATE TABLE student_info (
    enrollment_id NVARCHAR(50) PRIMARY KEY,
    first_name NVARCHAR(50),
    last_name NVARCHAR(50),
    father_name NVARCHAR(50),
    dob NVARCHAR(20),
    semester NVARCHAR(10),
    phone NVARCHAR(20),
    alt_phone NVARCHAR(20)
);
Prerequisites

Microsoft Visual Studio 2017 or later
SQL Server (Express or full version)
Windows 10 or later
.NET Framework 4.7.2

Installation

Clone the repository
bashgit clone <repository-url>
cd SQLProject

Database Setup

Open SQL Server Management Studio
Create a new database named myproject
Execute the database schema scripts provided above
Update connection string in code if needed:
cppString^ connString = "Data Source=DIVYA;Initial Catalog=myproject;Integrated Security=True;Encrypt=False";



Build and Run

Open SQLProject.sln in Visual Studio
Build the solution (Ctrl+Shift+B)
Run the application (F5)



Usage

First Time Setup

Application opens with registration form
Create a new user account
Login with created credentials


Student Management

Fill in student details in the main dashboard
Click "Enter data" to save student information
Click "View data" to display all student records


Navigation

Use "Register" link to create new accounts
Use "Login" link to access existing accounts
Cancel buttons to close forms



File Structure
SQLProject/
├── SQLProject.sln              # Visual Studio solution file
├── SQLProject/
│   ├── LoginForm.h/.cpp        # User authentication form
│   ├── RegisterForm.h/.cpp     # User registration form
│   ├── Mainform.h/.cpp         # Main dashboard
│   ├── User.h                  # User data model
│   ├── SQLProject.vcxproj      # Project configuration
│   └── *.resx                  # Resource files
├── .gitignore                  # Git ignore rules
└── README.md                   # Project documentation
Configuration
Database Connection
Update the connection string in all forms if using different SQL Server instance:
cppString^ connString = "Data Source=YourServer;Initial Catalog=myproject;Integrated Security=True;Encrypt=False";
Security Settings

Passwords are stored as plain text (consider encryption for production)
Windows Authentication is used for database connection

Contributing

Fork the repository
Create a feature branch (git checkout -b feature/AmazingFeature)
Commit your changes (git commit -m 'Add some AmazingFeature')
Push to the branch (git push origin feature/AmazingFeature)
Open a Pull Request

Future Enhancements

 Password encryption/hashing
 Student record editing and deletion
 Search and filter functionality
 Data export capabilities
 User role management
 Backup and restore features
