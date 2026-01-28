#pragma once

#include <iostream>
#include "model.h"
#include "line_model.h"
#include "circle_model.h"

//--------------- Controller ------------

class IController
{
public:
    virtual ~IController() {}

    virtual void start() = 0;
};
