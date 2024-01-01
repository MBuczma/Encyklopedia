#include "GlowneOkno.h"
#include "ui_GlowneOkno.h"
#include <QMediaPlayer>
#include <QFileInfo>
#include <QAudioOutput>


GlowneOkno::GlowneOkno(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GlowneOkno)
{
    ui->setupUi(this);
}

GlowneOkno::~GlowneOkno()
{
    delete ui;
}

void GlowneOkno::on_pushButton_clicked()
{
    QMediaPlayer* player = new QMediaPlayer;
    QAudioOutput* audioOutput = new QAudioOutput;

    audioOutput->setVolume(1.0); // Ustawienie głośności na 100%
    player->setAudioOutput(audioOutput); // Powiązanie odtwarzacza z wyjściem audio
    player->setSource(QUrl("qrc:/music/music/song.mp3")); // Zastąp odpowiednią ścieżką
    player->play();
    connect(player, &QMediaPlayer::errorOccurred, [](QMediaPlayer::Error error) {
        qDebug() << "Błąd odtwarzania: " << error;
    });
    connect(player, &QMediaPlayer::playbackStateChanged, [](QMediaPlayer::PlaybackState state) {
        if (state == QMediaPlayer::PlayingState) {
            qDebug() << "Muzyka odtwarzana";
        }
    });
}

