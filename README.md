# st-minishell (2021/02/01)

## TASK
  Write a shell.

- Not interpret unclosed quotes or unspecified special characters like \ or;.
- Not use more than one global variable, think about it and be ready to explain why you do it.
- Have a working History.
- Search and launch the right executable (based on the PATH variable or by using relative or absolute path)

It must implement the builtins:
- echo with option -n
- cd with only a relative or absolute path
- pwd with no options
- export with no options
- unset with no options
- env with no options or arguments
- exit with no options
- ’ inhibit all interpretation of a sequence of characters.
- " inhibit all interpretation of a sequence of characters except for $.

Redirections:
- '<' should redirect input.
- '>' should redirect output.
- Pipes | The output of each command in the pipeline is connected via a pipe to the input of the next command.
- Environment variables ($ followed by characters) should expand to their values.
- $? should expands to the exit status of the most recently executed foreground pipeline.
- ctrl-C ctrl-D ctrl-\ should work like in bash.

When interactive:
- ctrl-C print a new prompt on a newline.
- ctrl-D exit the shell.
- ctrl-\ do nothing.
Anything not asked is not required.
For every point, if you have any doubt take bash as a reference.

## MAKE
make

./minishell

'exit' or control + D

make clean

make fclean

## Additional Information
https://www.gnu.org/savannah-checkouts/gnu/bash/manual/
