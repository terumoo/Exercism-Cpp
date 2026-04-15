#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> result;
    for (double i : student_scores)
        result.emplace_back(static_cast<int>(i)); 
    return result;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int count{0};
    for (int grade : student_scores)
        if (grade <= 40) count++;
    return count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<int, 4> result{0, 0, 0, 0};
    int increment = (highest_score - 40) / 4;
    result[0] = 41;
    result[1] = result[0] + increment;
    result[2] = result[1] + increment;
    result[3] = result[2] + increment;
    return result;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> result;
    int rank{1};
    for (int i = 0; i < student_scores.size(); ++i) 
        {
        std::string res = std::to_string(rank) + ". " + student_names.at(i) + ": " + std::to_string(student_scores.at(i)); 
        result.emplace_back(res);
        rank++;
        }
    return result;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    std::string result = "";
    for (int i = 0; i < student_scores.size(); ++i)
        {
           if (student_scores.at(i) == 100) {
               result = student_names.at(i);
               return result;
           } 
        }
    return result;
}
