#ifndef EQUIPMENTCATALOGUE_H
#define EQUIPMENTCATALOGUE_H

#include <QMainWindow>
#include <QApplication>

#include "compressor.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class EquipmentCatalogue : public QMainWindow
{
    Q_OBJECT
public:
    EquipmentCatalogue(QWidget *parent = nullptr);
    ~EquipmentCatalogue();

signals:

private:
    Compressor m_compressor;
    QList<Compressor> VCA;
    QList<Compressor> FET;
    QList<Compressor> TUBE;
    Ui::MainWindow *ui;

};

#endif // EQUIPMENTCATALOGUE_H
