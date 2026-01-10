#pragma once

#include <memory>
#include <vector>
#include <string>

#include "model.h"


class Document
{
public:
    /// Clears a new document.
    void Clear()
    {
        shapes.clear();
    }

    /// Import a document from the file.
    void Import(const std::string& fileName)
    {
    }

    /// Export a document to the file.
    void Export(const std::string& fileName)
    {
    }

    /// Adds a shape.
    void AddShape(std::shared_ptr<Observable> shape)
    {
        shapes.push_back(shape);
    }

private:
    std::vector<std::shared_ptr<Observable>> shapes;
};
