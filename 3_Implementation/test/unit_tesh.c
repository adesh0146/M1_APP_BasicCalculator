#include "unity.h"
#include "header.h"
#define PROJECT_NAME    "Calculator"
calculate testcal={10,5};
trigonometric testo={4};
calculate testcal1={-3,-2} /* negative number input  */,testdiv0={3,0};
trigonometric testf1={0};
trigonometric testf2={-5}; /* negative number input  */
/* Prototypes for all the test functions */
void test_sum(void);
void test_substraction(void);
void test_multiplication(void);
void test_division(void);
void test_exponent(void);
void test_factorial(void);
void test_root(void);
void test_power(void);
void test_sine(void);
void test_cosine(void);
void test_ttan(void);
void test_sec(void);
void test_cosec(void);
void test_cot(void);
void test_zero_factorial(void);
void test_negative_factorial(void);
void test_division_byZero(void);
void test_division_byZero(void);
void test_logbase10(void);
void test_logbase10_zeroAndnegative(void);
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_sum);
  RUN_TEST(test_substraction);
  RUN_TEST(test_multiplication);
  RUN_TEST(test_division);
  RUN_TEST(test_division_byZero);
  RUN_TEST(test_root);
  RUN_TEST(test_power);
  RUN_TEST(test_exponent);
  RUN_TEST(test_factorial);
  RUN_TEST(test_zero_factorial);
  RUN_TEST(test_negative_factorial);
  RUN_TEST(test_sine);
  RUN_TEST(test_cosine);
  RUN_TEST(test_ttan);
  RUN_TEST(test_cosec);
  RUN_TEST(test_sec);
  RUN_TEST(test_cot);
  RUN_TEST(test_logbase10);
  RUN_TEST(test_logbase10_zeroAndnegative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* all test functions */ 
void test_sum(void) {
  TEST_ASSERT_EQUAL(15,sum(&testcal));
   TEST_ASSERT_EQUAL(-5,sum(&testcal1)); /* negative number input case  */
   }
void test_substraction(void) {
  TEST_ASSERT_EQUAL(5,substraction(&testcal));
  TEST_ASSERT_EQUAL(-1,substraction(&testcal1)); /* negative number input case  */
}
void test_multiplication(void) {
  TEST_ASSERT_EQUAL(50,multiplication(&testcal));
  TEST_ASSERT_EQUAL(6,multiplication(&testcal1)); /* negative number input case  */
}
void test_division(void) {
  TEST_ASSERT_EQUAL(2,division(&testcal));
  TEST_ASSERT_EQUAL(1,division(&testcal1)); /* negative number input case  */
}
/*division when divisor is 0 */
void test_division_byZero(void){
   TEST_ASSERT_EQUAL(-1, division(&testdiv0));
}
void test_power(void) {
  TEST_ASSERT_EQUAL(100000,power(&testcal));
   TEST_ASSERT_EQUAL(-0.111,power(&testcal1)); /* negative number input case  */
}
void test_root(void) {
  TEST_ASSERT_EQUAL(2,squareroot(&testo));
  TEST_ASSERT_EQUAL(-1,squareroot(&testf2)); 
}
void test_factorial(void) {
  TEST_ASSERT_EQUAL(24,factorial(&testo));
  TEST_ASSERT_EQUAL(-1,factorial(&testf2)); /* negative number input case  */
}
void test_exponent(void) {
  TEST_ASSERT_EQUAL(54.598,exponent(&testo));
   TEST_ASSERT_EQUAL(0.0067,exponent(&testf2)); /* negative number input case  */
}
void test_sine(void) {
  TEST_ASSERT_EQUAL(-0.756,sine(&testo));
  TEST_ASSERT_EQUAL(0.958,sine(&testf2)); /* negative number input case  */
}
void test_cosine(void) {
  TEST_ASSERT_EQUAL(-0.653,cosine(&testo));
  TEST_ASSERT_EQUAL(0.283,cosine(&testf2)); /* negative number input case  */
}
void test_ttan(void) {
  TEST_ASSERT_EQUAL(1.157,ttan(&testo));
   TEST_ASSERT_EQUAL(3.380,ttan(&testf2)); /* negative number input case  */
}
void test_sec(void) {
  TEST_ASSERT_EQUAL(-1.529,sec(&testo));
   TEST_ASSERT_EQUAL(3.525,sec(&testf2)); /* negative number input case  */
}
void test_cot(void) {
  TEST_ASSERT_EQUAL(0.863,cot(&testo));
  TEST_ASSERT_EQUAL(-0.295,cot(&testf2)); /* negative number input case  */
}
void test_cosec(void) {
  TEST_ASSERT_EQUAL(-1.321,cosec(&testo));
   TEST_ASSERT_EQUAL(1.042,cosec(&testf2)); /* negative number input case  */
}

/*factorial of 0*/
void test_zero_factorial(void)
{
  TEST_ASSERT_EQUAL(1, factorial(&testf1));
}

/*factorial of negative numbers */
void test_negative_factorial(void)
{
  TEST_ASSERT_EQUAL(-1, factorial(&testf2));
}
/* log with base 10 */
void test_logbase10(void)
{
  TEST_ASSERT_EQUAL(0.602,logbase10(&testo));
}
/* log with base 10  and value as 0 and negative*/
void test_logbase10_zeroAndnegative(void)
{
  TEST_ASSERT_EQUAL(-1, logbase10(&testf2));
}