/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e8a3e */

void __fastcall FUN_100e8a3e(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    uVar4 = *(int *)(param_1 + 8) * 0x30;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      if (0x1f < (uint)((iVar1 + -4) - iVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar4 = uVar4 + 0x23;
    }
    FUN_102283a0(iVar3,uVar4);
  }
  return;
}

