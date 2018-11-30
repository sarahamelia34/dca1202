#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  
public slots:
    /**
    * @brief Realiza a conexão com o servidor
    */
    void tcpConnect();
    /**
    * @brief Desconecta do servidor
    */
    void tcpDisconnect();
    /**
    * @brief Envia os dados
    */
    void putData();
    /**
    * @brief Procura o ip fornecido pelo cliente
    */
    QString getHost();
    /**
    * @brief Para o envio dos dados
    */
    void stopData();
    /**
    * @brief Repete o envio de dados usando o intervalo de tempo definido pelo cliente
    */
    void timerEvent(QTimerEvent *e);
private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  int idTimer;

};

#endif // MAINWINDOW_H
