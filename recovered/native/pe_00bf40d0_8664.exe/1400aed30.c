/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400aed30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_stdio_allocate_buffer_nolock
   
   Library: Visual Studio 2019 Release */

void __acrt_stdio_allocate_buffer_nolock(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  
  _DAT_140142be8 = _DAT_140142be8 + 1;
  uVar2 = 0x1000;
  pvVar1 = _calloc_base(0x1000,1);
  param_1[1] = pvVar1;
  FUN_1400a1290((LPVOID)0x0);
  if (param_1[1] == 0) {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x400;
    UNLOCK();
    uVar2 = 2;
    param_1[1] = (longlong)param_1 + 0x1c;
  }
  else {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x40;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_1[1];
  return;
}

