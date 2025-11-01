#include "Solution"

struct Testcase {
    vector<int> nums;
    int expectedOutput;
};

class UnitTest {
    private:
        Solution solution;
        vector<Testcase> testcases;

        bool test_case_0() {
            vector<int> nums = testcases[0].nums;
            int expectedOutput = testcases[0].exceptedOutput;
            int actualOutput = solution.jump(nums);
            return expectedOutput == actualOutput;
        }

        bool test_case_1() {
            vector<int> nums = testcases[1].nums;
            int expectedOutput = testcases[1].exceptedOutput;
            int actualOutput = solution.jump(nums);
            return expectedOutput == actualOutput;
        }

    public:
        UnitTest() {
            testcases.push_back({2,3,1,1,4}, 2});
            testcases.push_back({2,3,0,1,4}, 2});
        }

        void test() {
            bool result = test_case_0();
            cout << "Test Case 0: " << ((result) ? "passed" : "failed") << endl;
            result = test_case_1();
            cout << "Test Case 1: " << ((result) ? "passed" : "failed") << endl;
        }
};

int main() {
    UnitTest unittest;
    unittest.test();
}