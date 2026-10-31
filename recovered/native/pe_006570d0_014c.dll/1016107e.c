/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016107e */

void FUN_1016107e(int param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x10) + 0x56 + param_2 * 0x74);
  *(short *)(param_1 + 0x1ce) = (short)param_2;
  *(undefined2 *)(param_1 + 0x1d0) = 0xffff;
  iVar2 = FUN_101610c2(param_3);
  if (iVar2 != sVar1) {
    *(short *)(param_1 + 0x1d0) = (short)iVar2;
  }
  return;
}

