### Project: 0x1C-makefile

This project focuses on learning and implementing Makefiles, covering various aspects such as rules, variables, and compiler flags.

#### Learning Objectives
- Understand the concepts of make and Makefiles.
- Learn when, why, and how to use Makefiles.
- Explore rules, both explicit and implicit, and how to set/use them.
- Utilize variables effectively in Makefiles.

### Tasks

#### Task 0: [0-Makefile](./0x1C-makefiles/0-Makefile)
- Create the first Makefile.
- Executable: school
- Rule: all (builds the executable)
- Variables: none

#### Task 1: [1-Makefile](./0x1C-makefiles/1-Makefile)
- Similar to Task 0 with added variables.
- Variables: CC (compiler), SRC (.c files)

#### Task 2: [2-Makefile](./0x1C-makefiles/2-Makefile)
- Create a more useful Makefile.
- Additional variables: OBJ (.o files), NAME (executable name)
- The all rule should recompile only updated source files.

#### Task 3: [3-Makefile](./0x1C-makefiles/3-Makefile)
- Introduce cleaning rules.
- Rules: all, clean, oclean, fclean, re.
- Additional variables: RM (file deletion program)

#### Task 4: [4-Makefile](./0x1C-makefiles/4-Makefile)
- Develop a complete Makefile with compiler flags.
- Additional variable: CFLAGS (compiler flags: -Wall -Werror -Wextra -pedantic)

#### Task 5: [5-island_perimeter.py](./0x1C-makefiles/5-island_perimeter.py)
- Implement a Python function to calculate the perimeter of an island.
- Constraints: No module imports, use the shebang `#!/usr/bin/python3`.
- Follow whiteboard first, and document module and function.

#### Task 6: [100-Makefile](./0x1C-makefiles/100-Makefile) - Advanced
- An advanced Makefile with specific constraints.
- Enhanced rules: all, clean, oclean, fclean, re.
- Specific usage of variables: CC, SRC, OBJ, NAME, RM, CFLAGS.
- String usage limitations, clean-up restrictions, and header file checks.

For detailed code and implementation, refer to the respective files in the [alx-low_level_programming](https://github.com/username/alx-low_level_programming) repository under the 0x1C-makefiles directory.
