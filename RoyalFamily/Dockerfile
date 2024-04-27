FROM swipl as swipl-container
FROM gcc
COPY --from=swipl-container /lib/swipl/ /lib/swipl/
WORKDIR /app
COPY mainRoyalFamily.cpp mainRoyalFamily.cpp
ENV LD_LIBRARY_PATH=/lib/swipl/lib/x86_64-linux:$LD_LIBRARY_PATH
RUN g++ -o mainRoyalFamily mainRoyalFamily.cpp -I/lib/swipl/include -L/lib/swipl/lib/x86_64-linux -lswipl