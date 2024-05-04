    class A
    {
        int height;
        int width;

    public:
        A(int h = 0, int w = 0)
        {
            height = h;
            width = w;
        }
    };

    int main()
    {
        A *a = new A(10, 20);
        delete a;
        A *b = new A;
        delete b;
    }
