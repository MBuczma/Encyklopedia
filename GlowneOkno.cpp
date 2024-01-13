#include "GlowneOkno.h"
#include "ui_GlowneOkno.h"
#include <QMediaPlayer>
#include <QFileInfo>
#include <QThread>
#include <QAudioOutput>
#include <windows.h>


GlowneOkno::GlowneOkno(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GlowneOkno)
{
    ui->setupUi(this);
    connect(ui->pushButton1, SIGNAL(clicked()), this, SLOT(play()));
}

GlowneOkno::~GlowneOkno()
{
    delete ui;
}

void GlowneOkno::play()
{
    static bool gra=false;

    QMediaPlayer* player = new QMediaPlayer;
    QAudioOutput* audioOutput = new QAudioOutput;

    audioOutput->setVolume(1.0); // Ustawienie głośności na 100%
    player->setAudioOutput(audioOutput); // Powiązanie odtwarzacza z wyjściem audio
    player->setSource(QUrl("qrc:/music/music/song.mp3"));

    if(gra==false){
        player->play();
        ui->pushButton1->setText("Zatrzymaj");
        gra=true;
    }
    else
    {
        gra=false;
        player->stop();
        ui->pushButton1->setText("Graj");
    }

    connect(player, &QMediaPlayer::errorOccurred, [](QMediaPlayer::Error error) {
        qDebug() << "Błąd odtwarzania: " << error;
    });
    connect(player, &QMediaPlayer::playbackStateChanged, [](QMediaPlayer::PlaybackState state) {
        if (state == QMediaPlayer::PlayingState) {
            qDebug() << "Muzyka odtwarzana";
        }
    });



}

