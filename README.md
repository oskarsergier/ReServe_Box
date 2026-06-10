# ReServeBox
ReServeBox, een lokaal opslagpunt voor voedseloverschotten die nog eetbaar zijn.

🛠️ Built by ``Victor Raes``, ``Bas Matthys`` & ``Oskar Sergier``   
🔥 Supervised by ``prof. dr. Bas Baccarne``, ``Yannick Christiaens`` & ``Wouter Devriese`` 
🌱 Grown at ``Ghent University`` 🏛️ ``Industrial Design Engineering`` ([project overview](https://github.com/basbaccarne/human-centered-design))       

*05/05/2026 van de laatste update*   

# Projectsamenvatting: 
## 1. De Problemstatement
Voedselverspilling is een hardnekkig duurzaamheidsprobleem dat zich niet alleen bij de consument, maar juist ook aan het begin van de keten afspeelt: bij de boeren en agro-groothandels. Grote partijen perfect eetbare grondstoffen en seizoensproducten (zoals overschotten aan bloemkolen of aardappelen) geraken vaak niet verkocht en dreigen verloren te gaan. Bestaande initiatieven, zoals Waste Warriors, proberen dit op te lossen door consumenten rechtstreeks bij de boer te laten oogsten of inkopen. Dit model stuit echter op een geografische en logistieke barrière: voor stedelijke consumenten is het praktisch en ecologisch niet haalbaar om grote afstanden af te leggen naar het platteland om deze overschotten te redden. Hierdoor blijft een enorm potentieel aan duurzame impact onbenut.

## 2. De Oplossing: ReServeBox
De ReServeBox is een phygital logistieke oplossing die de kloof overbrugt tussen rurale voedseloverschotten en stedelijke consumenten. Het concept bestaat uit een grootschalig, geautomatiseerd lockersysteem dat strategisch wordt geplaatst op drukke knooppunten (zoals stations of randstedelijke hubs) in de twintig grootste steden van Vlaanderen/België.

In plaats van individuele winkelpakketten te distribueren, fungeert de ReServeBox als een gecentraliseerd afhaalpunt voor bulkoverschotten van boeren en groothandels die via platformen zoals Waste Warriors worden gecentraliseerd. Stedelingen krijgen zo op een laagdrempelige manier toegang tot verse, onbewerkte grondstoffen die rechtstreeks van het veld komen, tegen een minieme kost.

## 3. Functionele Architectuur & Proof of Interaction
Het ReServeBox-ecosysteem combineert een robuuste fysieke infrastructuur met een slimme digitale laag om een frictieloze en betrouwbare gebruikerservaring te garanderen:

De Digitale Interface (App): Gebruikers zien via een eenvoudige applicatie in real-time welke grondstoffen beschikbaar zijn in de stedelijke lockers, inclusief informatie over de herkomst (de boer), de geoogst-datum en de restvoorraad. Na een digitale reservatie ontvangt de gebruiker een unieke toegangscode.

De Fysieke Locker (Hardware): De fysieke box is een modulair en geconditioneerd lockersysteem dat ontworpen is op basis van strikte antropometrische en ergonomische analyses (geschikt voor een brede doelgroep van P5 tot P95). De hardware wordt gestuurd door een industrieel microcontrollersysteem (Arduino-architectuur) gekoppeld aan elektronische sloten en een touchpad.

Gebruikersflow: Bij aankomst voert de stedelijke consument zijn unieke code in op het touchpad, waarna het specifieke compartiment binnen één seconde ontgrendelt. Sensoren registreren de opening en sluiting van de deur, waarna de status in de app direct live wordt bijgewerkt.

## 4. Duurzame en Maatschappelijke Impact
Met deze unieke benadering lost ReServeBox de logistieke 'last-mile' op voor agro-overschotten. Het geeft producten die anders ondergeploegd of weggegooid zouden worden een tweede leven in de stad. Stedelingen die bewust willen consumeren maar niet over de mobiliteit beschikken om naar een boerderij te rijden, krijgen een laagdrempelig en betrouwbaar instrument in handen om actief bij te dragen aan een duurzamer klimaat. Het resultaat is een efficiëntere voedselketen, een eerlijke bestemming voor de oogst van de boer, en een tastbare reductie van de ecologische voetafdruk op wijkniveau.


<p align="center">
</p>

* [Extra info pivot](/reports%20and%20protocols/VP.pdf)

## Introductie

Voedselverspilling is een van de grootste ecologische en economische uitdagingen van deze tijd. Hoewel veel initiatieven zich richten op het einde van de keten — de verspilling bij de supermarkt of de consument thuis —, blijft een gigantische stroom aan voedseloverschotten aan het begin van de keten onderbelicht. Bij boeren en agro-groothandels gaan dagelijks tonnen perfect eetbare seizoensproducten en basisgrondstoffen (zoals overschotten aan bloemkolen, wortelen of aardappelen) verloren. Dit gebeurt simpelweg omdat overproductie, esthetische afwijkingen of logistieke fricties de reguliere distributiekanalen blokkeren. Organisaties zoals Waste Warriors proberen dit gat te dichten door consumenten rechtstreeks bij de boer te laten oogsten of inkopen. Dit model stuit echter op een hardnekkige geografische drempel: voor een bewoner in een stedelijke kern is het praktisch, logistiek en ecologisch niet haalbaar om grote afstanden af te leggen naar het platteland om deze overschotten te redden. Hierdoor blijft een enorm potentieel aan duurzame impact onbenut.

Het ReServeBox-project introduceert een phygital logistieke oplossing die de kloof tussen rurale voedseloverschotten en de stedelijke consument effectief overbrugt. In plaats van te focussen op kleinschalige, risicogevoelige buurtinitiatieven, richt dit concept zich op een netwerk van geautomatiseerde, geconditioneerde 'smart hubs'. Deze worden strategisch geplaatst op hoogfrequente, randstedelijke knooppunten en stationsomgevingen in de twintig grootste steden van Vlaanderen en België. Via een geïntegreerd ecosysteem — bestaande uit een fysieke, modulaire locker en een realtime mobiele applicatie — worden bulkstromen van landbouwers gecentraliseerd en op een laagdrempelige, betaalbare manier aangeboden aan de stadsbewoner. De ReServeBox transformeert zo de fysieke afstand tot het platteland in een frictieloze afhaalervaring in de stad.

Om tot deze onderbouwde productservice-architectuur te komen, werd een iteratief human-centered designproces doorlopen. Binnen dit proces zijn methodieken zoals grondige benchmarking, morfologische matrixanalyses en diepgaande stakeholder-interviews (waaronder experts uit de sector zoals Jonas Mallisse en lokale winkelverantwoordelijken) ingezet. Hierbij is specifiek onderzocht hoe een onbemande interface vertrouwen kan opwekken bij de gebruiker, hoe de fysieke ergonomie en bereikbaarheid (P5–P95) geoptimaliseerd kunnen worden via Siemens NX-comfortanalyses, en hoe data-interactie via een Arduino-gestuurde hardware-architectuur de betrouwbaarheid en realtime voorraadstatus van het systeem kan garanderen.

De boundary conditions van het ReServeBox-project zijn scherp gedefinieerd: de fysieke hubs moeten extreem robuust, weerbestendig, hygiënisch en onderhoudsarm zijn om stand te houden in de publieke ruimte. Daarnaast moet de digitale interface de perceptie van voedselonveiligheid en logistieke complexiteit volledig wegnemen. De technologie fungeert hierbij niet als barrière, maar als een transparante, intuïtieve en betrouwbare tussenlaag die stedelingen activeert om op een grootschalige manier bij te dragen aan een duurzamer klimaat.


## Inhoudstafel

1. [Methodologie](./docs/methodologie.md)
2. [Discovery](./docs/discovery.md)
3. [Definition](./docs/definition.md)
4. [Develop](./docs/develop.md)
5. [Design Requirements](./docs/design_requirements.md)
6. [Bill of materials](./docs/bom.md)

## Kritische reflectie
Het eerste semester van ReServeBox bood een waardevolle kennismaking met een gebruiksgericht ontwerpproces rond een complex duurzaamheidsvraagstuk. Door het combineren van deskresearch, benchmarking, enquêtes en interviews werd het probleem van voedselverspilling op wijkniveau gedefinieerd. Deze aanpak maakte het mogelijk om het vraagstuk niet enkel technisch, maar ook sociaal en gedragsmatig te benaderen. Tegelijkertijd bracht dit ook een uitdaging met zich mee namelijk door de grote hoeveelheid inzichten was het belangrijk om focus te behouden.

Een belangrijke sterkte van het traject was de iteratieve werkwijze, waarbij inzichten uit de discoveryfase rechtstreeks werden vertaald naar concrete ontwerpkeuzes in de definitionfase. De inzet van storyboards, prototypes en materiaalonderzoek zorgde voor diverse inzichten naar een realiseerbaar concept. Vooral het werken met fysieke prototypes hielp om zaken af te toetsen en problemen vroegtijdig zichtbaar te maken.

Toch werd duidelijk dat sommige keuzes in een vroege fase voornamelijk conceptueel onderbouwd zijn en nog verder gevalideerd moeten worden in realistische contexten. Het ontbreken van uitgebreide gebruikerstesten in een echte buurtomgeving vormt hierbij een belangrijke beperking. De verworven inzichten, ontwerpvereisten en materiaalkeuzes vormen een helder vertrekpunt voor verdieping, technische uitwerking en validatie in het tweede semester.

## Noot inzake het gebruik van AI
In dit project werd AI gebruikt voor het genereren van afbeeldingen en het controleren van de teksten op zinsbouw en schrijffouten.

## Bijlagen
### Discovery
* Benchmarking (N=10)
  * [Protocol](/reports%20and%20protocols/RP1.1.pdf)
  * [Rapport](/reports%20and%20protocols/R1.1.pdf)
* Interviews (N=3)
  * [Protocol Initiatiefnemer](/reports%20and%20protocols/IPI1.1.pdf)
  * [Rapport Initiatiefnemer](/reports%20and%20protocols/IRI1.1.pdf)
  * [Protocol Wijkbewoner](/reports%20and%20protocols/IPW1.1.pdf)
  * [Rapport Wijkbewoner 1](/reports%20and%20protocols/IRW1.1.pdf)
  * [Rapport Wijkbewoner 2](/reports%20and%20protocols/IRW1.2.pdf)
* Enquête (N=58)
  * [Protocol](/reports%20and%20protocols/RE1.1.pdf)
  * [Rapport](/reports%20and%20protocols/REA1.1.pdf)
    
### Definition
* Storyboard (N=2)
  * [Storyboard](/img/STB%20DEF%20SAMEN.png)
* Interface (N=2)
  * [Interface](/img/IF%20SAMEN.png)
* Prototype (N=2)
  * [Prototype](/img/PT%20SAMEN.png)
* Materiaal
  * [Materiaal Studie](/reports%20and%20protocols/MO.pdf)
* User testing wave 1 (N=5)
  * [Protocol Wijkbewoner](/reports%20and%20protocols/IP2.1%20W1.pdf)
  * [Protocol interface](/reports%20and%20protocols/IP%20I.pdf)
  * [Rapport Wijkbewoner 1](/reports%20and%20protocols/IR1%20W1.pdf)
  * [Rapport Wijkbewoner 2](/reports%20and%20protocols/IR2%20W1.pdf)
  * [Rapport interface 1](/reports%20and%20protocols/IR1%20I.pdf)
  * [Rapport interface 2](/reports%20and%20protocols/IR2%20I.pdf)
  * [Conclusie interface 1,2](/reports%20and%20protocols/IR%20CI%2012.pdf)
  * [Rapport interface 3](/reports%20and%20protocols/IR%203%20IE.pdf)
* User testing wave 2 (N=5)
  * [Protocol Financierder](/reports%20and%20protocols/IP2.1%20W2.pdf)
  * [Rapport Financierder 1](/reports%20and%20protocols/IR1%20W2.pdf)
  * [Rapport Financierder 2](/reports%20and%20protocols/IR2%20W2.pdf)
  * [Rapport Financierder 3](/reports%20and%20protocols/IR3%20W2.pdf)
  * [Rapport Financierder 4](/reports%20and%20protocols/IR4%20W2.pdf)
  * [Rapport Financierder 5](/reports%20and%20protocols/IR5%20W2.pdf)
* Cad model
  * [Prototype cad](/cad/ReServeBox.prt)
### Develop 1
* Validatie Pivot
  * [Pivot](/reports%20and%20protocols/VP.pdf)
* MVP
  * [Rapport MVP](/reports%20and%20protocols/MVP.pdf)
* App test (N=6)
  * [App](/reports%20and%20protocols/PA.pdf)
  * [Rapport App test 1](/reports%20and%20protocols/D1AR1.pdf)
  * [Rapport App test 2](/reports%20and%20protocols/D1AR2.pdf)
  * [Rapport App test 3](/reports%20and%20protocols/D1AR3.pdf)
  * [Rapport App test 4](/reports%20and%20protocols/D1AR4.pdf)
  * [Rapport App test 5](/reports%20and%20protocols/D1AR5.pdf)
  * [Rapport App test 6](/reports%20and%20protocols/D1AR6.pdf)
  * [Rapport App samenvatting](/reports%20and%20protocols/D1ARS.pdf)
* Interviews (N=1)
  * [Interview protcol Cubby](/reports%20and%20protocols/IPC.pdf)
  * [Interview rapport Cubby](https://cubby.be/)
* User flow
  * [User flow](/reports%20and%20protocols/UFR.pdf)
* Network value
  * [Network value](/img/NV.png)
* Storyboard (N=2)
  * [Storyboard 1](/img/STB1.D1.png)
  * [Storyboard 2](/img/STB2.D1.png)
### Develop 2
* Arduino (N=6)
  * [Testprotocol Arduino](/reports%20and%20protocols/TPA.pdf)
  * [Rapport Arduino zonder display 1](/reports%20and%20protocols/TPAZ1.pdf)
  * [Rapport Arduino zonder display 2](/reports%20and%20protocols/TPAZ2.pdf)
  * [Rapport Arduino zonder display 3](/reports%20and%20protocols/TPAZ3.pdf)
  * [Rapport Arduino met display 1](/reports%20and%20protocols/TPAM1.pdf)
  * [Rapport Arduino met display 2](/reports%20and%20protocols/TPAM2.pdf)
  * [Rapport Arduino met display 3](/reports%20and%20protocols/TPAM3.pdf)
* Lockersysteem
  * [Prototype Locker](/cad/kluisjes.prt)
  * [Prototype interface locker](/cad/reserve%20box%20controle.prt)
  * [Locker interface voor testen](/cad/interface%20van%20de%20reserve.prt)
  * [Antropometrische analyse](/reports%20and%20protocols/Antropometrische%20analyse.pdf)
* App (N=2)
  * [App voor Too Good To Go](https://www.figma.com/make/JQcTcU4Be1uQNL2V1ulXEz/Untitled?p=f&t=8YItCzS4Ch5X5GUG-0)
  * [Aanpassingen app gebruiker](https://www.figma.com/make/J6ychj6AkGgcx02CEtZITY/Automated-Food-Pickup-App?t=z45hhVviTivWGiIb-1)

* Interview Too Good To Go
  * [Protocol](/reports%20and%20protocols/IP_TGTG.pdf)
  * [Rapport]()

* Ergonomie Motion Sensoren
  * [Analyses]()

### Develop 3
* CMF
  * [CMF analyse](/reports%20and%20protocols/CMF.pdf)
* CMF Test
  * [Protocol](/reports%20and%20protocols/PCMF.pdf)
  * [Test 1](/reports%20and%20protocols/ICMF1.pdf)
  * [Test 2](/reports%20and%20protocols/ICMF2.pdf)
  * [Test 3](/reports%20and%20protocols/ICMF3.pdf)

* Render CMF
  * [Render 1](/img/CMF_R1.png)
  * [Render 2](/img/CMF_R2.png)
  * [Render 3](/img/CMF_R3.png)
## Licentie 

This repository contains both software and design materials created as part of an industrial design engineering project at Ghent University.

- **Software and code:** [MIT License](./LICENSE-MIT)  
- **Design, documentation, CAD, and media:** [CC BY 4.0 License](./LICENSE)
  
You are free to reuse and build upon this work, both commercially and non-commercially, as long as proper attribution is given to the original authors.

## Bronnen
  [^1]: Technical Platform on the Measurement and Reduction of Food Loss and Waste | Food and Agriculture Organization of the United Nations. (z.d.). FoodLossWaste. https://www.fao.org/platform-food-loss-waste/en/

  [^2]: Geffen, L. van, Sijtsema, S., & de Winter, M.
  Reducing Food Waste at Home | European Consumer Insights. Rapport van Wageningen University & Research. https://edepot.wur.nl/530990

  [^3]: Thomas, G., & Ritter, T.
  Community Fridges: Exploring the Social Dynamics and Safety Challenges. Journal of Consumer Policy. https://link.springer.com/article/10.1007/s10603-022-09513-7

  #### Keypad
  <a id= "Keypad"></a>Grove 12 channel Capacitive Touch Keypad (ATTINY1616) | SeEED Studio Wiki. (2023, 19 januari). https://wiki.seeedstudio.com/Grove-12-Channel-Capacitive-Touch-Keypad-ATtiny1616-/

  #### Display
  Grove - 16x2 LCD | Seeed Studio Wiki. (2023, 7 januari). https://wiki.seeedstudio.com/Grove-16x2_LCD_Series/

  #### Cubby
  Cubby. (z.d.). https://cubby.be/ 

  #### DINED Anthropometric Database, TU Delft,
  https://dined.io.tudelft.nl/en/database/introduction

  #### Waste Warriors
  Home - Waste Warriors. (2026, 10 juni). Waste Warriors. https://wastewarriors.be/ 
