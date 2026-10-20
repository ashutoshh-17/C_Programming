# C Programming

Programs and assignments for the Logic Building Batch in C.

## Folder layout

```text
C_Programming/
└── Assignments/
    ├── Assignment_1/
    ├── Assignment_2/
    └── Assignment_3/
```

Each assignment folder contains its standalone C program files.

## Example program

`Assignments/Assignment_1/program1_5.c` prints five asterisks (`*`). It calls
`Accept` with the value `5`, and `Accept` prints one asterisk for each count.

## Compile and run

Compile a program from its assignment folder with GCC:

```powershell
cd .\Assignments\Assignment_1
gcc program1_5.c -o Myexe.exe
```

Run the executable in PowerShell:

```powershell
.\Myexe.exe
```

The output is:

```text
*****
```

Replace `program1_5.c` with another source filename to build a different
program.
