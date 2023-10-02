#include "equipmentcatalogue.h"
#include "./ui_equipmentcatalogue.h"

EquipmentCatalogue::EquipmentCatalogue(QWidget *parent)
{
    ui = new Ui::MainWindow();
    ui->setupUi(this);

    ui->labelBrand->setText("Select compressor's type");
    ui->labelModel->setText("Select compressor's type");
    ui->labelPrice->setText("Select compressor's type");
    ui->labelDescrp->setWordWrap(true);
    ui->labelImage->setFixedSize(271, 99);
    index = 0;

    connect(ui->pushFET, SIGNAL(clicked()), this, SLOT(nextFET()));
    connect(ui->pushTUBE, SIGNAL(clicked()), this, SLOT(nextTUBE()));
    connect(ui->pushVCA, SIGNAL(clicked()), this, SLOT(nextVCA()));

    Compressor purpleMC77;
    purpleMC77.setBrand("Purple");
    purpleMC77.setModel("MC77");
    purpleMC77.setPrice("1800");
    purpleMC77.setDescription("Based on user feedback from the MC76, "
                              "the MC77 introduces a number of new improvements such as True Bypass, "
                              "improved stereo linking and a dedicated side chain insert.");
    purpleMC77.setImage(QPixmap(""));

    Compressor urei1176;
    urei1176.setBrand("Urei");
    urei1176.setModel("1176 ln");
    urei1176.setPrice("1780");
    urei1176.setDescription("The 1176 was meant to be a ‘true peak limiter’ with a very fast attack of up to 20 microseconds, "
                            "and lots of gain for a compressor - up to 45 dB.");
    urei1176.setImage(QPixmap(""));

    Compressor drawner1970dual;
    drawner1970dual.setBrand("Drawner");
    drawner1970dual.setModel("1970 DUAL");
    drawner1970dual.setPrice("2200");
    drawner1970dual.setDescription("The 1970 use the latest THAT Corporation technology "
                                   "in the 2 mic preamps to provide ultra clean, "
                                   "transparent and precise recordings that can be processed "
                                   "at a later stage using your favorite warming method, "
                                   "be it saturation, valve, transformer or tape. ");
    drawner1970dual.setImage(QPixmap(""));

    Compressor waWA76;
    waWA76.setBrand("Warm Audio");
    waWA76.setModel("WA76");
    waWA76.setPrice("1500");
    waWA76.setDescription("The classic '76 was a major breakthrough in limiter technology,"
                          " and used on hundreds of hit records since its inception");
    waWA76.setImage(QPixmap(""));

    Compressor igsVOLF;
    igsVOLF.setBrand("IGS");
    igsVOLF.setModel("VOLFRAM");
    igsVOLF.setPrice("1200");
    igsVOLF.setDescription("The Volfram is a 45dB transistor amplifier equipped with a remarkable limiter. "
                           "Compression is achieved with the FET transistors. "
                           "At extreme settings the Volfram adds some pleasant distortion to the output.");
    igsVOLF.setImage(QPixmap(""));

    FET.append(purpleMC77);
    FET.append(urei1176);
    FET.append(drawner1970dual);
    FET.append(waWA76);
    FET.append(igsVOLF);


    Compressor heritageTUBE;
    heritageTUBE.setBrand("Heritage");
    heritageTUBE.setModel("TUBESESSOR");
    heritageTUBE.setPrice("2100");
    heritageTUBE.setDescription("Analog excellence is achieved by combining an all tube-based amplification stage "
                                "with an outstanding UTC A10 input transformer replica by AMI, "
                                "as well as a custom all-silicon steel output transformer.");
    heritageTUBE.setImage(QPixmap(":/image/heritageTube.jpg"));


    Compressor chandlerRS660;
    chandlerRS660.setBrand("Chandler");
    chandlerRS660.setModel("RS660 MONO");
    chandlerRS660.setPrice("3200");
    chandlerRS660.setDescription("Built around the 6386 vacuum tube, the RS660 Compressor is meticulously tuned for a sound, "
                                 "and the result is a more efficient means to achieve the desired characteristics "
                                 "of the historic 660 and beyond.");
    chandlerRS660.setImage(QPixmap(":/image/chandlerTube.jpg"));

    Compressor ttCL1b;
    ttCL1b.setBrand("Tube-Tech");
    ttCL1b.setModel("CL 1B");
    ttCL1b.setPrice("1300");
    ttCL1b.setDescription("Its all tube design delivers smooth, musical compression without introducing harshness, "
                          "even when the needle is pegged.");
    ttCL1b.setImage(QPixmap(":/image/tubetechTube.jpg"));


    Compressor avalonVT;
    avalonVT.setBrand("Avalon");
    avalonVT.setModel("VT-737SP");
    avalonVT.setPrice("1560");
    avalonVT.setDescription("The opto compressor features a minimum signal path design with twin Class A vacuum tube triodes for gain matching.");
    avalonVT.setImage(QPixmap(":/image/avalonTube.jpg"));


    Compressor splITM;
    splITM.setBrand("SPL");
    splITM.setModel("IRON TUBE MASTERING");
    splITM.setPrice("2100");
    splITM.setDescription("Thanks to the especially conceived Mu-Metal iron transformers, "
                          "the signal of each channel is split across two different twin-triode tubes.");
    splITM.setImage(QPixmap(":/image/splTube.jpg"));

    TUBE.append(heritageTUBE);
    TUBE.append(chandlerRS660);
    TUBE.append(ttCL1b);
    TUBE.append(avalonVT);
    TUBE.append(splITM);


    Compressor overstVC;
    overstVC.setBrand("Overstayer");
    overstVC.setModel("Voltage Control");
    overstVC.setPrice("1200");
    overstVC.setDescription("Designed and built by audio genius Jeff Turzo, "
                            "a man responsible for countless high-end custom gear building projects for top producers.");
    overstVC.setImage(QPixmap(":/image/overstayer.jpg"));

    Compressor vertigoVSC;
    vertigoVSC.setBrand("Vertigo");
    vertigoVSC.setModel("VSC-2");
    vertigoVSC.setPrice("1800");
    vertigoVSC.setDescription("Hand-made in Germany with a complete cut-no-corners philosophy, "
                              "this is as good as it gets in terms of transparency, detail, "
                              "refinement and musicality.");
    vertigoVSC.setImage(QPixmap(":/image/vertigo.jpg"));


    Compressor smC2;
    smC2.setBrand("Smart Research");
    smC2.setModel("C2");
    smC2.setPrice("980");
    smC2.setDescription("Inspired by the Oxford, England originators of this compressor style, "
                        "it brings its own set of tricks to the party with its super punchy "
                        "and crazy Crush feature and more adjustability than the originals.");
    smC2.setImage(QPixmap(":/image/smart_research.jpg"));


    Compressor sslGBUS;
    sslGBUS.setBrand("SSL");
    sslGBUS.setModel("G-BUS");
    sslGBUS.setPrice("2300");
    sslGBUS.setDescription("The newest rendition of a long legacy involving "
                           "the best VCA compressor designs this planet has ever seen.");
    sslGBUS.setImage(QPixmap(":/image/ssl.jpg"));


    Compressor api2500;
    api2500.setBrand("API");
    api2500.setModel("2500");
    api2500.setPrice("1670");
    api2500.setDescription("Tight, punchy, warm and in your face. "
                           "The API sound never fails to excite and this is no exception.");
    api2500.setImage(QPixmap(":/image/api.jpg"));

    VCA.append(overstVC);
    VCA.append(vertigoVSC);
    VCA.append(smC2);
    VCA.append(sslGBUS);
    VCA.append(api2500);
}

EquipmentCatalogue::~EquipmentCatalogue()
{
    delete ui;
}

void EquipmentCatalogue::nextFET()
{
    auto it = FET.at(index);
    ui->labelGetBrand->setText(it.brand());
    ui->labelGetModel->setText(it.model());
    ui->labelGetPrice->setText(it.price());
    ui->labelDescrp->setText(it.description());
    index++;

    if (index == FET.size())
        index = 0;
}

void EquipmentCatalogue::nextTUBE()
{
    auto it = TUBE.at(index);
    ui->labelGetBrand->setText(it.brand());
    ui->labelGetModel->setText(it.model());
    ui->labelGetPrice->setText(it.price());
    ui->labelDescrp->setText(it.description());
    index++;

    if (index == FET.size())
        index = 0;
}

void EquipmentCatalogue::nextVCA()
{
    auto it = VCA.at(index);
    ui->labelGetBrand->setText(it.brand());
    ui->labelGetModel->setText(it.model());
    ui->labelGetPrice->setText(it.price());
    ui->labelDescrp->setText(it.description());
    index++;

    if (index == FET.size())
        index = 0;

}
