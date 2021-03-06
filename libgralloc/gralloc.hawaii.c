//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2016 Retargetable Decompiler <info@retdec.com>
//

#include <fcntl.h>
#include <pthread.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stropts.h>
#include <unistd.h>

// ------------------------ Structures ------------------------

struct struct_0 {
    int32_t e0;
    int32_t e1;
};

struct struct_2 {
    int32_t e0;
    int32_t e1;
    int32_t e2;
};

struct struct_24 {
    int32_t e0;
    int32_t e1;
    char e2[36];
    int32_t e3;
};

// ------------------- Function Prototypes --------------------

int32_t _Z12gralloc_lockPK16gralloc_module_tPK13native_handleiiiiiPPv(int32_t a1, int32_t a2);
int32_t _Z14gralloc_unlockPK16gralloc_module_tPK13native_handle(int32_t a1, int32_t a2);
int32_t _Z23gralloc_register_bufferPK16gralloc_module_tPK13native_handle(int32_t a1);
int32_t _Z25gralloc_unregister_bufferPK16gralloc_module_tPK13native_handle(int32_t a1);
int32_t _ZN19allocator_context_t12gralloc_freeEP14alloc_device_tPK13native_handle(int32_t a1);
int32_t _ZN19allocator_context_t13gralloc_allocEP14alloc_device_tiiiiPPK13native_handlePi(int32_t a1, int32_t a2, int32_t a3);
int32_t _ZN19allocator_context_t13gralloc_closeEP11hw_device_t(int32_t a1);
int32_t _ZN19allocator_context_t19gralloc_free_bufferEPK13native_handle(int32_t a1);
void _ZN19allocator_context_t20gralloc_alloc_bufferEiiiiPPK13native_handlePi(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12);
int32_t _ZN19allocator_context_tC1EPK21gralloc_module_impl_t(char * a1, int32_t a2);
int32_t function_113c(void);
int32_t function_13b0(void (*a1)(), int32_t a2);
int32_t function_143a(int32_t a1, int32_t a2);
int32_t function_187c(struct struct_24 a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_18dc(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_1926(int32_t a1);
int32_t function_1928(int32_t a1, int32_t a2);
int32_t function_1990(int32_t result);
int32_t function_19ac(void);
int32_t function_19e0(int32_t a1, int32_t a2);
int32_t function_1a46(int32_t a1, uint32_t a2, int32_t a3);
int32_t function_1a50(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12);
int32_t function_1d66(int32_t result, int32_t a2, int32_t a3, int32_t a4);
int32_t function_1d7c(int32_t a1, int32_t result);
void function_1d8c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t function_1e08(int32_t result, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15);
int32_t function_2014(int32_t a1, int32_t a2, struct struct_0 a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t function_2120(int32_t result);
int32_t function_2234(int32_t result);
int32_t function_2244(int32_t result);

// --------------------- Global Variables ---------------------

int32_t g10 = 0; // LR
int32_t g11 = 0; // R0
int32_t g12 = 0; // R1
int32_t g13 = 0; // R2
int32_t g14 = 0; // R3
int32_t g15 = 0; // R4
int32_t g16 = 0; // R7
int32_t g1 = 0x464c457f;
struct struct_2 g2;
struct struct_0 g3;
struct struct_0 g4;
int32_t g5 = 52;
int32_t g6 = 0x4000; // 0x4000
struct struct_0 g7;
struct struct_0 g8;
struct struct_2 g9;

// ------------------------ Functions -------------------------

// Address range: 0x113c - 0x13af
int32_t function_113c(void) {
    // 0x113c
    g14 = 0x4000;
    __cxa_finalize();
    return 0x4000;
}

// Address range: 0x13b0 - 0x13ef
int32_t function_13b0(void (*a1)(), int32_t a2) {
    // 0x13b0
    return __cxa_atexit(a1, (char *)&g1, (char *)&g6);
}

// Address range: 0x13f2 - 0x13ff
// Demangled:     allocator_context_t::gralloc_close(hw_device_t *)
int32_t _ZN19allocator_context_t13gralloc_closeEP11hw_device_t(int32_t a1) {
    // 0x13f2
    pthread_mutex_destroy((int32_t *)(a1 + 104));
    return 0;
}

// Address range: 0x1400 - 0x1439
// Demangled:     allocator_context_t::allocator_context_t(gralloc_module_impl_t const *)
int32_t _ZN19allocator_context_tC1EPK21gralloc_module_impl_t(char * a1, int32_t a2) {
    // 0x1400
    memset(a1, g1, g7.e0);
    pthread_mutex_init((int32_t *)(g15 + 104), &g1);
    *(int32_t *)g15 = 0x48574454;
    abort();
    // UNREACHABLE
}

// Address range: 0x143a - 0x1447
int32_t function_143a(int32_t a1, int32_t a2) {
    // 0x143a
    return -0x15b0fdf9;
}

// Address range: 0x1448 - 0x17ff
// Demangled:     allocator_context_t::gralloc_alloc_buffer(int, int, int, int, native_handle const * *, int *)
void _ZN19allocator_context_t20gralloc_alloc_bufferEiiiiPPK13native_handlePi(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12) {
    int32_t * mutex = (int32_t *)(a1 + 104); // 0x144e_0
    pthread_mutex_lock(mutex);
    __android_log_print();
    if (a4 == 5) {
        // 0x14b0
        // branch -> 0x14fa
        // 0x14fa
        // branch -> 0x17e4
        // 0x17e4
        pthread_mutex_unlock(mutex);
        return;
    }
    // 0x1480
    if (a4 > 5) {
        // 0x1492
        if (a4 == 20) {
            // 0x1552
            // branch -> 0x17e4
        } else {
            // 0x1498
            if (a4 > 20) {
                // 0x14a2
                // branch -> 0x161a
            }
            // 0x161a
            __android_log_print();
            // branch -> 0x17e4
        }
        // 0x17e4
        pthread_mutex_unlock(mutex);
        return;
    }
    // 0x1482
    switch (a4) {
        case 2: {
            // 0x14e2
            // branch -> 0x14f6
            // 0x14f6
            // branch -> 0x14fa
            // 0x14fa
            // branch -> 0x17e4
            // 0x17e4
            pthread_mutex_unlock(mutex);
            return;
        }
        case 4: {
            // 0x1506
            // branch -> 0x14f6
            // 0x14f6
            // branch -> 0x14fa
            // 0x14fa
            // branch -> 0x17e4
            // 0x17e4
            pthread_mutex_unlock(mutex);
            return;
        }
    }
    // 0x161a
    __android_log_print();
    // branch -> 0x17e4
    // 0x17e4
    pthread_mutex_unlock(mutex);
}

// Address range: 0x1800 - 0x182d
// Demangled:     allocator_context_t::gralloc_alloc(alloc_device_t *, int, int, int, int, native_handle const * *, int *)
int32_t _ZN19allocator_context_t13gralloc_allocEP14alloc_device_tiiiiPPK13native_handlePi(int32_t a1, int32_t a2, int32_t a3) {
    // 0x1800
    return 8;
}

// Address range: 0x182e - 0x184b
// Demangled:     allocator_context_t::gralloc_free_buffer(native_handle const *)
int32_t _ZN19allocator_context_t19gralloc_free_bufferEPK13native_handle(int32_t a1) {
    int32_t v1 = g12; // R4
    g12 += 88;
    rtos_remove_mapping();
    mm_close();
    int32_t result = *(int32_t *)(v1 + 20); // 0x1842
    function_2234(result);
    return result;
}

// Address range: 0x184c - 0x187b
// Demangled:     allocator_context_t::gralloc_free(alloc_device_t *, native_handle const *)
int32_t _ZN19allocator_context_t12gralloc_freeEP14alloc_device_tPK13native_handle(int32_t a1) {
    int32_t v1 = g12; // 0x184e
    g15 = v1;
    if (v1 == 0) {
        // 0x1866
        return -22;
    }
    // 0x1852
    _ZN19allocator_context_t19gralloc_free_bufferEPK13native_handle(a1);
    native_handle_close();
    native_handle_delete();
    return 0;
}

// Address range: 0x187c - 0x18db
int32_t function_187c(struct struct_24 a1, int32_t a2, int32_t a3, int32_t a4) {
    struct struct_0 v1; // 0x1896_0
    int32_t v2 = a1.e0; // 0x187c_1
    int32_t * v3 = (int32_t *)(v2 + 8); // 0x187e_0
    *v3 = *v3 + 1;
    int32_t v4 = *(int32_t *)(((struct struct_24 *)v2)->e0 + 48); // 0x1886
    g15 = v4;
    g10 = 0x188b;
    ((int32_t (*)())(v4 & -2))();
    g11 = 0;
    int32_t v5;
    g15 = v5;
    int32_t v6;
    ((int32_t (*)())v6)();
    int32_t v7 = g14; // 0x188e
    int32_t v8 = g10; // 0x188e
    int32_t v9 = g1; // 0x1890
    g12 = v9;
    int32_t v10 = g8.e0 - 1; // 0x1894
    g13 = v10;
    v1 = (struct struct_0){
        .e0 = 0,
        .e1 = 0
    };
    v1.e0 = v10;
    g8 = v1;
    int32_t v11 = *(int32_t *)(v9 + 52); // 0x1898
    g14 = v11;
    g10 = 0x189d;
    ((int32_t (*)())(v11 & -2))();
    g11 = 0;
    g14 = v7;
    int32_t (*v12)() = (int32_t (*)())v8; // 0x189e_0
    v12();
    int32_t v13 = g4.e0;
    g11 = v13;
    int32_t v14 = *(int32_t *)v13; // 0x18a4
    g12 = v14;
    int32_t v15 = *(int32_t *)(v14 + 60); // 0x18a8
    g14 = v15;
    g10 = 0x18ad;
    ((int32_t (*)())(v15 & -2))();
    g14 = v7;
    v12();
    int32_t v16 = *(int32_t *)g11; // 0x18ae
    g12 = v16;
    int32_t v17 = g14; // 0x18b0
    int32_t v18 = g10; // 0x18b0
    int32_t v19 = *(int32_t *)(v16 + 56); // 0x18b2
    g14 = v19;
    g10 = 0x18b7;
    ((int32_t (*)())(v19 & -2))();
    g14 = v17;
    ((int32_t (*)())v18)();
    g11 = 0;
    ((int32_t (*)())(g10 & -2))();
    int32_t v20 = g14; // 0x18bc
    int32_t v21 = g10; // 0x18bc
    if (g11 != 0) {
        int32_t v22 = g1; // 0x18c0
        g12 = v22;
        int32_t v23 = *(int32_t *)(v22 + 4); // 0x18c2
        g14 = v23;
        g10 = 0x18c7;
        ((int32_t (*)())(v23 & -2))();
        // branch -> 0x18c6
    }
    // 0x18c6
    g14 = v20;
    ((int32_t (*)())v21)();
    *(int32_t *)g12 = g9.e0;
    int32_t v24 = g2.e0;
    g12 = v24;
    *(int32_t *)g13 = v24;
    int32_t v25 = g3.e0;
    g13 = v25;
    *(int32_t *)g14 = v25;
    ((int32_t (*)())g10)();
    ((int32_t (*)())(g10 & -2))();
    return g11;
}

// Address range: 0x18dc - 0x1925
int32_t function_18dc(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x18dc
    if (a1 == 0) {
        // 0x1922
        return 0;
    }
    // 0x18e4
    int32_t v1;
    int32_t v2;
    int32_t v3; // 0x1910
    int32_t v4; // 0x1916
    if ((*(int32_t *)(a1 + 56) & 256) == 0) {
        // 0x18fe
        if (a2 != 0) {
            // 0x1900
            // branch -> 0x1902
            // 0x1902
            *(int32_t *)a2 = *(int32_t *)(a1 + 120);
            // branch -> 0x1904
        }
        // 0x1904
        if (a3 != 0) {
            // 0x1906
            *(int32_t *)a3 = *(int32_t *)(a1 + 96);
            // branch -> 0x190a
        }
        // 0x190a
        if (a4 != 0) {
            // 0x190c
            *(int32_t *)a4 = *(int32_t *)(a1 + 108);
            // branch -> 0x1910
        }
        // 0x1910
        v3 = v1;
        if (v3 != 0) {
            // 0x1912
            *(int32_t *)v3 = *(int32_t *)(a1 + 100);
            // branch -> 0x1916
        }
        // 0x1916
        v4 = v2;
        if (v4 == 0) {
            // 0x1922
            return 1;
        }
        // 0x1918
        *(int32_t *)v4 = *(int32_t *)(a1 + 112);
        return 1;
    }
    // 0x18ec
    if (a2 != 0) {
        int32_t v5 = *(int32_t *)(a1 + 120); // 0x18ee
        if (v5 != 20) {
            // 0x18f4
            if (v5 != 0x32315659) {
                // 0x1902
                *(int32_t *)a2 = v5;
                // branch -> 0x1904
                // 0x1904
                if (a3 != 0) {
                    // 0x1906
                    *(int32_t *)a3 = *(int32_t *)(a1 + 96);
                    // branch -> 0x190a
                }
                // 0x190a
                if (a4 != 0) {
                    // 0x190c
                    *(int32_t *)a4 = *(int32_t *)(a1 + 108);
                    // branch -> 0x1910
                }
                // 0x1910
                v3 = v1;
                if (v3 != 0) {
                    // 0x1912
                    *(int32_t *)v3 = *(int32_t *)(a1 + 100);
                    // branch -> 0x1916
                }
                // 0x1916
                v4 = v2;
                if (v4 == 0) {
                    // 0x1922
                    return 1;
                }
                // 0x1918
                *(int32_t *)v4 = *(int32_t *)(a1 + 112);
                return 1;
            }
        }
        // 0x18fa
        // branch -> 0x1902
        // 0x1902
        *(int32_t *)a2 = 1;
        // branch -> 0x1904
    }
    // 0x1904
    if (a3 != 0) {
        // 0x1906
        *(int32_t *)a3 = *(int32_t *)(a1 + 96);
        // branch -> 0x190a
    }
    // 0x190a
    if (a4 != 0) {
        // 0x190c
        *(int32_t *)a4 = *(int32_t *)(a1 + 108);
        // branch -> 0x1910
    }
    // 0x1910
    v3 = v1;
    if (v3 != 0) {
        // 0x1912
        *(int32_t *)v3 = *(int32_t *)(a1 + 100);
        // branch -> 0x1916
    }
    // 0x1916
    v4 = v2;
    if (v4 == 0) {
        // 0x1922
        return 1;
    }
    // 0x1918
    *(int32_t *)v4 = *(int32_t *)(a1 + 112);
    return 1;
}

// Address range: 0x1926 - 0x1927
int32_t function_1926(int32_t a1) {
    // 0x1926
    return g13 + 49;
}

// Address range: 0x1928 - 0x198f
int32_t function_1928(int32_t a1, int32_t a2) {
    if (a2 != 0) {
        // 0x1930
        *(int32_t *)a2 = *(int32_t *)(a1 + 120);
        // branch -> 0x1934
    }
    // 0x1934
    if (g13 != 0) {
        // 0x1936
        *(int32_t *)g13 = *(int32_t *)(a1 + 96);
        // branch -> 0x193a
    }
    // 0x193a
    if (g14 != 0) {
        // 0x193c
        *(int32_t *)g14 = *(int32_t *)(a1 + 108);
        // branch -> 0x1940
    }
    // 0x1940
    int32_t v1;
    if (v1 != 0) {
        // 0x1942
        *(int32_t *)v1 = *(int32_t *)(a1 + 104);
        // branch -> 0x1946
    }
    // 0x1946
    int32_t v2;
    int32_t result; // 0x1948
    if (v2 != 0) {
        // 0x1948
        result = *(int32_t *)(a1 + 116);
        *(int32_t *)v2 = result;
        // branch -> 0x194c
    } else {
        result = a1;
    }
    // 0x194c
    return result;
}

// Address range: 0x1990 - 0x19ab
int32_t function_1990(int32_t result) {
    // 0x1990
    *(int32_t *)result = *(int32_t *)0x3f28 + 8;
    _ZdlPv();
    return result;
}

// Address range: 0x19ac - 0x19df
int32_t function_19ac(void) {
    int32_t v1 = g14; // 0x19ac
    int32_t v2 = g11; // 0x19ae
    int32_t v3 = g12; // 0x19b0
    int32_t v4 = v3; // 0x19c2
    if (v2 != 0) {
        // 0x19b8
        g11 = *(int32_t *)(v2 + 24);
        mm_sync();
        v4 = v3;
        // branch -> 0x19be
    }
    // 0x19be
    if (v4 != 0) {
        // 0x19c0
        *(int32_t *)v4 = *(int32_t *)(v2 + 76);
        // branch -> 0x19c4
    }
    // 0x19c4
    if (g13 != 0) {
        int32_t v5 = *(int32_t *)(v2 + 80); // 0x19c6
        g11 = v5;
        *(int32_t *)g13 = v5;
        // branch -> 0x19ca
    }
    // 0x19ca
    if (v1 != 0) {
        int32_t v6 = *(int32_t *)(v2 + 64); // 0x19cc
        g12 = v6;
        *(int32_t *)v1 = v6;
        // branch -> 0x19d0
    }
    // 0x19d0
    g14 = v1;
    g16 = g9.e1;
    return *(int32_t *)(v2 + 56);
}

// Address range: 0x19e0 - 0x1a45
int32_t function_19e0(int32_t a1, int32_t a2) {
    // 0x19e0
    if (a1 == 5) {
        // 0x1a0c
        return 2;
    }
    // 0x19e8
    if (a1 <= 5) {
        // 0x19ea
        switch (a1) {
            case 2: {
                // 0x1a3c
                return 3;
            }
            case 4: {
                // 0x1a38
                return 5;
            }
            case 1: {
                // 0x1a0a
                return 1;
            }
        }
        // 0x1a2a
        __android_log_print();
        // branch -> 0x1a38
        // 0x1a38
        return 5;
    }
    // 0x19f8
    if (a1 == 7) {
        // 0x1a14
        return 8;
    }
    // 0x19fc
    if (a1 < 7) {
        // 0x1a10
        return 7;
    }
    // 0x19fe
    if (a1 == 20) {
        // 0x1a26
        return 26;
    }
    // 0x1a02
    if (a1 != 0x32315659) {
        // 0x1a2a
        __android_log_print();
        // branch -> 0x1a38
        // 0x1a38
        return 5;
    }
    // 0x1a18
    if (2 * a2 < 0) {
        // 0x1a40
        return 16;
    }
    // 0x1a1c
    return 18;
}

// Address range: 0x1a46 - 0x1a4f
int32_t function_1a46(int32_t a1, uint32_t a2, int32_t a3) {
    // 0x1a46
    return a2 / 64;
}

// Address range: 0x1a50 - 0x1d65
int32_t function_1a50(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12) {
    int32_t * v1 = (int32_t *)*(int32_t *)0x3f2c; // 0x1a64_0
    int32_t result = *v1; // 0x1d54
    if (*v1 != result) {
        // 0x1d5a
        __stack_chk_fail();
        // branch -> 0x1d5e
    }
    // 0x1d5e
    return result;
}

// Address range: 0x1d66 - 0x1d7b
int32_t function_1d66(int32_t result, int32_t a2, int32_t a3, int32_t a4) {
    // 0x1d66
    return result;
}

// Address range: 0x1d7c - 0x1d8b
int32_t function_1d7c(int32_t a1, int32_t result) {
    // 0x1d7c
    g15 = result;
    return result;
}

// Address range: 0x1d8c - 0x1e07
void function_1d8c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    int32_t v1 = 0; // R5
    int32_t v2 = *(int32_t *)g16; // 0x1d8c
    int32_t v3 = 0x1d92; // 0x1d8e
    int32_t v4 = *(int32_t *)v2; // 0x1d90
    g14 = v4;
    int32_t format = *(int32_t *)v3; // 0x1d964
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8; // 0x1de2
    int32_t v9; // 0x1de8
    int32_t v10; // 0x1df0
    if (format == 0) {
        // 0x1de2
        v8 = v1;
        if (v8 != 0) {
            // 0x1de4
            g13 = 0;
            *(int32_t *)v8 = 0;
            // branch -> 0x1de8
        }
        // 0x1de8
        v9 = g15;
        if (v9 != 0) {
            // 0x1dea
            g14 = 0;
            *(int32_t *)v9 = 0;
            // branch -> 0x1dee
        }
        // 0x1dee
        g11 = v4;
        v10 = *(int32_t *)v2;
        g12 = v10;
        if (v4 != v10) {
            // 0x1df6
            __stack_chk_fail();
            // branch -> 0x1dfa
        }
        // 0x1dfa
        g15 = v5;
        g16 = v6;
        ((int32_t (*)())v7)();
        return;
    }
    while (true) {
        // 0x1d9c
        g14 = 0;
        int32_t str;
        snprintf((char *)&str, g5, (char *)format);
        g13 = 0;
        int32_t fd = open((char *)&str, g1); // 0x1dac
        int32_t fd2 = fd; // R8
        if (fd == -1) {
            int32_t v11 = v3 + 4; // 0x1d96
            int32_t v12 = *(int32_t *)v11; // 0x1d96
            v3 = v11;
            if (v12 == 0) {
                // break -> 0x1de2
                break;
            }
            format = v12;
            // continue -> 0x1d9c
            continue;
        } else {
            // 0x1db8
            if (fd >= 0) {
                // 0x1dbc
                if (ioctl(fd, 0x4600, &a6) == 0) {
                    // 0x1dc8
                    if (v1 != 0) {
                        // 0x1dca
                        *(int32_t *)v1 = a6;
                        // branch -> 0x1dce
                    }
                    int32_t v13 = g15; // 0x1dce
                    if (v13 != 0) {
                        // 0x1dd0
                        *(int32_t *)v13 = a7;
                        // branch -> 0x1dd4
                    }
                    // 0x1dd4
                    close(fd2);
                    // branch -> 0x1dee
                } else {
                    // 0x1ddc
                    close(fd2);
                    // branch -> 0x1de2
                    // 0x1de2
                    v8 = v1;
                    if (v8 != 0) {
                        // 0x1de4
                        g13 = 0;
                        *(int32_t *)v8 = 0;
                        // branch -> 0x1de8
                    }
                    // 0x1de8
                    v9 = g15;
                    if (v9 != 0) {
                        // 0x1dea
                        g14 = 0;
                        *(int32_t *)v9 = 0;
                        // branch -> 0x1dee
                    }
                }
                // 0x1dee
                g11 = v4;
                v10 = *(int32_t *)v2;
                g12 = v10;
                if (v4 != v10) {
                    // 0x1df6
                    __stack_chk_fail();
                    // branch -> 0x1dfa
                }
                // 0x1dfa
                g15 = v5;
                g16 = v6;
                ((int32_t (*)())v7)();
                return;
            }
        }
        // 0x1de2
        v8 = v1;
        if (v8 != 0) {
            // 0x1de4
            g13 = 0;
            *(int32_t *)v8 = 0;
            // branch -> 0x1de8
        }
        // 0x1de8
        v9 = g15;
        if (v9 != 0) {
            // 0x1dea
            g14 = 0;
            *(int32_t *)v9 = 0;
            // branch -> 0x1dee
        }
        // 0x1dee
        g11 = v4;
        v10 = *(int32_t *)v2;
        g12 = v10;
        if (v4 != v10) {
            // 0x1df6
            __stack_chk_fail();
            // branch -> 0x1dfa
        }
        // 0x1dfa
        g15 = v5;
        g16 = v6;
        ((int32_t (*)())v7)();
        return;
    }
    // 0x1de2
    v8 = v1;
    if (v8 != 0) {
        // 0x1de4
        g13 = 0;
        *(int32_t *)v8 = 0;
        // branch -> 0x1de8
    }
    // 0x1de8
    v9 = g15;
    if (v9 != 0) {
        // 0x1dea
        g14 = 0;
        *(int32_t *)v9 = 0;
        // branch -> 0x1dee
    }
    // 0x1dee
    g11 = v4;
    v10 = *(int32_t *)v2;
    g12 = v10;
    if (v4 != v10) {
        // 0x1df6
        __stack_chk_fail();
        // branch -> 0x1dfa
    }
    // 0x1dfa
    g15 = v5;
    g16 = v6;
    ((int32_t (*)())v7)();
}

// Address range: 0x1e08 - 0x2013
int32_t function_1e08(int32_t result, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15) {
    // 0x1e08
    if (a2 != 0) {
        // 0x1e0e
        mm_write();
        return *(int32_t *)(result + 24);
    }
    int32_t v1 = *(int32_t *)(result + 20); // 0x1e1e
    g14 = v1;
    if (v1 == 0) {
        // 0x1e2e
        return result;
    }
    int32_t result2 = *(int32_t *)v1; // 0x1e22
    function_2244(result2);
    return result2;
}

// Address range: 0x2014 - 0x211f
int32_t function_2014(int32_t a1, int32_t a2, struct struct_0 a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    // 0x2014
    return 8;
}

// Address range: 0x2120 - 0x2123
int32_t function_2120(int32_t result) {
    // 0x2120
    return result;
}

// Address range: 0x2124 - 0x218b
// Demangled:     gralloc_register_buffer(gralloc_module_t const *, native_handle const *)
int32_t _Z23gralloc_register_bufferPK16gralloc_module_tPK13native_handle(int32_t a1) {
    // 0x2124
    if (g12 == 0) {
        // 0x212a
        __android_log_print();
        // branch -> 0x217e
        // 0x217e
        return -1;
    }
    // 0x213a
    ion_import_buffer();
    int32_t v1 = 0x4700636f; // 0x2142
    int32_t result = v1; // R4
    if (v1 != 0) {
        // 0x2146
        *(int32_t *)(g12 + 20) = v1;
        mm_create();
        *(int32_t *)(g12 + 24) = *(int32_t *)(g12 + 16);
        *(int32_t *)(g12 + 88) = *(int32_t *)(result + 12);
        int32_t v2 = *(int32_t *)(g12 + 72) + *(int32_t *)(result + 12); // 0x2164
        result = 0;
        *(int32_t *)(g12 + 80) = v2;
        *(int32_t *)(g12 + 36) = v2;
        *(int32_t *)(g12 + 92) = result;
        rtos_add_mapping();
        // branch -> 0x217e
    } else {
        result = -1;
    }
    // 0x217e
    return result;
}

// Address range: 0x218c - 0x21cb
// Demangled:     gralloc_unregister_buffer(gralloc_module_t const *, native_handle const *)
int32_t _Z25gralloc_unregister_bufferPK16gralloc_module_tPK13native_handle(int32_t a1) {
    // 0x218c
    if (g12 == 0) {
        // 0x2192
        __android_log_print();
        return -1;
    }
    // 0x21a6
    rtos_remove_mapping();
    mm_close();
    ion_free_buffer();
    return 0;
}

// Address range: 0x21cc - 0x2203
// Demangled:     gralloc_lock(gralloc_module_t const *, native_handle const *, int, int, int, int, int, void * *)
int32_t _Z12gralloc_lockPK16gralloc_module_tPK13native_handleiiiiiPPv(int32_t a1, int32_t a2) {
    if (a2 == 0) {
        // 0x21d4
        __android_log_print();
        return -1;
    }
    // 0x21e8
    mm_sync();
    int32_t v1;
    if (v1 == 0) {
        // 0x21f8
        return 0;
    }
    // 0x21f0
    *(int32_t *)v1 = *(int32_t *)(a2 + 80);
    return 0;
}

// Address range: 0x2204 - 0x2233
// Demangled:     gralloc_unlock(gralloc_module_t const *, native_handle const *)
int32_t _Z14gralloc_unlockPK16gralloc_module_tPK13native_handle(int32_t a1, int32_t a2) {
    // 0x2204
    if (a2 == 0) {
        // 0x2208
        __android_log_print();
        return -1;
    }
    // 0x221c
    if (*(int32_t *)(a2 + 20) != 0) {
        // 0x2220
        ion_buffer_update();
        // branch -> 0x2228
    }
    // 0x2228
    return 0;
}

// Address range: 0x2234 - 0x2243
int32_t function_2234(int32_t result) {
    // 0x2234
    function_1d7c(result, g12);
    return result;
}

// Address range: 0x2244 - 0x2253
int32_t function_2244(int32_t result) {
    // 0x2244
    function_1d8c(result, g12, g13, g14, 0, 0, 0, 0, 0);
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// void __android_log_print(void);
// int __cxa_atexit(void(*func)(void *), void * arg, void * dso_handle);
// void __cxa_finalize(void);
// void __stack_chk_fail(void);
// void _ZdlPv(void);
// int close(int);
// int ioctl(int, int, ...);
// void ion_buffer_update(void);
// void ion_free_buffer(void);
// void ion_import_buffer(void);
// void * memset(void *, int, size_t);
// void mm_close(void);
// void mm_create(void);
// void mm_sync(void);
// void mm_write(void);
// void native_handle_close(void);
// void native_handle_delete(void);
// int open(const char *path, int oflag, ...);
// int pthread_mutex_destroy(pthread_mutex_t *mutex);
// int pthread_mutex_init(pthread_mutex_t *mutex, const pthread_mutexattr_t *attr);
// int pthread_mutex_lock(pthread_mutex_t *mutex);
// int pthread_mutex_unlock(pthread_mutex_t *mutex);
// void rtos_add_mapping(void);
// void rtos_remove_mapping(void);
// int snprintf(char *restrict, size_t, const char *restrict, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (4.6)
// Detected functions: 30
// Decompiler release: v2.1.2 (2016-01-27)
// Decompilation date: 2016-05-01 12:20:37
