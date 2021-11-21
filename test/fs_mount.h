#pragma once
#include "f_util.h"
#include "ff.h"
#include "hw_config.h"

// Data for buffers
typedef struct fs_mount
{
    sd_card_t* pSD;
    bool       failed;     // true if mount failed              
} fs_mount;

extern bool fsMount(fs_mount* fs);
extern void fsUnmount(fs_mount* fs);

inline void fsInitialise(fs_mount* fs){ fs->pSD = NULL; fs->failed = false;}
inline bool fsMounted(fs_mount* fs){return (fs->pSD != NULL);}
