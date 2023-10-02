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

public slots:
    void nextFET();
    void nextTUBE();
    void nextVCA();

signals:

private:
    Compressor m_compressor;
    QList<Compressor> VCA;
    QList<Compressor> FET;
    QList<Compressor> TUBE;
    int index;
    Ui::MainWindow *ui;

};

#endif // EQUIPMENTCATALOGUE_H
