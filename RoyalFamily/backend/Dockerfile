FROM swipl as swipl-container

FROM gcc as gcc-container
COPY --from=swipl-container /lib/swipl/ /lib/swipl/
WORKDIR /app
COPY mainRoyalFamily.cpp mainRoyalFamily.cpp
ENV LD_LIBRARY_PATH=/lib/swipl/lib/x86_64-linux:$LD_LIBRARY_PATH
RUN g++ -o main mainRoyalFamily.cpp -I/lib/swipl/include -L/lib/swipl/lib/x86_64-linux -lswipl
RUN apt update && apt install -y python3-pip

COPY app.py app.py
COPY requirements.txt requirements.txt
RUN pip3 install -r requirements.txt --break-system-packages
EXPOSE 5000
CMD [ "python3", "app.py", "-m", "flask", "run", "--host=0.0.0.0" ]