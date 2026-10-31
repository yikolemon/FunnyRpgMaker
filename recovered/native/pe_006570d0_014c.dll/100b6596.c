/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b6596 */

void __fastcall FUN_100b6596(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 8);
  if (0 < iVar3) {
    uVar4 = iVar3 + 1;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 4) + -8 + uVar4 * 4);
      if (iVar3 != 0) {
        FUN_102283a0(iVar3,0x10);
      }
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
    iVar3 = *(int *)(param_1 + 8);
  }
  iVar1 = *(int *)(param_1 + 4);
  uVar4 = iVar3 * 4;
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
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

