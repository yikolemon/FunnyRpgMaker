/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10283371 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___acrt_stdio_allocate_buffer_nolock
   
   Library: Visual Studio 2019 Release */

void ___acrt_stdio_allocate_buffer_nolock(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  _DAT_103a4d50 = _DAT_103a4d50 + 1;
  uVar3 = 0x1000;
  uVar2 = FUN_10275d90(0x1000,1);
  param_1[1] = uVar2;
  FUN_10274120(0);
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

