/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001fb4c */

void __thiscall FUN_1001fb4c(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar3 = param_1[2] - iVar1;
    iVar4 = iVar1;
    if (0xfff < uVar3) {
      iVar4 = *(int *)(iVar1 + -4);
      if (0x1f < (uint)((iVar1 + -4) - iVar4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar3 = uVar3 + 0x23;
    }
    FUN_102283a0(iVar4,uVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}

