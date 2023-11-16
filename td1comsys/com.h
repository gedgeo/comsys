#ifndef COM_H
#define COM_H

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
namespace Ui { class com; }
QT_END_NAMESPACE

class com : public QWidget
{
    Q_OBJECT

public:
    com(QWidget *parent = nullptr);
    ~com();

private slots:


    void on_pushButtonOuvrirPortSerie_clicked();

    void on_pushButtonEnvoyer_clicked();

    void on_comboBoxPort_currentIndexChanged(int index);

    void onQSerialPort_readyRead();

private:
    Ui::com *ui;
    QSerialPort lePortSerie;
};


#endif // COM_H
