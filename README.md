# Assumption of working platform

As of now trying to build on top Windows machine.
Will try to make for other platforms. But assuming it works on any platform with slight modifications

# Home_Automation_ESP

creating home automation with the ESP32 customized HW

## How to download the repository.

Initially you should have the git installed.

Then open the gitbash where you need to download the repository.

Run:
 git config --global user.email "your@example.com"
 git config --global user.name "Your Name"

In "your@example.com" add the mail ID which was granted to access for repo,

Ex:

 git config --global user.name "Context"

git config --global user.email "loam_context_0q@icloud.com"

###### Last Step:

**git clone https://github.com/Nethajioslo/Home_Automation_ESP**

This will download the repository.

# Build System

Bazel as build system.
will update the latest version of bazel in root of the project if latest bazel version available.

# external dependencies

module.bazel will be source for extracting fetching any external dependencies if needed.

# making bazel available for the complete system

To run from any where in the system make it as environment variable.
How to do that?
Download the repository
copy the root path of the folder and add new environment variable.
example my path:
C:\Xv6\esp\Home_Automation_ESP

# MSVC compiler needed for compilation in the windows

bazel will recognize the MSVC compiler automatically and compiles code for that we need to download the MSVC compiler.
Download link for the MSVC compiler:
https://visualstudio.microsoft.com/vs/features/cplusplus/
This will Download the VisualStudioSetup.exe
From there you can download the C++ development libraries.
Later add the below path to environment variables this is where the bazel will find the MSVC compiler to compile:
"C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.43.34808\bin\Hostx86\x86"

# Test bazel is compiling the code

Now run the following command to verify your setup is successful.
bazel run //sw/example:example_binary

If you're able view the below output. Then perfect everything working.

Initializing the application 35
After Initializing the application 40

# commiting changes to repository

Make the changes to files and directories as necessary
then do the following to commit the changes

git add .
git commit -m "Your message"
git push origin dev

# Getting the latest changes to your local repository.

1. git fetch
2. git rebase
   Then you will have the latest changes from remote to your local.
