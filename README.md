link do projeto: https://wokwi.com/projects/382305113701890049

Projeto PlantON com ESP32: Registro Automático de Plantão e Notificação de Oportunidades

Introdução:
O projeto PlantON, baseado no ESP32, visa otimizar a gestão de plantões hospitalares, proporcionando uma solução inteligente para o registro automático da presença de médicos e a notificação de oportunidades de plantão disponíveis. Com a integração de sensores de presença e temperatura, o ESP32 se torna uma peça fundamental para garantir a eficiência e flexibilidade na alocação de profissionais médicos.

Funcionalidades Principais:

Registro Automático de Plantão:
Utilizando um sensor de presença conectado ao ESP32, o sistema realiza o registro automático da entrada e saída de médicos nos plantões. Isso gera automaticamente registros precisos de presença, fornecendo informações valiosas sobre a duração do plantão de cada médico.

Notificação de Plantões Disponíveis:
Quando um plantão está disponível, o sistema envia notificações para médicos cadastrados, informando sobre a oportunidade de plantão. Essa funcionalidade proporciona flexibilidade aos profissionais médicos na escolha e agendamento de plantões compatíveis com suas agendas.

Lógica do Código:
O ESP32, programado com Arduino, utiliza sensores de presença e temperatura para monitorar o ambiente do plantão. A lógica do código é projetada para:
- Detecção de Presença: O sensor de presença conectado ao ESP32 detecta a presença de médicos no plantão.
- Registro Automático: O sistema inicia automaticamente o registro do plantão quando um médico entra, gerando dados precisos de entrada e saída.
- Notificação de Plantões Disponíveis: Quando um plantão fica vago, o sistema envia notificações aos médicos interessados, proporcionando uma abordagem proativa na alocação de profissionais.

Benefícios:
- Eficiência na Alocação: O registro automático simplifica a gestão de plantões, reduzindo a carga administrativa associada ao controle manual de presenças.
- Flexibilidade para Médicos: A notificação de plantões disponíveis oferece aos médicos a flexibilidade de escolher e agendar plantões de acordo com suas preferências e disponibilidade.
- Otimização de Recursos: O monitoramento de temperatura contribui para a manutenção de condições ambientais adequadas no plantão, garantindo o conforto dos profissionais e pacientes.

Conclusão:
O Projeto PlantON, impulsionado pelo ESP32, representa uma solução inovadora para a gestão eficiente de plantões hospitalares. Ao automatizar o registro de presenças e notificar oportunidades de plantão, o sistema visa proporcionar uma abordagem mais dinâmica e flexível na alocação de profissionais médicos, contribuindo para um ambiente hospitalar mais eficaz e adaptável.

Requisitos de Hardware:
- ESP32
- Sensor de Presença (por exemplo, PIR - Passive Infrared Sensor)
- Conexão à Internet (Wi-Fi)

Configuração do Ambiente de Desenvolvimento:
Arduino IDE:
1. Certifique-se de ter a Arduino IDE instalada em seu computador.
2. Instale as bibliotecas necessárias, como "ArduinoJson" e "EspMQTTClient", utilizando o Gerenciador de Bibliotecas da Arduino IDE.

Configuração do Projeto:
- TagoIO:
1. Crie uma conta na plataforma TagoIO (https://tago.io/).
2. Crie um novo "Device" e obtenha o "Token do Device".

- Arduino Code:
1. Abra o código fornecido na Arduino IDE.
2. Modifique as informações de conexão Wi-Fi (SSID e senha).
3. Substitua os campos em EspMQTTClient com as informações fornecidas pelo TagoIO (servidor, usuário e token do dispositivo).
4. Adapte o código para o tipo de sensor de presença que você está usando.

Como Funciona:
1. O ESP se conecta à rede Wi-Fi e ao servidor MQTT da TagoIO.
2. Utilizando um sensor de presença, o ESP detecta a presença em um vaso sanitário.
3. Os dados (variável e valor) são formatados em JSON e enviados para a plataforma TagoIO.
4. Os dados são armazenados no TagoIO, permitindo monitoramento em tempo real.
5. O display mostra a variável e o valor, por exemplo, "presenca: true".

