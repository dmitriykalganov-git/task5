#pragma once

#include "Color.h"
#include "View.h"



class IView
{
public:
    virtual ~IView() {}

    /// Set shape's color
    void SetColor(Color _color)
    {
        color = _color;
    }

private:
    Color color;
};
