#ifndef JANELA_H
#define JANELA_H

#include <iostream>
#include <classes.h>
#include <vector>
#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QFile>
#include <QString>
#include <string>
#include <QTextStream>

class Janela : public QMainWindow
{
    QPixmap *ImgPedra, *ImgPapel, *ImgTes;
    QGraphicsView *tela;
    QGraphicsScene *cena;
    std::vector<Objeto *> objetos;
    QString nome = "E:/Projeto/Projeto/projeto.txt";
    Q_OBJECT
public:
    explicit Janela(QWidget *parent = nullptr);

public slots:
    void escreve();
    void ler();
};

#endif // JANELA_H
