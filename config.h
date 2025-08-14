#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " ─ "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)             \
    X("Ram usage: ", "free -h --giga | awk '/^Mem/ {print $3}'",                 5,  1)  \
    X("Disk left: ",      "df -h /dev/sda6 | awk '/\\/dev\\/sda/ {print $4}'",        5,  0)  \
    X("Volume: ",    "status-volume",                                            0,  2)  \
    X("",            "status-vpn",                                               2,  0)  \
    X("",            "LC_TIME=pt_BR.UTF-8 date '+%d de %B de %Y (%A) %H:%M'",    3,  3)  \

#endif  // CONFIG_H
