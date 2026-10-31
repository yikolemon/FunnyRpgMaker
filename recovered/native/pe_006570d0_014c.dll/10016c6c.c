/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10016c6c */

void __thiscall FUN_10016c6c(int *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    iVar4 = param_1[1];
    if (iVar3 != iVar4) {
      do {
        FUN_10013efc();
        iVar3 = iVar3 + 0x10;
      } while (iVar3 != iVar4);
      iVar3 = *param_1;
    }
    uVar2 = param_1[2] - iVar3;
    iVar4 = iVar3;
    if (0xfff < uVar2) {
      iVar4 = *(int *)(iVar3 + -4);
      if (0x1f < (uint)((iVar3 + -4) - iVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar2 = uVar2 + 0x23;
    }
    FUN_102283a0(iVar4,uVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x10 + param_2;
  param_1[2] = param_4 * 0x10 + param_2;
  return;
}

