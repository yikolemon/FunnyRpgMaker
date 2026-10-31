/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00423033 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00423033(undefined4 param_1,int param_2,uint param_3)

{
  double dVar1;
  uint uVar2;
  undefined1 auVar3 [10];
  
  auVar3 = FUN_004924e0(param_1,_DAT_004a88c0 & param_2,_UNK_004a88c4 & param_3,-0x51eb851f,
                        0x3fdae147);
  dVar1 = (double)(float10)auVar3;
  param_2 = (int)((ulonglong)dVar1 >> 0x20);
  uVar2 = FUN_00424eb0((double)CONCAT44(param_3,param_2));
  return (float10)(((double)(int)uVar2 * DAT_004d7dd0 * dVar1) / (dVar1 + DAT_004d7dd8));
}

