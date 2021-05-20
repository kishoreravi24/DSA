#include<iostream>
class Hello {
    private:
        std::string name;
        int age;
        int *random_number_addr;
    public:
        Hello(std::string name_v,int age_v) {
            int *p = new int[5];
            p[2] = 5;
            random_number_addr = p;
            name = name_v;
            age = age_v;
        }
        std::string getName() {
            return name;
        }

        int getAge(){
            return age;
        }

        int* getRandomNumberAddr(){
            return random_number_addr;
        }
        ~Hello(){
            std::cout<<"\nallocated heap memory in constructor destroyed";
        }
};

int main(){
    Hello obj("kishore",22);
    std::cout<<obj.getName()<<" ";
    std::cout<<obj.getAge()<<" ";
    int *p = obj.getRandomNumberAddr();
    std::cout<<p[2];
}