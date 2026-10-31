/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180294f68 */

/* Library Function - Single Match
    __acrt_stdio_free_buffer_nolock
   
   Library: Visual Studio 2019 Release */

void __acrt_stdio_free_buffer_nolock(undefined8 *param_1)

{
  if (((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) != 0) &&
     ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0)) {
    FUN_180290e40(param_1[1]);
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}

