#pragma once

#include <iostream>
#include "document.h"

//--------------- Controller ------------

class ISaveData
{
public:
    virtual ~ISaveData() {}

    void save(Document doc);
};

class SaveFile : public ISaveData {

    public: void save(Document doc) {
        printf("Сохраняем документ в файл: doc.cdrw \n");
    }
};

class SaveDatabase : public ISaveData {
    
    public : void save(Document doc) {
        printf("Сохраняем документ в Базу данных \n");
    }
};
