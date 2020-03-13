echo "mode binary" >/tmp/se
echo "put kernel8-32.img" >>/tmp/se
tftp $1 </tmp/se

