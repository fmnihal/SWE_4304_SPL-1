#include <iostream>
#include <string>

using namespace std;  // Using the entire namespace for simplicity (not recommended in large projects)

// Function to authenticate and determine user type
string authenticateUser(const string& userType, string& department, string& program, int& semester) {
    // Your authentication logic goes here
    // For simplicity, let's use some hardcoded values
    if (userType == "A") {
        return "Welcome, Admission Candidate!";
    } else if (userType == "U") {
    	while (true){
    		// Prompt the undergraduate student to choose a department
        cout << "Choose department:\n";
        cout << "1. CSE\n";
        cout << "2. EEE\n";
        cout << "3. MPE\n";
        cout << "4. CEE\n";
        cout << "5. BTM\n";

        int choice;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                department = "CSE";
                while (true) {
                        // Prompt the CSE student to choose a program
                        cout << "Choose program:\n";
                        cout << "1. CSE\n";
                        cout << "2. SWE\n";

                        int programChoice;
                        cout << "Enter your choice (1-2): ";
                        cin >> programChoice;

                        switch (programChoice) {
                            case 1:
                                program = "CSE";
                                return "Welcome, CSE Student in " + department + " department!";
                            case 2:
                                program = "SWE";
                                while (true) {
                                    // Prompt the SWE student to choose a semester
                                    cout << "Choose semester (1-8): ";
                                    cin >> semester;

                                    if (semester >= 1 && semester <= 8) {
                                    // Feature execution within the switch case based on the semester
                                    switch (semester) {
                                        case 3:
                                            while (true) {
                                                cout << "Choose a feature:\n";
                                                cout << "1. Get Syllabus\n";
                                                cout << "2. Get Book List\n";
                                                cout << "3. Get Course Material\n";
                                                cout << "4. Exit\n";

                                                int featureChoice;
                                                cout << "Enter your choice (1-4): ";
                                                cin >> featureChoice;

                                                switch (featureChoice) {
                                                    case 1:
                                                        cout << "Fetching Syllabus...\n";
                                                        // Add code to implement "Get Syllabus" feature
                                                        // Course-wise switch case for Get Syllabus
                                                        while (true) {
                                                            cout << "Choose a course for Syllabus:\n";
                                                            cout << "1. SWE 4301 - Object Oriented Concepts II\n";
                                                            cout << "2. CSE 4303 - Data Structures\n";
                                                            cout << "3. CSE 4305 - Computer Architecture & Organization\n";
                                                            cout << "4. CSE 4307 - Database Management System\n";
                                                            cout << "5. CSE 4309 - Theory of Computation\n";
                                                            cout << "6. Math 4341 - Linear Algebra\n";
                                                            cout << "7. SWE 4302 - Object Oriented Concepts II Lab\n";
                                                            cout << "8. SWE 4304 - Software Project Lab I (SPL-I)\n";
                                                            cout << "9. CSE 4304 - Data Structures Lab\n";
                                                            cout << "10. CSE 4308 - Database Management System Lab\n";
                                                            cout << "11. Exit\n";

                                                            int courseChoice;
                                                            cout << "Enter your choice (1-11): ";
                                                            cin >> courseChoice;

                                                            switch (courseChoice) {
                                                                case 1:
                                                                    cout << "Fetching Syllabus for SWE 4301...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    cout << "Review of Object Oriented Concept, Multi-threading, UML Diagrams for Class, Objects and Relationships, UI programming, Synchronizations, Client Server programming, RPC, Distributed Objects, XML, Web programming : URL, Request and Response, HTML and DOM, Model –View–Controller, Container, Data Objects and Business Objects, Persistent Object, Object Serialization using XML, Web Service.\n";
                                                                    cout << "Objects and the Internet – Ajax, Object-Based Scripting Languages: JSON and Python.\n";
                                                                    cout << "Object Oriented Design Principles - Single Responsibility Principle, Open/Close Principle, Liskov Substitution Principal, Interface Segregation Principle and Dependency Inversion Principle; Introduction to Component Based Design, Design Patterns and Code Smells.\n";
                                                                    break;
                                                                // Add cases for other courses
                                                                case 2:
                                                                    cout << "Fetching Syllabus for CSE 4303...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4303
                                                                    cout << "Introduction to data structures: what & why, Notations, Concept of efficiency. Elementary Data Structures: Arrays, Records & Pointers, Examples of Random Access, Call by Reference, Variable Length Strings, Secondary Storage, and Implementation in Memory.\n";
                                                                    cout << "Lists: Concept of Linked Lists. The implementation, Sub list, Recursive lists, Variants, Orthogonal lists, Stack & Queue, Sequential & circular implementation of stack & queue, Applications of stack & queue.\n";
                                                                    cout << "Graphs: Breadth-First-Search (BFS), Depth-First-Search (DFS), connected components & topological numbering, Applications.\n";
                                                                    cout << "Trees: Creation & representation, Traversal, Copying, Printing and Arithmetic interpretations of trees.\n";
                                                                    cout << "Memory Management: Uniform size records- explicit release and garbage collection.\n";
                                                                    cout << "Diverse Size Records: Allocation, Compaction.\n";
                                                                    cout << "Searching Techniques: Concept, Searching linked lists and Binary tree search.\n";
                                                                    cout << "Hashing: Extraction, Compression, Division and Multiplication, Collision Resolution (Chaining, Probing), Double hash, Ordered hash, Rehash, Radix distribution.\n";
                                                                    cout << "Sorting: Discussion and comparison on different kinds of sorting (i.e. Insertion sort, Bubble sort, Quick sort, Selection sort, Merge sort etc.).\n";
                                                                    break;
                                                                case 3:
                                                                    cout << "Fetching Syllabus for CSE 4305...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    cout << "Components of a computer system: processors, memory, secondary storage devices and media, and other input output devices. Processor organization: registers, buses, multiplexers, decoders, ALUs, clocks, main memory and caches.\n";
                                                                    cout << "Information representation and transfer; instruction and data access methods; the control unit: hardwired and microprogrammed; memory organization, I/O systems, channels, interrupts, DMA. Von Neumann SISD organization. RISC and CISC machines.\n";
                                                                    break;
                                                                case 4:
                                                                    cout << "Fetching Syllabus for CSE 4307...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    cout << "Overview of database management systems; DBMS file structures; introduction to the relational model; relational algebra, normalization and relational design; ER modeling, object-oriented modeling, advanced features of the relational model; Database Design Language; the hierarchical model; the CODASYL model; alternative data models; physical database design; fourth-generation environment; database administration, database recovery, distributed databases and current trends in the field. Relational query languages: SQL; embedded SQL in a third-generation language (COBOL, C or C++). Transaction management; concurrency control.\n";
                                                                    break;
                                                                case 5:
                                                                    cout << "Fetching Syllabus for CSE 4309...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    cout << "Review of Discrete Mathematics - Binary relations, digraph, string, languages, proofs, inductive definitions.\n";
                                                                    cout << "Formal methods of automata language and computability, Finite automata and regular expressions, Properties of regular sets, Contextfree grammars, Push-down automata, Properties of context-free languages, Turing machines, Halting problem, Undecidability and Computability, Recursion function theory, Chomsky hierarchy, Deterministic context-free languages, Closure properties of families of languages, Computational complexity theory, Intractable problems, Applications in parsing, pattern matching and the design of efficient algorithms.\n";
                                                                    cout << "Finite state machines, Introduction to sequential circuits, basic definition of finite state model, memory elements and their excitation functions, synthesis of synchronous sequential circuits, iterative networks, definition and realization of Moore and Mealey machines.\n";
																	break;
                                                                case 6:
                                                                    cout << "Fetching Syllabus for Math 4341...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    cout << "Linear Algebra: Solving for square systems by elimination (pivots, multipliers, back substitution, invertibility of , and factorization into . Complete solution to (column space containing , rank of , nullspace of and special solutions to from row reduction).\n";
                                                                    cout << "Basis and dimension (bases for the four fundamental subspaces). Least squares solutions (closest line by understanding projections). Orthogonalization by Gram-Schmidt (factorization into ).\n";
                                                                    cout << "Properties of determinants (leading to the cofactor formula and the sum over all permutations, applications to inverse matrix calculation and volume). Eigenvalues and eigenvectors (diagonalizing , computing powers and matrix exponentials to solve difference and differential equations). Symmetric matrices and positive definite matrices (real eigenvalues and orthogonal eigenvectors, tests for , applications).\n";
                                                                    cout << "Linear transformations and change of basis (connected to the Singular Value Decomposition - orthonormal bases that diagonalize ). Linear algebra in engineering (graphs and networks, Markov matrices, Fourier matrix, Fast Fourier Transform, linear programming).\n";
																	break;
                                                                case 7:
                                                                    cout << "Fetching Syllabus for SWE 4302...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    cout << "Sessional works based on 4301 OOP.\n";
																	break;
                                                                case 8:
                                                                    cout << "Fetching Syllabus for SWE 4304...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    cout << "Each student will be assigned a single complete software project individually. The size of the projects will be medium. It will focus on the application of the different features of programming language. Student will be evaluated based on their software and problem solving effort.\n";
																	break;
                                                                case 9:
                                                                    cout << "Fetching Syllabus for CSE 4304...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    cout << "Sessional works based on 4303 DS.";
																	break;    
                                                                case 10:
                                                                    cout << "Fetching Syllabus for CSE 4308...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    cout << "Sessional works based on 4307 DBMS.\n";
																	break;
                                                                case 11:
                                                                    cout << "Exiting course selection.\n";
                                                                    break;
                                                                default:
                                                                    cout << "Invalid choice. Try again.\n";
                                                            }
                                                        }
                                                        break;
                                                    case 2:
                                                        cout << "Fetching Book List...\n";
                                                        // Add code to implement "Get Book List" feature
                                                        // Course-wise switch case for Get Book List
                                                        while (true) {
                                                            cout << "Choose a course for Book List:\n";
                                                            // List of courses similar to the Syllabus section
                                                            // (You can copy and modify the course list)
                                                            cout << "1. SWE 4301 - Object Oriented Concepts II\n";
                                                            cout << "2. CSE 4303 - Data Structures\n";
                                                            cout << "3. CSE 4305 - Computer Architecture & Organization\n";
                                                            cout << "4. CSE 4307 - Database Management System\n";
                                                            cout << "5. CSE 4309 - Theory of Computation\n";
                                                            cout << "6. Math 4341 - Linear Algebra\n";
                                                            cout << "7. SWE 4302 - Object Oriented Concepts II Lab\n";
                                                            cout << "8. SWE 4304 - Software Project Lab I (SPL-I)\n";
                                                            cout << "9. CSE 4304 - Data Structures Lab\n";
                                                            cout << "10. CSE 4308 - Database Management System Lab\n";
                                                            cout << "11. Exit\n";

                                                            int courseChoice;
                                                            cout << "Enter your choice (1-11): ";
                                                            cin >> courseChoice;

                                                            switch (courseChoice) {
                                                                case 1:
                                                                    cout << "Fetching Book List for SWE 4301...\n";
                                                                    // Add code to implement "Get Book List" feature for SWE 4301
                                                                    cout << "The Object Oriented Thought Process; Matt A. Weisfeld\n";
                                                                    cout << "99 Bottles of OOP; Sandy Metz\n";
                                                                    cout << "Agile Software Developments, Principles, Patterns & Practices; Robert Martin\n";
                                                                    cout << "Clean Code; Robert Martin\n";
                                                                    cout << "Refactoring; Martin Fowler, Kent Beck\n";
                                                                    cout << "Test Driven Development by Example; Kent Beck\n";
																	break;
                                                                // Add cases for other courses
                                                                case 2:
                                                                    cout << "Fetching Book List for CSE 4303...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    cout << "Data Structures And Algorithm Analysis In C++, 4rth Edition; Mark Allen\n";
                                                                    cout << "Data Structures Using C, 2nd Edition; Rema Thareja\n";
																	break;
                                                                case 3:
                                                                    cout << "Fetching Book List for CSE 4305...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    cout << "COA: Designing for Performance;10th Ed; William Stallings\n";
                                                                    cout << "Computer Organization & Design: The Hardware/Software Interface; 5th Ed; Hennsey, Patterson\n";
																	break;
                                                                case 4:
                                                                    cout << "Fetching Book List for CSE 4307...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    cout << "Database System Concepts, 7th Edition, Silberschatz\n";
																	break;
                                                                case 5:
                                                                    cout << "Fetching Book List for CSE 4309...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    cout << "Introduction to Automata Theory, Languages & Computation; 3rd Ed; Hopcroft\n";
                                                                    cout << "Introduction to the TOC; 2nd Ed; Sipser\n";
																	break;
                                                                case 6:
                                                                    cout << "Fetching Book List for Math 4341...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    cout << "Introduction to Linear Algebra, 5th Ed; Gilbert Strang\n";
																	break;
                                                                case 7:
                                                                    cout << "Fetching Book List for SWE 4302...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    cout << "Same as for 4301 OOP\n";
																	break;
                                                                case 8:
                                                                    cout << "Fetching Book List for SWE 4304...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    cout << "Same as for 4301 OOP\n";
																	break;
                                                                case 9:
                                                                    cout << "Fetching Book List for CSE 4304...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    cout << "Same as for 4303 DS\n";
																	break;    
                                                                case 10:
                                                                    cout << "Fetching Book List for CSE 4308...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    cout << "Same as for 4307 DBMS\n";
																	break;
																case 11:
                                                                    cout << "Exiting Course selection.\n";
                                                                    break;
                                                                default:
                                                                    cout << "Invalid choice. Try again.\n";
                                                            }
                                                        }
                                                        break;
                                                    case 3:
                                                        cout << "Fetching Course Material...\n";
                                                        // Add code to implement "Get Course Material" feature
                                                        // Course-wise switch case for Get Course Material
                                                        while (true) {
                                                            cout << "Choose a course for Course Material:\n";
                                                            // List of courses similar to the Syllabus section
                                                            // (You can copy and modify the course list)
                                                            cout << "1. SWE 4301 - Object Oriented Concepts II\n";
                                                            cout << "2. CSE 4303 - Data Structures\n";
                                                            cout << "3. CSE 4305 - Computer Architecture & Organization\n";
                                                            cout << "4. CSE 4307 - Database Management System\n";
                                                            cout << "5. CSE 4309 - Theory of Computation\n";
                                                            cout << "6. Math 4341 - Linear Algebra\n";
                                                            cout << "7. SWE 4302 - Object Oriented Concepts II Lab\n";
                                                            cout << "8. SWE 4304 - Software Project Lab I (SPL-I)\n";
                                                            cout << "9. CSE 4304 - Data Structures Lab\n";
                                                            cout << "10. CSE 4308 - Database Management System Lab\n";
                                                            cout << "11. Exit\n";

                                                            int courseChoice;
                                                            cout << "Enter your choice (1-11): ";
                                                            cin >> courseChoice;

                                                            switch (courseChoice) {
                                                                case 1:
                                                                    cout << "Fetching Course Material for SWE 4301...\n";
                                                                    // Add code to implement "Get Course Material" feature for SWE 4301
                                                                    break;
                                                                // Add cases for other courses
                                                                case 2:
                                                                    cout << "Fetching Course Material for CSE 4303...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    break;
                                                                case 3:
                                                                    cout << "Fetching Course Material for CSE 4305...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    break;
                                                                case 4:
                                                                    cout << "Fetching Course Material for CSE 4307...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    break;
                                                                case 5:
                                                                    cout << "Fetching Course Material for CSE 4309...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    break;
                                                                case 6:
                                                                    cout << "Fetching Course Material for Math 4341...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    break;
                                                                case 7:
                                                                    cout << "Fetching Course Material for SWE 4302...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    break;
                                                                case 8:
                                                                    cout << "Fetching Course Material for SWE 4304...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    break;
                                                                case 9:
                                                                    cout << "Fetching Course Material for CSE 4304...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    break;    
                                                                case 10:
                                                                    cout << "Fetching Course Material for CSE 4308...\n";
                                                                    // Add code to implement "Get Syllabus" feature for SWE 4301
                                                                    break;
																case 11:
                                                                    cout << "Exiting Course Material selection.\n";
                                                                    break;
                                                                default:
                                                                    cout << "Invalid choice. Try again.\n";
                                                            }
                                                        }
                                                        break;
                                                    case 4:
                                                        cout << "Exiting feature selection.\n";
                                                        return "Welcome, SWE Student in " + department + " department, Semester " + to_string(semester) + "!";
                                                    default:
                                                        cout << "Invalid choice. Try again.\n";
                                                }
                                            }
                                            break;
                                        // Add cases for other semesters if needed
                                    }

                                    } else{
                                    	cout << "Invalid program choice. Try again.\n";
									}
								}
								break;
							default:
                                cout << "Invalid program choice. Try again.\n";
                        }
                    }
                break;
            case 2:
                    department = "EEE";
                    return "Welcome, Undergraduate Student in " + department + " department!";
		    case 3:
		            department = "MPE";
		            return "Welcome, Undergraduate Student in " + department + " department!";
		    case 4:
		            department = "CEE";
		            return "Welcome, Undergraduate Student in " + department + " department!";
		    case 5:
		            department = "BTM";
		            return "Welcome, Undergraduate Student in " + department + " department!";
		    default:
		            cout << "Invalid department choice. Try again.\n";
            }
        }
    } else {
        return "Invalid user type. Access denied.";
    }
}

int main() {
    string userType, department, program;
    int semester;
    bool continueLoop = true;

    while (continueLoop) {
        // Get user input for user type (this can be obtained from other parts of your program or system)
        cout << "Enter user type\nA for AdmissionCandidate \nU for UndergradStudent\n";
        cin >> userType;

        // Authenticate user type and display the result
        string result = authenticateUser(userType, department, program, semester);
        cout << result << endl;

        // Check if the result contains "Try again" and ask the user to try again
        if (result.find("Try again") == string::npos) {
            continueLoop = false;  // Set the flag to exit the loop if authentication is successful
        } else {
            cout << "Do you want to try again? (Y/N): ";
            char tryAgain;
            cin >> tryAgain;

            if (tryAgain != 'Y' && tryAgain != 'y') {
                continueLoop = false;  // Set the flag to exit the loop if the user chooses not to try again
            }
        }
    }

    return 0;
}