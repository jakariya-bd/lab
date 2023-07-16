/*_____ INVESTMENT PROBLEM _____*/
#define PERIOD 10
#define PRINCIPAL 5000.0
/*_____ MAIN PROGRAM BEGINS ___*/
main()
{
    /*_____ DECLARATION STATEMENTS ____*/
    int year;
    float amount, value, inrate;
    /*_____ ASSIGNMENT STATEMENTS _____*/
    amount = PRINCIPAL;
    inrate = 0.11;
    year = 0;
    /*_____ COMPUTATION USING while LOOP ___*/
    while( year <= PERIOD ){
        printf("%2d %8.2f\n", year, amount);
        value = amount + inrate * amount;
        year = year + 1;
        amount = value;
    }
    /*____ while LOOP ENDS _____*/
}
/*_____ PROGRAM ENDS _____*/
