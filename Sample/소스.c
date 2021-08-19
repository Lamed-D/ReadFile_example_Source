#include <Windows.h>
#include <stdio.h>

int main()
{
    HANDLE File = CreateFileA(
        "abex.l2c",
        GENERIC_READ,
        0,
        0,
        OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL,
        0);
    char buf[256];
    DWORD dwRead;
    ReadFile(File, buf, sizeof(buf), &dwRead, NULL);
    printf("%s %d", buf, dwRead);
}
