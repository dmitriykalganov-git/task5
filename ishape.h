#pragma once

#include "Color.h"
#include "iview.h"

//------------------- View form------------

class IShape : public IView 
{
public:
    virtual ~IShape() {}



    /// Set shape's color
    void SetColor(Color _color)
    {
        color = _color;
    }

private:
    Color color;
};
