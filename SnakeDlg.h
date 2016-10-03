#ifndef SNAKEDLG_H
#define SNAKEDLG_H

#include <QDialog>
#include <QImage>
#include <QList>
#include <QLabel>
#include <QTimer>

namespace Ui {
class SnakeDlg;
}

class SnakeDlg : public QDialog
{
    Q_OBJECT
    
public:
    explicit SnakeDlg(QWidget *parent = 0);
    ~SnakeDlg();

private:
    // show event
    void showEvent (QShowEvent*);
    // paint event
    void paintEvent (QPaintEvent*);
    // key press event
    void keyPressEvent (QKeyEvent* event);

    // initialize the game
    void initGame (void);
    // make food
    QLabel* makeFood (int x = -1, int y = -1);
    // create random numbers within given range
    int rand (int x, int y);
    // round 
    int round (int x, int y);
    // calculate the next step
    bool nextStep (QPoint& ptStep) const;
    // check if pos valid
    bool validPos (QPoint const& ptPos) const;
    // update score board
    void updateScoreboard (void) const;

private slots:
    // crawl expired signal
    void crawlExpired (void);

private:
    Ui::SnakeDlg *ui;

    // directions
    typedef enum tag_Direction {
        EDIR_UP,   // up
        EDIR_DOWN, // down
        EDIR_LEFT, // left
        EDIR_RIGHT // right
    }   EDIR;

    QImage           m_imgAction;  // background image for active area
    QList<QLabel*>   m_lstSnake;   // linked list for snake
    QLabel*          m_labFood;    // food
    EDIR             m_eDir;       // directions
    static const int s_nStep = 20; // step len
    QTimer           m_tmrCrawl;   // crawl timer
    unsigned int     m_uScore;     // score
};

#endif // SNAKEDLG_H
