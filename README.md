# MyProgrammingPortfolio
C++ Project Setup in Visual Studio Code

This guide provides clear instructions for setting up your environment to run C++ code using Visual Studio Code (VS Code). The steps include downloading VS Code, installing a C++ compiler, configuring your environment, and installing recommended VS Code extensions.

​
1. Download & Install Visual Studio Code

Go to the official VS Code website.

Download the installer suitable for your operating system (Windows, macOS, or Linux).

Install VS Code by following the on-screen prompts after downloading.    ​

2. Install a C++ Compiler
Windows

Download and install MinGW-w64 via the MSYS2 installer.

# Open the MSYS2 terminal and enter:
   
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain

Add MinGW bin path (e.g., C:\msys64\ucrt64\bin) to your Windows environment variables (Path).

Confirm installation by running:

g++ --version

in Command Prompt to check if the compiler is recognized.

# macOS

xcode-select --install

This command installs the Apple command line developer tools, which include the C++ compiler.

# Linux (Ubuntu/Debian)

sudo apt install g++

For other distributions, use your system’s package manager to install g++.

3. Open VS Code and Install Extensions

Open VS Code and install the following essential extensions for C++ development:

C/C++ (by Microsoft): Provides C/C++ support including IntelliSense and debugging.

Code Runner (optional, but highly recommended): Allows you to quickly run code snippets.

4. Configure VS Code for C++ (Optional)

You may create a .vscode folder in your project and add these files:

tasks.json for build tasks (compiling).

Alternatively, the Code Runner extension can handle simple script execution without further setup.
​

5. Run Your First C++ Program

Create a new file with .cpp extension (e.g., main.cpp).

Write your C++ code.

Press the Run button at the top right (play icon) or use Code Runner’s "Run Code" command to compile and execute.

​​
