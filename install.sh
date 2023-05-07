echo "[*] Compilando"
sleep 1
gcc -o winux exec.c
echo "[*] Moviendo a /usr/bin"
sleep 1
mv winux /usr/bin/
echo "Finalizado, puedes ejecutar el comando winux"

