## Bill of materials

![Foto ReServeBox](/img/Render_ReServeBox.png)
<p align="center">
</p>

## 1. Frame, Behuizing & Exterieur

> [!IMPORTANT]
> De behuizing is ontworpen om weerbestendig, vandalismebestendig en eenvoudig te reinigen te zijn in de publieke ruimte.

| Omschrijving | Materiaal / Specificatie | Aantal | Functie / Design Requirement |
|-------------|-------------------------|--------|-----------------------------|
| Hoofdframe & Buitenpanelen | Gepoedercoat plaatstaal (Kleur: Moss Green, matte afwerking) | Volgens modulaire opbouw | Dragende structuur, corrosiebestendig en professionele uitstraling. |
| Frontpanelen Lockers | Geborsteld Roestvrij Staal (RVS 316) | Volgens aantal kluizen | Hygiënisch oppervlak, vlekbestendig en weersbestendig. |
| Doorkijkvensters kluisjes | Gehard veiligheidsglas (Polycarbonaat optioneel) | Volgens aantal kluizen | Transparantie, gebruiker ziet direct de beschikbare producten en versheid. |
| Scharnieren & Bevestigingen | Zware RVS industriële scharnieren | Volgens aantal kluizen | Vandalismebestendigheid en intensief buitengebruik. |
| Belettering & Graphics | Hoogwaardig UV- en weersbestendig vinyl (Wit) | Volgens modulaire opbouw | Merkidentiteit (ReServeBox logo) en duidelijke herkenbaarheid. |

## 2. Interactie- & Bedieningspaneel (User Interface)

> [!IMPORTANT]
> De interface is gecentraliseerd om de cognitieve belasting te minimaliseren en de bruikbaarheid (P5–P95) te maximaliseren.

| Omschrijving | Materiaal / Specificatie | Aantal | Functie / Design Requirement |
|-------------|-------------------------|--------|-----------------------------|
| Feedback Display | Karakter LCD-scherm (Groen/Zwart met achtergrondverlichting, vandaalbestendig glas) | 1 | Geeft statusmeldingen weer (bijv. "Kluis geopend" of "Voer code in"). |
| Toetsenbord | Metalen matrix keypad (Numeriek 0-9, * , #) | 1 | Fysieke invoer van de unieke afhaalcode. |
| RFID / NFC Lezer | Ingebouwde contactloze sensor | 1 | Alternatieve authenticatie voor logistieke partners (bijv. Waste Warriors). |
| Instructieplaat | Geëtst aluminium paneel met 4-stappenplan (onder terminal) | 1 | Biedt beknopte, visuele en directe gebruiksinstructies. |

## 3. Elektronica & Actuatoren (Arduino-Architectuur)

> [!IMPORTANT]
> De functionele breakdown van de I/O-datastromen die de fysieke toegang regelen.

| Omschrijving | Materiaal / Specificatie | Aantal | Functie / Design Requirement |
|-------------|-------------------------|--------|-----------------------------|
| Centraal Besturingssysteem | Arduino (uno) Mega 2560 (of vergelijkbare industriële microcontroller) | 1 | Verwerkt I/O-signalen van het keypad, sensoren en stuurt de sloten aan. |
| Communicatiemodule | 4G/LTE IoT Shield (met simkaart) | 1 | Real-time synchronisatie van kluisstatus en codes met de server/app. |
| Elektronische Sloten | 12V Solenoïde magneetsloten (met feedback-switch) | 1 per kluis | Vergrendelt en ontgrendelt de compartimenten automatisch na succesvolle code-invoer. |
| Deursensoren | Magnetische reed-schakelaars | 1 per kluis | Monitort of een kluisje daadwerkelijk open of gesloten is voor statusupdates. |
| Status LED's | Dual-color LED's (Rood / Groen) | 2 per kluis | Visuele feedback die de beschikbaarheid van de kluis aangeeft (Groen = klaar, Rood = bezet). |
| Voedingsmodule | AC-DC 12V/5V Industriële Voeding (met back-up batterij/UPS) | 1 | Garandeert continue stroomtoevoer en werking bij stroomuitval. |

## 4. Compartimentering & Klimaatbeheersing

> [!IMPORTANT]
> Ontworpen om grote bulkstromen landbouwproducten te herbergen en te beschermen tegen de elementen.

| Omschrijving | Materiaal / Specificatie | Aantal | Functie / Design Requirement |
|-------------|-------------------------|--------|-----------------------------|
| Geïsoleerde Binnenwanden | Dubbelwandig RVS met EPS-isolatie | Volgens modulaire opbouw | Temperatuurstabilisatie en fysieke scheiding van compartimenten. |
| Ventilatieroosters | Vandaalbestendige lamellenroosters (met insectengaas) | 1 set (zijkant) | Passieve of actieve luchtcirculatie om condensatie en schimmel bij grondstoffen te voorkomen. |
| Uitneembare Binnenbakken | Voedselveilig HDPE kunststof (glad oppervlak) | 1 per kluis | Eenvoudig uit te nemen door de logistieke partner voor reiniging en hygiëne. |

### BOM Interface prototype

![Foto ReServeBox](/img/OPP.jpg)
<p align="center">
</p>

|Naam|Aantal| Foto|Prijs|Link|
|:---:|:---:|:---:|:---:|:---:|
|Aruino uno|1|![Arduino](/img/OIP.jpg)|€ 7,04|[Link](https://www.banggood.com/nl/For-UNOs-R3-13-in-1-Mini-DIY-Electronic-Starter-Kit-Arduinos-Circuit-Board-Electronics-Programmable-Engineering-Coding-Education-STEAM-p-2024096.html?cur_warehouse=CN&ID=6311493&rmmds=search)| 
|Breadboard|1|![Breadboard](/img/Breadboard.png)|ingebrepen bij arduino kit|[Link](https://www.banggood.com/nl/For-UNOs-R3-13-in-1-Mini-DIY-Electronic-Starter-Kit-Arduinos-Circuit-Board-Electronics-Programmable-Engineering-Coding-Education-STEAM-p-2024096.html?cur_warehouse=CN&ID=6311493&rmmds=search)| 
|Keypad ATtiny 1616|1|![Keypad](/img/Keypad.png)|€ 5,11|[Link](https://www.seeedstudio.com/Grove-12-Channel-Capacitive-Touch-Keypad-ATtiny1616-p-4068.html)|
|LCD Display 16x2|1|![Display](/img/Display.png)|€ 13,89|[Link](https://www.kiwi-electronics.com/nl/grove-16x2-lcd-zwart-op-geel-9931?search=lcd%20grove)|

Wiring schema:
![Schema](/img/Schema.png)

<p align="center">
</p>