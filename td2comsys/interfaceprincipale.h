#ifndef INTERFACEPRINCIPALE_H
#define INTERFACEPRINCIPALE_H

#include <QWidget>
#include <QCoreApplication>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QPushButton>
#include <QComboBox>
#include <QLineEdit>
#include <QList>
#include <QDebug>
#include <QIODevice>

QT_BEGIN_NAMESPACE
namespace Ui { class InterfacePrincipale; }
QT_END_NAMESPACE

class InterfacePrincipale : public QWidget
{
    Q_OBJECT

public:
    InterfacePrincipale(QWidget *parent = nullptr);
    ~InterfacePrincipale();

private:
    Ui::InterfacePrincipale *ui;
};
#endif // INTERFACEPRINCIPALE_H
