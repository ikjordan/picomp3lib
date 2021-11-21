#include <stdio.h>
#include "fs_mount.h"
#include "hw_config.h"

// Mount the FatFS
bool fsMount(fs_mount* fs)
{
    // Only allow mount to fail once, then ignore future requests
    if ((fs->pSD == NULL) && (!fs->failed))
    {
        fs->pSD = sd_get_by_num(0);
        FRESULT fr = f_mount(&fs->pSD->fatfs, fs->pSD->pcName, 1);
        if (FR_OK != fr)
        {
            printf("f_mount error: %s (%d)\n", FRESULT_str(fr), fr);
            fs->pSD = NULL;
            fs->failed = true;
        }
    }
    return (fs->pSD != NULL);
}

// Unmount the FatFS
void fsUnmount(fs_mount* fs)
{
    f_unmount(fs->pSD->pcName);
    fs->pSD = NULL;
}

