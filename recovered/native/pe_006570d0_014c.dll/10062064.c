/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10062064 */

void FUN_10062064(undefined4 param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_3 * 4 + 4;
  iVar2 = param_2;
  if (0xfff < uVar3) {
    iVar2 = *(int *)(param_2 + -4);
    if (0x1f < (uint)((param_2 + -4) - iVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = param_3 * 4 + 0x27;
  }
  FUN_102283a0(iVar2,uVar3);
  return;
}

