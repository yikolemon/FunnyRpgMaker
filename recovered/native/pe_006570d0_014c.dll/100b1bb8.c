/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b1bb8 */

void __fastcall FUN_100b1bb8(int param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_100b1b3b();
    iVar1 = *(int *)(param_1 + 4);
    uVar3 = *(int *)(param_1 + 8) * 0x10;
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

