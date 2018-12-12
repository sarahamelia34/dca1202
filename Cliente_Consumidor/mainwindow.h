#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

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
    /** @brief Realiza conexão com o servidor
    **/
  void tcpConnect(void);
  /** @brief Desconecta do servidor
  **/
  void tcpDisconnect(void);
  /** @brief Captura dados do servidor de acordo com o tempo 
  **/
  void getData(void);
  /** @brief Captura de dados
  **/
  void stopData(void);
  /** @brief Exibe lista dos clientes conectados
  **/
  void updateIp(void);
  /** @brief Determina o tempo da captura de dados definido
  **/
  void timerEvent(QTimerEvent *e);

private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  int idTimer;
};

#endif // MAINWINDOW_H
