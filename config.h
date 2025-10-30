#ifndef CONFIG_H
#define CONFIG_H

#define DELIMITER " ─ "
#define MAX_BLOCK_OUTPUT_LENGTH 45
#define CLICKABLE_BLOCKS 1
#define LEADING_DELIMITER 0
#define TRAILING_DELIMITER 0

//  X(icon, cmd, interval, signal).
#define BLOCKS(X)             \
    X("Ram use: ",   "free -h --giga | awk '/^Mem/ {print $3}'",                        5, 1)  \
    X("Disk left: ",  "df -h /dev/sda6 | awk '/\\/dev\\/sda/ {print $4}'",              5, 0)  \
    X("Volume: ",     "status-volume",                                                  0, 2)  \
    X("",             "status-vpn",                                                     2, 0)  \
    X("",             "LC_TIME=pt_BR.UTF-8 date '+%d/%m/%Y %H:%M'",                     3, 3)  \

#endif  // CONFIG_H
