/********************
 * Program: assignment3.cpp
 * Author: Caden Johnsen
 * Date: 2/5/17
 * Description: A program to calculate grades in CS 161
 * Input: grades on labs, assignments, recitation work, and tests
 * Output: Total grade in each category and total class grade
 ********************/
#include <iostream>

using namespace std;

int calc_labs() {
	/********************
	 * Function: calc_labs
	 * Description: Function used to calculate total labs grade
	 * Parameters: None
	 * Pre-Conditions: grade = 1
	 * Post-Conditions: Total labs grade
	 * Return: labanswer
	 ********************/
	int labnum = 0;
	int point_vary = 0;
	int point_max = 0;
	int counter = 0;
	int points = 0;
	int points_total = 0;
	int point_max_total = 0;
	int labanswer = 0;

	cout << "How many labs?" << endl;
	cin >> labnum;
	cout << "Do the point values vary? 1 for yes 2 for no." << endl;
	cin >> point_vary;
	if (point_vary == 2) {
		cout << "Out of how many points?" << endl;
		cin >> point_max_total; //running total for max points on all labs
	}
	do {
		if (point_vary == 1) {
			cout << "Total Points: ";
			cin >> point_max;
			point_max_total = point_max + point_max_total;
			//running total of max points per lab
		}
		cout << "Lab Points: ";
		cin >> points;
		points_total = points + points_total; //running total of points
		counter++;
	} while (counter < labnum); //do while loop for every lab
	if (point_vary == 2) {
		labanswer = (float)points_total / (point_max_total * labnum) * 100;
		cout << "Your average score for labs is " << labanswer << "%" << endl;
	}
	else {
		labanswer = (float)points_total / point_max_total * 100;
		cout << "Your average score for labs is " << labanswer << "%" << endl;
	}
	return labanswer; //return grade for labs on a 100 percent scale
}

int calc_assignments() {
	/********************
	 * Function: calc_assignments
	 * Description: Function used to calculate total assignments grade
	 * Parameters: None
	 * Pre-Conditions: Grade = 2
	 * Post-Conditions: Total assignments grade
	 * Return: assignmentanswer
	 ********************/
	int assignmentnum = 0;
	int point_vary = 0;
	int point_max = 0;
	int counter = 0;
	int points = 0;
	int points_total = 0;
	int point_max_total = 0;
	int assignmentanswer = 0;

	cout << "How many assignments?" << endl;
	cin >> assignmentnum;
	cout << "Do the point values vary? 1 for yes 2 for no." << endl;
	cin >> point_vary;
	if (point_vary == 2) {
		cout << "Out of how many points?" << endl;
		cin >> point_max_total;
		//running total for max points on all assignments
	}
	do {
		if (point_vary == 1) {
			cout << "Total Points: ";
			cin >> point_max;
			point_max_total = point_max + point_max_total;
			//running total of max points per assignment
		}
		cout << "Assignment Points: ";
		cin >> points;
		points_total = points + points_total;
		counter++;
	} while (counter < assignmentnum); //do while loop for every assignment
	if (point_vary == 2) {
		assignmentanswer = (float)points_total / (point_max_total * assignmentnum) * 100;
		cout << "Your average score for assignments is " << assignmentanswer << "%" << endl;
	}
	else {
		assignmentanswer = (float)points_total / point_max_total * 100;
		cout << "Your average score for assignments is " << assignmentanswer << "%" << endl;
	}
	return assignmentanswer; //return grade for assignments on a 100 percent scale
}

int calc_recitations() {
	/********************
	 * Function: calc_recitations
	 * Description: Function used to calculate total recitation grade with weight
	 * Parameters: None
	 * Pre-Conditions: grade = 3
	 * Post-Conditions: Total recitations grade with weight
	 * Return: total_answer
	 ********************/
	int quiz_weight = 0;
	int design_weight = 0;
	int critique_weight = 0;
	int quiznum = 0;
	int designnum = 0;
	int critiquenum = 0;
	int point_vary = 0;
	int point_max = 0;
	int counter = 0;
	int points = 0;
	int points_total = 0;
	int quizanswer = 0;
	int designanswer = 0;
	int critiqueanswer = 0;
	int point_max_total = 0;
	int total_weight = 0;
	int total_answer = 0;

	cout << "Quiz weight?" << endl;
	cin >> quiz_weight;
	cout << "Design weight?" << endl;
	cin >> design_weight;
	cout << "Critique weight?" << endl;
	cin >> critique_weight;

	if (quiz_weight > 0) {
		cout << "How many quizzes?" << endl;
		cin >> quiznum;
		cout << "Do the point values vary? 1 for yes 2 for no." << endl;
		cin >> point_vary;
		if (point_vary == 2) {
			cout << "Out of how many points?" << endl;
			cin >> point_max_total;
		}
		do {
			if (point_vary == 1) {
				cout << "Total Points: ";
				cin >> point_max;
				point_max_total = point_max + point_max_total;
			}
			cout << "Quiz Points: ";
			cin >> points;
			points_total = points + points_total;
			counter++;
		} while (counter < quiznum); //do while loop for every recitation quiz

		if (point_vary == 2) {
			quizanswer = (float)points_total / (point_max_total * quiznum) * 100;
			cout << "Your recitation quiz grade is " << quizanswer << endl;
		}
		else {
			quizanswer = (float)points_total / point_max_total * 100;
			cout << "Your recitation quiz grade is " << quizanswer << endl;
		}
	}
	if (design_weight > 0) {
		counter = 0;
		points_total = 0;
		cout << "How many designs?" << endl;
		cin >> designnum;
		cout << "Do the point values vary? 1 for yes 2 for no." << endl;
		cin >> point_vary;
		if (point_vary == 2) {
			cout << "Out of how many points?" << endl;
			cin >> point_max_total;
		}
		do {
			if (point_vary == 1) {
				cout << "Total Points: ";
				cin >> point_max;
				point_max_total = point_max + point_max_total;
			}
			cout << "Design Points: ";
			cin >> points;
			points_total = points + points_total;
			counter++;
		} while (counter < designnum); //do while loop for every recitation design
		if (point_vary == 2) {
			designanswer = (float)points_total / (point_max_total * designnum) * 100;
			cout << "Your recitation design grade is " << designanswer << endl;
		}
		else {
			designanswer = (float)points_total / point_max_total * 100;
			cout << "Your recitation design grade is " << designanswer << endl;
		}
	}
	if (critique_weight > 0) {
		counter = 0;
		points_total = 0;
		cout << "How many critiques?" << endl;
		cin >> critiquenum;
		cout << "Do the point values vary? 1 for yes 2 for no." << endl;
		cin >> point_vary;
		if (point_vary == 2) {
			cout << "Out of how many points?" << endl;
			cin >> point_max_total;
		}
		do {
			if (point_vary == 1) {
				cout << "Total Points: ";
				cin >> point_max;
				point_max_total = point_max + point_max_total;
			}
			cout << "Critique Points: ";
			cin >> points;
			points_total = points + points_total;
			counter++;
		} while (counter < critiquenum); //do while loop for every recitation critique
		if (point_vary == 2) {
			critiqueanswer = (float)points_total / (point_max_total * critiquenum) * 100;
			cout << "Your recitation critique grade is " << critiqueanswer << endl;
		}
		else {
			critiqueanswer = (float)points_total / point_max_total * 100;
			cout << "Your recitation critique grade is " << critiqueanswer << endl;
		}
	}
	total_weight = quiz_weight + design_weight + critique_weight;
	total_answer = float ((quiz_weight * quizanswer) + (design_weight * designanswer)
			+ (critique_weight * critiqueanswer)) / total_weight;
	//divides total percent for each section by total
	return total_answer; //return grade for recitations on a 100 percent scale
}

int calc_tests() {
	/********************
	 * Function: calc_tests
	 * Description: Function used to calculate total tests grade
	 * Parameters: None
	 * Pre-Conditions: grade = 4
	 * Post-Conditions: Total tests grade
	 * Return: testanswer
	 ********************/
	int testnum = 0;
	int point_vary = 0;
	int point_max = 0;
	int counter = 0;
	int points = 0;
	int points_total = 0;
	int point_max_total = 0;
	int testanswer = 0;

	cout << "How many tests?" << endl;
	cin >> testnum;
	cout << "Do the point values vary? 1 for yes 2 for no." << endl;
	cin >> point_vary;
	if (point_vary == 2) {
		cout << "Out of how many points?" << endl;
		cin >> point_max_total; //running total for max points on all tests
	}
	do {
		if (point_vary == 1) {
			cout << "Total Points: ";
			cin >> point_max;
			point_max_total = point_max + point_max_total;
			//running total of max points per test
		}
		cout << "Test Points: ";
		cin >> points;
		points_total = points + points_total;
		counter++;
	} while (counter < testnum); //do while loop for every test
	if (point_vary == 2) {
		testanswer = (float)points_total / (point_max_total * testnum) * 100;
		cout << "Your average score for tests is " << testanswer << "%" << endl;
	}
	else {
		testanswer = (float)points_total / point_max_total * 100;
		cout << "Your average score for tests is " << testanswer << "%" << endl;
	}
	return testanswer; //return grade for tests on a 100 percent scale
}

float class_grade(float labs, float assignments, float recitations, float tests) {
	/********************
	 * Function: class_grade
	 * Description: Function used to calculate total class grade
	 * Parameters: float labs, float assignments, float recitations, float tests
	 * Pre-Conditions: grade = 5
	 * Post-Conditions: Class grade
	 * Return: final_answer
	 ********************/
	int weight_lab = 0;
	int weight_assignment = 0;
	int weight_recitation = 0;
	int weight_test = 0;
	int weight_total = 0;
	float final_answer = 0;
	//input weights for labs, assignments, recitations, and tests
	cout << "Lab weight?" << endl;
	cin >> weight_lab;

	cout << "Assignment weight?" << endl;
	cin >> weight_assignment;
	cout << "Recitation weight?" << endl;
	cin >> weight_recitation;
	cout << "Test weight?" << endl;
	cin >> weight_test;

	//calculate final grade by multiplying weight by score for each category
	weight_total = weight_lab + weight_assignment + weight_recitation + weight_test;
	final_answer = float(((labs * weight_lab) + (assignments * weight_assignment)
				+ (recitations * weight_recitation) + (tests * weight_test)) / weight_total);
	return final_answer;
}


int main() {
	/********************
	 * Function: main
	 * Description: Main file used to guide program between functions
	 * Parameters: None
	 * Pre-Conditions: None
	 * Post-Conditions: Send to functions or exit game
	 * Return: grades for labs, assignments, recitations, tests, class or exits program
	 ********************/

	float labs = 0;
	float assignments = 0;
	float recitations = 0;
	float tests = 0;
	float class_grades = 0;
start:
	cout << "Do you want to calculate your grade for 1) labs, 2) assignments," << endl;
	cout << "3) recitations, 4) tests, 5) class, or 0) to quit?" << endl;
	int grade;
	cin >> grade; //variable to call each function
	switch(grade) {
		case 0:
			return 0; //exits game
		case 1:
			labs = calc_labs(); //goes to labs function
			goto start;
			break;
		case 2:
			assignments = calc_assignments(); //goes to assignments function
			goto start;
			break;
		case 3:
			recitations = calc_recitations(); //goes to recitation function
			cout << "Your average score for recitations is " << recitations << endl;
			goto start;
			break;
		case 4:
			tests = calc_tests(); //goes to tests function
			goto start;
			break;
		case 5:
			class_grades = class_grade(labs, assignments, recitations, tests);
			//goes to function for calculating total class grade
			cout << "Your class average is " << class_grades << "%" << endl;
			goto start;
			break;
		default:
			cout << "Enter a valid input.\n" << endl; //ensures valid input
			goto start;
			break;
	}
}
