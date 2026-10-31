/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b1ade */

void __fastcall FUN_100b1ade(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  
  if (*param_1 != 0) {
    FUN_100b1b3b();
    iVar1 = *param_1;
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
  param_1[1] = param_3 * 0x10 + param_2;
  param_1[2] = param_4 * 0x10 + param_2;
  return;
}

