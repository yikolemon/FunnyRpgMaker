/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014c7f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_1014c7f4(undefined4 *param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar1 = FUN_1014c8a4(*(undefined2 *)((int)param_1 + 0x12),(int)param_2 & 0xffff);
  *(undefined2 *)((int)param_1 + 0x12) = uVar1;
  uVar1 = FUN_1014c8a4(*(undefined2 *)(param_1 + 5),(int)param_3 & 0xffff);
  *(undefined2 *)(param_1 + 5) = uVar1;
  uVar1 = FUN_1014c8a4(*(undefined2 *)((int)param_1 + 0x16),(int)param_4 & 0xffff);
  *(undefined2 *)((int)param_1 + 0x16) = uVar1;
  uVar1 = FUN_1014c8a4(*(undefined2 *)(param_1 + 6),(int)param_5 & 0xffff);
  *(undefined2 *)(param_1 + 6) = uVar1;
  FUN_1014c766(0);
  uVar2 = FUN_1014c8b3(*param_1,param_1[1]);
  return (float10)(float)((double)((ulonglong)uVar2 | (ulonglong)DAT_1028f6c0) - DAT_1028f6b0);
}

