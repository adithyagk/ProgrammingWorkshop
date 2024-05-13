/*
NOTES:
 * cin,cout are not keywords of c++.
 * keywords are pre-defined in c++.
 * idefentifiers: named by developers.
 * << - stream insertion operator - insert whatever is in RHS into a stream
 * >> - stream extraction opertaor - extract from stream
 * 
 * 
C++ Pre-Processors
 * A program that processes your sourcecode before the compiler see's it.
 * Pre-processor strips all comments from source file, replaces with a space.
 * After that it check for Pre-Processor directives and execute them.
 * Pre-Processor Directives:
 * - These are lines in the source code that begins with '#'
 * - Examples: #include, #if, #elif, #else, #endif
 * - When Pre-Processor see's #include directive then it recursively process that directive.
 * By the time compiler see's the source code, all comments are stripped out and all pre-processor directories have been processed and removed.
 * Pre-Processor Directives are commonly used to conditionally compile code.
 * - Example: Compiling a portion of your code for lets say if its a windows build.
 *            Check if you are on windows build and then include windows specific libraries.
 * C++ Pre-Processor does not understand c++ code.
 * It simply follows the c++ directives and gets the code compile ready.

C++ Comments
 *  '//' single line comments
 *  '/*' Multi line coments

C++ Main Function
 * C++ program can contain 100's of files but there must be exactly 1 main function.
 * They are the starting point of program execution.
 * 'main' must be in lower case.
 * When a c++ program executes the main function is called by the operating system.
 * The code under main is then executed.
 * On suceessfull code execution, '0' is returned to main.
 * main can be of two forms:
 * - without accepting parameters: main() -> execution statement (program.exe)
 * - expecting information from the Operating System: main(int argc, char * argv[]) > execution statement (program.exe arg1, arg2)
 * - argc -> This is the argument count( number of arguments we are going to pass).
 * - argv -> argument Vector ( array of strings)

C++ Namespaces
 * We have our own code, code from standard library and maybe code written by other people to integrate.
 * Resolve naming conflict: ( two devs wrote same name functions in their libraries).
 * "cout" can be from standard library or our own library, in such cases the compiler wont know which one to use.
 * User namespaces to resolve those conflicts.
 * '::' - This is a scope resolution operator
 * Example - std::cout, adi::cout
 * If we dont want to use scope resolution operator then we can use 'using namespace std'.
 * - This brings down the entire standard library, if we dont want to use all that(to protect from resolving further conflicts),
 *   we can use qualified using namespace variant:
 *   - using std::cout; using std::cin; using std::endl.
 * 
 * 
*/