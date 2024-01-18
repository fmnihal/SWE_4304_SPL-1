#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to view the list of universities
void viewUniversity() {
    ifstream universityFile("university_names.txt");
    
    if (universityFile.is_open()) {
        string universityName;
        cout << "List of Universities for Admission candidate:\n";
        while (getline(universityFile, universityName)) {
            // Output universities for Admission Candidate
            if (!universityName.empty()) {
                cout << universityName << endl;
            }
        }
        universityFile.close();
    } else {
        cerr << "Unable to open university file." << endl;
    }
}

// Function to categorize universities based on their types
void viewCategorizedUniversities() {
    // Choose a type of universities to display
    cout << "\nChoose a type of universities to display:\n";
    cout << "1. General Universities (general_universities.txt)\n";
    cout << "2. Agricultural Universities (agricultural_universities.txt)\n";
    cout << "3. Engineering Universities (engineering_universities.txt)\n";
    cout << "4. Science and Technology Universities (science_tech_universities.txt)\n";
    cout << "5. Medical Universities (medical_universities.txt)\n";
    cout << "6. Private Universities (private_universities.txt)\n";

    int choice;
    cout << "\nEnter your choice (1-6): ";
    cin >> choice;

    ifstream universityFile;

    switch (choice) {
        case 1:
            universityFile.open("general_universities.txt");
            break;
        case 2:
            universityFile.open("agricultural_universities.txt");
            break;
        case 3:
            universityFile.open("engineering_universities.txt");
            break;
        case 4:
            universityFile.open("science_tech_universities.txt");
            break;
        case 5:
            universityFile.open("medical_universities.txt");
            break;
        case 6:
            universityFile.open("private_universities.txt");
            break;
        default:
            cout << "Invalid choice.\n";
            return;
    }

    if (universityFile.is_open()) {
        string universityName;
        cout << "\n";
        while (getline(universityFile, universityName)) {
            // Output universities based on the specified type
            if (!universityName.empty()) {
                cout << universityName << endl;
            }
        }

        universityFile.close();
    } else {
        cerr << "Unable to open university file." << endl;
    }
}

// Function to display study abroad opportunities based on regions
void seeHigherStudyOpportunity() {
    cout << "Choose a region to see study abroad opportunities:\n";
    cout << "1. North America\n";
    cout << "2. Europe\n";
    cout << "3. Asia\n";
    cout << "4. Australia\n";

    int regionChoice;
    cout << "Enter your choice (1-4): ";
    cin >> regionChoice;

    switch (regionChoice) {
        case 1:
            cout << "\nStudy Abroad Opportunities in North America:\n";
            cout << "United States: Stanford University, Massachusetts Institute of Technology, Carnegie Mellon University, University of California, Berkeley, Princeton University, University of Washington\n";
			cout << "Canada: National University of Singapore\n";
            break;
        case 2:
            cout << "\nStudy Abroad Opportunities in Europe:\n";
            cout << "United Kingdom: University of Oxford, University of Cambridge, Imperial College London\n";
			cout << "ETH Zurich\n";
			cout << "Germany: Technical University of Munich\n";
			cout << "France: Institut Polytechnique de Paris, Université Paris-Saclay\n";
            break;
        case 3:
            cout << "\nStudy Abroad Opportunities in Asia:\n";
            cout << "Singapore: National University of Singapore, Nanyang Technological University\n";
			cout << "China: Tsinghua University\n";
			cout << "Taiwan: National Yang Ming Chiao Tung University\n";
            break;
        case 4:
            cout << "\nStudy Abroad Opportunities in Australia:\n";
            cout << "University of Melbourne\n";
            break;
        default:
            cout << "Invalid choice.\n";
            return;
    }
}


// Function to authenticate and determine user type
string authenticateUser(const string& userType, string& department, string& program, int& semester) {
    if (userType == "A") {
        while (true) {
            cout << "\nChoose a feature:\n";
            cout << "1. View University\n";
            cout << "2. View University Categorically\n";
            cout << "3. Exit\n";

            int featureChoice;
            cout << "Enter your choice (1-3): ";
            cin >> featureChoice;

            switch (featureChoice) {
                case 1:
                    cout << "\n";
                    viewUniversity();
                    break;
                case 2:
                    cout << "\n";
    				viewCategorizedUniversities();
                    break;
                case 3:
                    cout << "Exiting Admission Candidate features.\n";
                    return "Welcome, Admission Candidate!";
                default:
                    cout << "Invalid choice. Try again.\n";
            }
        }
    } else if (userType == "U") {
    	while (true){
        cout << "\nChoose department:\n";
        cout << "1. CSE\n";
        cout << "2. EEE\n";
        cout << "3. MPE\n";
        cout << "4. CEE\n";
        cout << "5. BTM\n";

        int choice;
        cout << "Enter your choice (1-5): ";
        cin >> choice;
		cout << "\n";
        switch (choice) {
            case 1:
                department = "CSE";
                while (true) {
                        cout << "\nChoose program:\n";
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
                                    cout << "\nChoose semester (1-8): ";
                                    cin >> semester;

                                    if (semester >= 1 && semester <= 8) {
                                    // Feature execution within the switch case based on the semester
                                    switch (semester) {
                                        case 3:
                                            while (true) {
                                                cout << "\nChoose a feature:\n";
                                                cout << "1. Get Syllabus\n";
                                                cout << "2. Get Book List\n";
                                                cout << "3. Get Course Material\n";
                                                cout << "4. Join Study Forum\n";
                                                cout << "5. See Higher Studies Opportunites\n";
												cout << "6. Exit\n";

                                                int featureChoice;
                                                cout << "Enter your choice (1-6): ";
                                                cin >> featureChoice;

                                                switch (featureChoice) {
                                                    case 1:
                                                        // Course-wise switch case for Get Syllabus
                                                        while (true) {
                                                            cout << "\nChoose a course for Syllabus:\n";
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
                                                                    //cout << "Fetching Syllabus for SWE 4301...\n";
                                                                    cout << "Review of Object Oriented Concept, Multi-threading, UML Diagrams for Class, Objects and Relationships, UI programming, Synchronizations, Client Server programming, RPC, Distributed Objects, XML, Web programming : URL, Request and Response, HTML and DOM, Model –View–Controller, Container, Data Objects and Business Objects, Persistent Object, Object Serialization using XML, Web Service.\n";
                                                                    cout << "Objects and the Internet – Ajax, Object-Based Scripting Languages: JSON and Python.\n";
                                                                    cout << "Object Oriented Design Principles - Single Responsibility Principle, Open/Close Principle, Liskov Substitution Principal, Interface Segregation Principle and Dependency Inversion Principle; Introduction to Component Based Design, Design Patterns and Code Smells.\n";
                                                                    cout << "\n";
																	break;
                                                                case 2:
                                                                    //cout << "Fetching Syllabus for CSE 4303...\n";
                                                                    cout << "Introduction to data structures: what & why, Notations, Concept of efficiency. Elementary Data Structures: Arrays, Records & Pointers, Examples of Random Access, Call by Reference, Variable Length Strings, Secondary Storage, and Implementation in Memory.\n";
                                                                    cout << "Lists: Concept of Linked Lists. The implementation, Sub list, Recursive lists, Variants, Orthogonal lists, Stack & Queue, Sequential & circular implementation of stack & queue, Applications of stack & queue.\n";
                                                                    cout << "Graphs: Breadth-First-Search (BFS), Depth-First-Search (DFS), connected components & topological numbering, Applications.\n";
                                                                    cout << "Trees: Creation & representation, Traversal, Copying, Printing and Arithmetic interpretations of trees.\n";
                                                                    cout << "Memory Management: Uniform size records- explicit release and garbage collection.\n";
                                                                    cout << "Diverse Size Records: Allocation, Compaction.\n";
                                                                    cout << "Searching Techniques: Concept, Searching linked lists and Binary tree search.\n";
                                                                    cout << "Hashing: Extraction, Compression, Division and Multiplication, Collision Resolution (Chaining, Probing), Double hash, Ordered hash, Rehash, Radix distribution.\n";
                                                                    cout << "Sorting: Discussion and comparison on different kinds of sorting (i.e. Insertion sort, Bubble sort, Quick sort, Selection sort, Merge sort etc.).\n";
                                                                    cout << "\n";
																	break;
                                                                case 3:
                                                                    //cout << "Fetching Syllabus for CSE 4305...\n";
                                                                    cout << "Components of a computer system: processors, memory, secondary storage devices and media, and other input output devices. Processor organization: registers, buses, multiplexers, decoders, ALUs, clocks, main memory and caches.\n";
                                                                    cout << "Information representation and transfer; instruction and data access methods; the control unit: hardwired and microprogrammed; memory organization, I/O systems, channels, interrupts, DMA. Von Neumann SISD organization. RISC and CISC machines.\n";
                                                                    cout << "\n";
																	break;
                                                                case 4:
                                                                    //cout << "Fetching Syllabus for CSE 4307...\n";
                                                                    cout << "Overview of database management systems; DBMS file structures; introduction to the relational model; relational algebra, normalization and relational design; ER modeling, object-oriented modeling, advanced features of the relational model; Database Design Language; the hierarchical model; the CODASYL model; alternative data models; physical database design; fourth-generation environment; database administration, database recovery, distributed databases and current trends in the field. Relational query languages: SQL; embedded SQL in a third-generation language (COBOL, C or C++). Transaction management; concurrency control.\n";
                                                                    cout << "\n";
																	break;
                                                                case 5:
                                                                    //cout << "Fetching Syllabus for CSE 4309...\n";
                                                                    cout << "Review of Discrete Mathematics - Binary relations, digraph, string, languages, proofs, inductive definitions.\n";
                                                                    cout << "Formal methods of automata language and computability, Finite automata and regular expressions, Properties of regular sets, Contextfree grammars, Push-down automata, Properties of context-free languages, Turing machines, Halting problem, Undecidability and Computability, Recursion function theory, Chomsky hierarchy, Deterministic context-free languages, Closure properties of families of languages, Computational complexity theory, Intractable problems, Applications in parsing, pattern matching and the design of efficient algorithms.\n";
                                                                    cout << "Finite state machines, Introduction to sequential circuits, basic definition of finite state model, memory elements and their excitation functions, synthesis of synchronous sequential circuits, iterative networks, definition and realization of Moore and Mealey machines.\n";
																	cout << "\n";
																	break;
                                                                case 6:
                                                                    //cout << "Fetching Syllabus for Math 4341...\n";
                                                                    cout << "Linear Algebra: Solving for square systems by elimination (pivots, multipliers, back substitution, invertibility of , and factorization into . Complete solution to (column space containing , rank of , nullspace of and special solutions to from row reduction).\n";
                                                                    cout << "Basis and dimension (bases for the four fundamental subspaces). Least squares solutions (closest line by understanding projections). Orthogonalization by Gram-Schmidt (factorization into ).\n";
                                                                    cout << "Properties of determinants (leading to the cofactor formula and the sum over all permutations, applications to inverse matrix calculation and volume). Eigenvalues and eigenvectors (diagonalizing , computing powers and matrix exponentials to solve difference and differential equations). Symmetric matrices and positive definite matrices (real eigenvalues and orthogonal eigenvectors, tests for , applications).\n";
                                                                    cout << "Linear transformations and change of basis (connected to the Singular Value Decomposition - orthonormal bases that diagonalize ). Linear algebra in engineering (graphs and networks, Markov matrices, Fourier matrix, Fast Fourier Transform, linear programming).\n";
																	cout << "\n";
																	break;
                                                                case 7:
                                                                    //cout << "Fetching Syllabus for SWE 4302...\n";
                                                                    cout << "Sessional works based on 4301 OOP.\n";
																	cout << "\n";
																	break;
                                                                case 8:
                                                                    //cout << "Fetching Syllabus for SWE 4304...\n";
                                                                    cout << "Each student will be assigned a single complete software project individually. The size of the projects will be medium. It will focus on the application of the different features of programming language. Student will be evaluated based on their software and problem solving effort.\n";
																	cout << "\n";
																	break;
                                                                case 9:
                                                                    //cout << "Fetching Syllabus for CSE 4304...\n";
                                                                    cout << "Sessional works based on 4303 DS.\n";
																	cout << "\n";
																	break;    
                                                                case 10:
                                                                    //cout << "Fetching Syllabus for CSE 4308...\n";
                                                                    cout << "Sessional works based on 4307 DBMS.\n";
																	cout << "\n";
																	break;
                                                                case 11:
                                                                    cout << "Exiting course selection.\n";
                                                                    cout << "\n";
																	break;
                                                                default:
                                                                    cout << "Invalid choice. Try again.\n\n";
                                                            }
                                                        }
                                                        break;
                                                    case 2:
                                                        // Course-wise switch case for Get Book List
                                                        while (true) {
                                                            cout << "\nChoose a course for Book List:\n";
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
                                                                    //cout << "Fetching Book List for SWE 4301...\n";
                                                                    cout << "The Object Oriented Thought Process; Matt A. Weisfeld\n";
                                                                    cout << "99 Bottles of OOP; Sandy Metz\n";
                                                                    cout << "Agile Software Developments, Principles, Patterns & Practices; Robert Martin\n";
                                                                    cout << "Clean Code; Robert Martin\n";
                                                                    cout << "Refactoring; Martin Fowler, Kent Beck\n";
                                                                    cout << "Test Driven Development by Example; Kent Beck\n";
																	cout << "\n";
																	break;
                                                                case 2:
                                                                    ////cout << "Fetching Book List for CSE 4303...\n";
                                                                    cout << "Data Structures And Algorithm Analysis In C++, 4rth Edition; Mark Allen\n";
                                                                    cout << "Data Structures Using C, 2nd Edition; Rema Thareja\n";
																	cout << "\n";
																	break;
                                                                case 3:
                                                                    //cout << "Fetching Book List for CSE 4305...\n";
                                                                    cout << "COA: Designing for Performance;10th Ed; William Stallings\n";
                                                                    cout << "Computer Organization & Design: The Hardware/Software Interface; 5th Ed; Hennsey, Patterson\n";
																	cout << "\n";
																	break;
                                                                case 4:
                                                                    //cout << "Fetching Book List for CSE 4307...\n";
                                                                    cout << "Database System Concepts, 7th Edition, Silberschatz\n";
																	cout << "\n";
																	break;
                                                                case 5:
                                                                    //cout << "Fetching Book List for CSE 4309...\n";
                                                                    cout << "Introduction to Automata Theory, Languages & Computation; 3rd Ed; Hopcroft\n";
                                                                    cout << "Introduction to the TOC; 2nd Ed; Sipser\n";
																	cout << "\n";
																	break;
                                                                case 6:
                                                                    //cout << "Fetching Book List for Math 4341...\n";
                                                                    cout << "Introduction to Linear Algebra, 5th Ed; Gilbert Strang\n";
																	cout << "\n";
																	break;
                                                                case 7:
                                                                    //cout << "Fetching Book List for SWE 4302...\n";
                                                                    cout << "Same as for 4301 OOP\n";
																	cout << "\n";
																	break;
                                                                case 8:
                                                                    //cout << "Fetching Book List for SWE 4304...\n";
                                                                    cout << "Same as for 4301 OOP\n";
																	cout << "\n";
																	break;
                                                                case 9:
                                                                    //cout << "Fetching Book List for CSE 4304...\n";
                                                                    cout << "Same as for 4303 DS\n";
																	cout << "\n";
																	break;    
                                                                case 10:
                                                                    //cout << "Fetching Book List for CSE 4308...\n";
                                                                    cout << "Same as for 4307 DBMS\n";
																	cout << "\n";
																	break;
																case 11:
                                                                    cout << "Exiting Course selection.\n";
                                                                    cout << "\n";
																	break;
                                                                default:
                                                                    cout << "Invalid choice. Try again.\n";
                                                                    cout << "\n";
                                                            }
                                                        }
                                                        break;
                                                    case 3:
                                                        // Course-wise switch case for Get Course Material
                                                        while (true) {
                                                            cout << "\nChoose a course for Course Material:\n";
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
                                                                    //cout << "Fetching Course Material for SWE 4301...\n";
                                                                    cout << "OOC-I Recap\nOCP Example\nRefactoring\nClean Code\nCode Smells\nSOLID\n";
                                                                    cout << "\n";
																	break;
                                                                case 2:
                                                                    //cout << "Fetching Course Material for CSE 4303...\n";
                                                                    cout << "Lecture 1: Introduction to data structures, Complexity Time-Space Tradeoff\nLecture 2:  Abstract Data Type, Arrays & Linked List\nLecture 3:  Stacks & Its Applications\nLecture 4: Queue & Deque\nLecture 5:  Priority Queue & Heap\nLecture 6:  Linear Search, Binary Search, Tree Terminologies\nLecture 7: Binary Tree, Tree Traversals\n";
                                                                    cout << "\n";
																	break;
                                                                case 3:
                                                                    //cout << "Fetching Course Material for CSE 4305...\n";
                                                                    cout << "Lecture 1\nLecture 2\nLecture 3";
                                                                    cout << "\n";
																	break;
                                                                case 4:
                                                                    //cout << "Fetching Course Material for CSE 4307...\n";
                                                                    cout << "Chapter 1, 2, 3, 4, 5, 6\nERD Scenario\nSubquery\nERD Solution\nPL-SQL Note\n";
                                                                    cout << "\n";
																	break;
                                                                case 5:
                                                                    //cout << "Fetching Course Material for CSE 4309...\n";
                                                                    cout << "Finite Automata (DFA, NFA)\nEquivalence of DFA\nEquivalence of NFA\nMinimization of DFA\nE-NFA\nRegular Expression\nLecture Notes- Harry H Porter\n";
                                                                    cout << "\n";
																	break;
                                                                case 6:
                                                                    //cout << "Fetching Course Material for Math 4341...\n";
                                                                    cout << "Chapter 1, 2, 3 (Upto 3.3)\n";
                                                                    cout << "\n";
																	break;
                                                                case 7:
                                                                    //cout << "Fetching Course Material for SWE 4302...\n";
                                                                    cout << "Chapter 1, 2, 3, 4, 5, 6\nERD Scenario\nSubquery\nERD Solution\nPL-SQL Note\n";
                                                                    cout << "\n";
																	break;
                                                                case 8:
                                                                    //cout << "Fetching Course Material for SWE 4304...\n";
                                                                    cout << "Chapter 1, 2, 3, 4, 5, 6\nERD Scenario\nSubquery\nERD Solution\nPL-SQL Note\n";
                                                                    cout << "\n";
																	break;
                                                                case 9:
                                                                    //cout << "Fetching Course Material for CSE 4304...\n";
                                                                    cout << "Lecture 1: Introduction to data structures, Complexity Time-Space Tradeoff\nLecture 2:  Abstract Data Type, Arrays & Linked List\nLecture 3:  Stacks & Its Applications\nLecture 4: Queue & Deque\nLecture 5:  Priority Queue & Heap\nLecture 6:  Linear Search, Binary Search, Tree Terminologies\nLecture 7: Binary Tree, Tree Traversals\n";
                                                                    cout << "\n";
																	break;    
                                                                case 10:
                                                                    //cout << "Fetching Course Material for CSE 4308...\n";
                                                                    cout << "Chapter 1, 2, 3, 4, 5, 6\nERD Scenario\nSubquery\nERD Solution\nPL-SQL Note\n";
                                                                    cout << "\n";
																	break;
																case 11:
                                                                    cout << "Exiting Course Material selection.\n";
                                                                    cout << "\n";
																	break;
                                                                default:
                                                                    cout << "Invalid choice. Try again.\n";
                                                                    cout << "\n";
                                                            }
                                                        }
                                                        break;
                                                    case 4:
                                                    	cout << "\nLinks to join Study Forum in Semester 3:\n";
                                                    	cout << "SWE 4301 OOP: https://www.w3schools.com/cpp/cpp_oop.asp\n";
                                                    	cout << "CSE 4303 DS: https://www.freecodecamp.org/news/learn-data-structures-and-algorithms/\n";
														cout << "CSE 4305 COA: https://www.geeksforgeeks.org/computer-organization-and-architecture-tutorials/\n";
														cout << "CSE 4307 DBMS: https://www.geeksforgeeks.org/introduction-of-dbms-database-management-system-set-1/\n";
														cout << "CSE 4309 TOC: https://www.geeksforgeeks.org/introduction-of-theory-of-computation/\n";
														cout << "Math 4341 LA: https://www.cuemath.com/algebra/linear-algebra/\n";
														cout << "\n";
														break;
													case 5:
														//cout << "\nFetching Opportunity list for Higher Studies\n";
														seeHigherStudyOpportunity();
														break;
													case 6:
                                                        cout << "Exiting feature selection.\n";
                                                        return "Welcome, SWE Student in " + department + " department, Semester " + to_string(semester) + "!";
                                                    default:
                                                        cout << "Invalid choice. Try again.\n";
                                                }
                                            }
                                            break;
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