#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }
    //my functions
    virtual void setVal1 (int value1);
    virtual void setStep (int value2);
protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
