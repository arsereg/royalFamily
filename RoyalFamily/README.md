[![N|Solid](https://images.credly.com/size/400x400/images/0e3e46ee-69d9-46e6-98b7-282f193e2c94/blob.png)](https://nodesource.com/products/nsolid)
# Maestría Profesional en Ingeniería del Software con énfasis en Inteligencia Artificial
## Sistemas Basados en Conocimiento

**Profesor:**
- Luis Gerardo León Vega

**Estudiantes:**
- Gino Marín
- Josue Quiros

# RoyalFamily

## Descripción
Este sistema es una implementacion de Prolog en C++ utilizando SWI-CPP

## Requisitos Previos
Antes de ejecutar esta aplicación, asegúrate de tener instalado lo siguiente:
- **Docker**: Para instalar Docker, sigue las instrucciones en [Instalar Docker](https://docs.docker.com/get-docker/).
- **Docker Compose**: Para instalar Docker Compose, sigue las instrucciones en [Instalar Docker Compose](https://docs.docker.com/compose/install/).

## Cómo ejecutar la aplicación
Para poner en marcha la aplicación, sigue estos pasos:
1. Clona el repositorio:
   ```bash
   git clone https://github.com/arsereg/royalFamily.git
   cd royalFamily

2. Revisa si Docker está arriba corriendo. Si no, ponlo a correr abriendo la aplicación anteriormente descargada:
   ```bash
   docker ps
   CONTAINER ID   IMAGE     COMMAND   CREATED   STATUS    PORTS     NAMES

3. Haz un build del docker-compose. Puede durar alrededor de 1-2 minutos y cuando esté listo verás un output como el de abajo:
   ```bash
     docker-compose up --build
     ...
     Backend-Layer  |  * Serving Flask app 'main'
     Backend-Layer  |  * Debug mode: on
     Backend-Layer  | WARNING: This is a development server. Do not use it in a production deployment. Use a production WSGI server instead.
     Backend-Layer  |  * Running on all addresses (0.0.0.0)
     Backend-Layer  |  * Running on http://127.0.0.1:8000
     Backend-Layer  |  * Running on http://172.18.0.2:8000
     Backend-Layer  | Press CTRL+C to quit
     Backend-Layer  |  * Restarting with stat
     Backend-Layer  |  * Debugger is active!
     Backend-Layer  |  * Debugger PIN: 576-110-620

5. Sin embargo, para acceder a la aplicación deberás ir a un browser y acceder a ```localhost```

6. En la aplicacion podras ver 4 botones para realizar consultas.
    - Es Monarca
    - Es hijo unico
    - Ha sido Reina
    - Ha sido Rey

7. Al clickar en cualquiera de las opciones, veras una nueva pagina con un input. En este podras poner el nombre de las personas que deseas consultar.

Utilizamos la familia real britanica como referencia para crear la base de datos. Puede ser complicada, asi que aca dejamos una referencia:

```angular2html
Victoria es Reina
Edward VII es Rey
George V es Rey
Edward VIII es Rey
George VI es Rey
Elizabeth II es Reina
Charles III es Rey

Victoria Adelaida es Princesa Real
Albert es Principe
Albert Edward es Principe
Charles Philip es Principe
William Arthur Philip es Principe

Victoria tiene un matrimonio con Albert of Saxe-Coburg and Gotha
Edward VII tiene un matrimonio con Alexandra of Denmark
George V tiene un matrimonio con Mary of Teck
George VI tiene un matrimonio con Elizabeth Bowes-Lyon
Elizabeth II tiene un matrimonio con Philip
Charles III tiene un matrimonio con Camilla

Victoria es madre de Edward
Victoria es madre de Victoria Adelaida
Victoria es madre de Alice
Victoria es madre de Alfred
Victoria es madre de Helena
Victoria es madre de Louise
Victoria es madre de Arthur
Victoria es madre de Leopold
Victoria es madre de Beatrice

Edward VII es padre de George
Edward VII es padre de Albert
Edward VII es padre de Louise
Edward VII es padre de Victoria Alexandra
Edward VII es padre de Maud
Edward VII es padre de Alexander John

George V es padre de Albert Edward
George V es padre de Albert Frederick
George V es padre de Mary Alexandra
George V es padre de Henry William
George V es padre de George Edward
George V es padre de John Charles

George VI es padre de Elizabeth Alexandra
George VI es padre de Margaret Rose

Elizabeth II es madre de Charles Philip
Elizabeth II es madre de Anne Elizabeth
Elizabeth II es madre de Andrew Albert Christian
Elizabeth II es madre de Edward Antony

Charles III es madre o padre de William Arthur Philip
Charles III es madre o padre de Harry
Diana es madre o padre de William Arthur Philip
Diana es madre o padre de Harry

Eugenie es madre de August

Victoria es Monarca

Edward VII es Monarca 
George V es Monarca 
Edward VIII es Monarca 
George VI es Monarca 
Elizabeth II es Monarca 
Charles III es Monarca 
Victoria Adelaida es Monarca 
Albert es Monarca 
Albert Edward es Monarca 
Victoria es Monarca 
Charles Philip es Monarca 
William Arthur Philip es Monarca 
Edward es Monarca 
George es Monarca 
Albert Frederick es Monarca 
Elizabeth es Monarca 
Philip es Monarca 
Camilla es Monarca 
Anne Elizabeth es Monarca 
Andrew Albert Christian es Monarca 
Edward Antony es Monarca 
Harry es Monarca 
Diana es Monarca 
August es Monarca 
Margaret Rose es Monarca 
Henry William es Monarca 
George Edward es Monarca 
John Charles es Monarca 
Elizabeth Alexandra es Monarca 
Eugenie es Monarca 
Leopold es Monarca 
Maud es Monarca 
Alexander John es Monarca 
Victoria Alexandra es Monarca 
Arthur es Monarca 
Alice es Monarca 
Alfred es Monarca 
Helena es Monarca 
Louise es Monarca 
Beatrice es Monarca 
Albert of Saxe-Coburg and Gotha es Monarca 
Mary of Teck es Monarca 
Victoria Alexandra es Monarca 
Diana es Monarca 
Victoria Adelaida es Monarca 
Alice es Monarca 
Alfred es Monarca 
Helena es Monarca 
Louise es Monarca 
Arthur es Monarca 
Leopold es Monarca 
Beatrice es Monarca 
Albert of Saxe-Coburg and Gotha es Monarca 
Mary of Teck es Monarca 
Victoria Alexandra es Monarca 
Margaret Rose es Monarca 
```


## Ejemplo de uso
### Consulta por Edward
| Consulta      | Nombre | Resultado |
|---------------|--------|------------|
| Es Monarca    | Edward | Edward es/fue monarca.   |
| Es hijo unico | Edward | Edward no es hijo/a único/a.  |
| Ha sido Reina | Edward | Edward no es/fue Reina.   |
| Ha sido Rey   | Edward | Edward no es es/fue Rey.   |

### Consulta por Charles III
| Consulta      | Nombre | Resultado                         |
|---------------|--------|-----------------------------------|
| Es Monarca    | Charles III | Charles III es/fue monarca.       |
| Es hijo unico | Charles III | Charles III no es hijo/a único/a. |
| Ha sido Reina | Charles III | Charles III no es/fue Reina.      |
| Ha sido Rey   | Charles III | Charles III es/fue Rey.           |

### Consulta por Harry Potter
| Consulta      | Nombre | Resultado                        |
|---------------|--------|----------------------------------|
| Es Monarca    | Charles III | Harry Potter no es miembro de la Familia Real     |
| Es hijo unico | Charles III | Harry Potter no es miembro de la Familia Real |
| Ha sido Reina | Charles III | Harry Potter no es miembro de la Familia Real      |
| Ha sido Rey   | Charles III | Harry Potter no es miembro de la Familia Real          |


## Comparacion de lenguajes

### Consulta por Harry Potter
| Lenguaje    | Ventajas                                                       | Desventajas                                                                             |
|-------------|----------------------------------------------------------------|-----------------------------------------------------------------------------------------|
| Prolog      | Una sintaxis clara y concisa. Cuenta con mucho soporte.        | Carece de funcionalidades nuevas e integracion con otras tecnologias                    |
| C++         | Una sintaxis orientada a objetos. Cuenta con bastante soporte. | Requiere de un compilador. La configuracion puede ser complicada.                       |
| Rust        | Tecnologia emergente. Alto rendimiento por bajo coste.         | No esta listo para produccion. Todavia le faltan muchas caracteristicas por implementar |
