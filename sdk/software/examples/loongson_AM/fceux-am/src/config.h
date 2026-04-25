#ifndef __CONFIG_H__
#define __CONFIG_H__

// Use AM GPU output on the SoC DVI path.
#define HAS_GUI
#define SIZE_OPT

#define SOUND_NONE 0
#define SOUND_LQ   1
#define SOUND_HQ   2

#define PERF_LOW    0
#define PERF_MIDDLE 1
#define PERF_HIGH   2

#if defined(__ARCH_NATIVE) || defined(__PLATFORM_QEMU)
# define PERF_CONFIG PERF_HIGH
#elif defined(__PLATFORM_NEMU)
# define PERF_CONFIG PERF_MIDDLE
#else
# define PERF_CONFIG PERF_LOW
#endif

#if PERF_CONFIG == PERF_HIGH
# define NR_FRAMESKIP 0
# define SOUND_CONFIG SOUND_HQ
# define FUNC_IDX_MAX256
#elif PERF_CONFIG == PERF_MIDDLE
# define NR_FRAMESKIP 1
# define SOUND_CONFIG SOUND_LQ
# define FUNC_IDX_MAX256
#else
# define NR_FRAMESKIP 2
# define SOUND_CONFIG SOUND_NONE
# define FUNC_IDX_MAX16
#endif

// 0 = NTSC 60Hz, 1 = PAL 50Hz.
// On PERF_LOW boards, default to PAL to cut emulation workload by about 16.7%,
// at the cost of slightly slower game speed for NTSC titles.
#if PERF_CONFIG == PERF_LOW
# define FCEUX_DEFAULT_REGION 1
#else
# define FCEUX_DEFAULT_REGION 0
#endif

#define FCEUX_RUNTIME_LOG 0
#define FCEUX_LOG_STAGE_MS 20
#define FCEUX_LOG_FRAME_MS 40

// Experimental: only issue one GPU sync every N submitted frames.
// Set to 1 to disable frame skipping on the DVI side.
#define FCEUX_GPU_SYNC_INTERVAL 3

#endif
