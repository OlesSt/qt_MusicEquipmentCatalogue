#include <QApplication>

#include "equipmentcatalogue.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EquipmentCatalogue eq;
    eq.show();

    return a.exec();
}
