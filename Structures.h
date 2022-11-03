class Structures
{
    
};

class Bush: public Structures
{

};

class Tree: public Structures
{

};

class test
{
    private:
    int var1;
    protected:
    int var2;
    public:
    int getVar1(){return var1;}
    void setVar1(int a){var1=a;}
    void setVar2(int b){var2=b;}
    void printAll()
    {
        //printf("%d %d\n",var1,var2);
        cout << var1 << " " << var2 << "\n";
    }
};

class test2: public test
{
    public:
    void addition()
    {
        int var4 = getVar1();
        int var3 = var4 + var2;
        printf("%d + %d = %d\n", var4, var2, var3);
    }
};