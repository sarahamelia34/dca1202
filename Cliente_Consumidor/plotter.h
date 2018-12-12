#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include<vector>

class Plotter : public QWidget
{
  Q_OBJECT
private:
  std::vector<double> tempos;
  std::vector<double> dados;
  float time;
public:
  /** @brief Construtor do Grafico
  **/
  explicit Plotter(QWidget *parent = 0);
  /** @brief Desenhando as  retas utilizando pares de pontos.
  **/
  void paintEvent(QPaintEvent *e);
  /** @brief Carrega os dados e mostra no gráfico
  **/
  void loadData(std::vector <double>,std::vector <double>);
};

#endif // PLOTTER_H
