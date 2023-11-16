#include "com.h"
#include "ui_com.h"

com::com(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::com)
{
    ui->setupUi(this);
    for(const auto &info : QSerialPortInfo::availablePorts() ) // foreach
    {
            qDebug() << info.portName();
            ui->comboBoxPort->addItem(info.portName());
    }
    connect(&lePortSerie,
            &QSerialPort::readyRead,
            this,
            &com::onQSerialPort_readyRead);

}

com::~com()
{

    delete ui;
}




void com::on_pushButtonOuvrirPortSerie_clicked()
{

    if (lePortSerie.open(QIODeviceBase::ReadWrite)){
        ui->textEditTexteRecu->append("ouverture port ok");
    }
    else
    {
        ui->textEditTexteRecu->append("ouverture port pas ok");
    }
}


void com::on_pushButtonEnvoyer_clicked()
{
    lePortSerie.write(ui->lineEditTexteAEnvoyer->text().toLatin1());

}


void com::on_comboBoxPort_currentIndexChanged(int index)
{
    if (index!=0)
    {
        lePortSerie.setPortName(ui->comboBoxPort->currentText());
        lePortSerie.setBaudRate(QSerialPort::Baud9600);
        lePortSerie.setDataBits(QSerialPort::Data8);
        lePortSerie.setParity(QSerialPort::NoParity);
        lePortSerie.setFlowControl(QSerialPort::NoFlowControl);
        lePortSerie.setStopBits(QSerialPort::OneStop);
    }
}

void com::onQSerialPort_readyRead()
{
    QByteArray msgRecu;
    msgRecu=lePortSerie.readAll();

    ui->textEditTexteRecu->append(msgRecu);

}

