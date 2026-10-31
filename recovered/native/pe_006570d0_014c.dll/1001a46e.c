/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001a46e */

void __fastcall FUN_1001a46e(int param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    uVar3 = *(int *)(param_1 + 8) * 4;
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
  return;
}

