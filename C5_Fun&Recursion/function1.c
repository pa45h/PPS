    // return_type function_name (parameter_list);     [function prototype declaration]

    // function_name (arguments);                      [function call]

    // return_type function_name (parameter_list)      [functio definition]
    // {
    //     [code];
    // }

    #include<stdio.h>

    void display();     //declaration

    int main()
    {
        display();      //call
        return 0;
    }

    void display()      //definition
    {
        printf("This is display!");
    }
