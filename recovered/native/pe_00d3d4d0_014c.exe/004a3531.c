/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a3531 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___acrt_stdio_allocate_buffer_nolock
   
   Library: Visual Studio 2019 Release */

void __cdecl ___acrt_stdio_allocate_buffer_nolock(undefined4 *param_1)

{
  uint *puVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  _DAT_005216c8 = _DAT_005216c8 + 1;
  uVar3 = 0x1000;
  pvVar2 = FUN_00497060(0x1000,1);
  param_1[1] = pvVar2;
  FUN_00495f00((LPVOID)0x0);
  puVar1 = param_1 + 3;
  if (param_1[1] == 0) {
    LOCK();
    *puVar1 = *puVar1 | 0x400;
    UNLOCK();
    param_1[1] = param_1 + 5;
    uVar3 = 2;
  }
  else {
    LOCK();
    *puVar1 = *puVar1 | 0x40;
    UNLOCK();
  }
  param_1[6] = uVar3;
  param_1[2] = 0;
  *param_1 = param_1[1];
  return;
}

