class Base {
public:
    virtual void mf1() const;
    virtual void mf2(int x);
    virtual void mf3() &;
    virtual void mf4() const;

};

class Derived : public Base {
    virtual void mf1() const override;
    virtual void mf2(int x) override;
    virtual void mf3() & override;
    void mf4() const override;
};

template<typename T>
void func(const T& param);

int main(int argc, char const *argv[])
{
    
    return 0;
}
