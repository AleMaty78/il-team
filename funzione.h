#define DIM 20

using namespace std;

class Student
    {
        public:
            string name;
            string surname;
            
            Student(string name, string surname);
    };

class Registro: public Student
    {
        public:
            int grade_Math, grade_English, grade_Italian;
            
            Registro(string name, string surname, int grade_Math, int grade_English, int grade_Italian): Student::Student(name, surname), grade_Math(grade_Math), grade_English(grade_English), grade_Italian(grade_Italian) {};
            
            void insert_Grade();
            void print_Register();
    };