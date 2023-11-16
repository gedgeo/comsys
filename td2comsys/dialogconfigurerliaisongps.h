#ifndef DIALOGCONFIGURERLIAISONGPS_H
#define DIALOGCONFIGURERLIAISONGPS_H

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

class DialogConfigurerLiaisonGPS : public QWidget
{
    Q_OBJECT
public:
    explicit DialogConfigurerLiaisonGPS(QWidget *parent = nullptr);

signals:

};

#endif // DIALOGCONFIGURERLIAISONGPS_H
