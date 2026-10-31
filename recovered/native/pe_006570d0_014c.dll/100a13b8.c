/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a13b8 */

void __fastcall FUN_100a13b8(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    iVar3 = **(int **)(param_1 + 0x20);
    iVar5 = 0x30;
    if (iVar3 == 0) {
      iVar3 = **(int **)(param_1 + 0x1c);
      iVar5 = 0x2c;
    }
    iVar1 = **(int **)(param_1 + 0xc);
    uVar4 = (iVar3 + **(int **)(param_1 + iVar5) * 2) - iVar1;
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
  **(undefined4 **)(param_1 + 0xc) = 0;
  **(undefined4 **)(param_1 + 0x1c) = 0;
  **(undefined4 **)(param_1 + 0x2c) = 0;
  **(undefined4 **)(param_1 + 0x10) = 0;
  **(undefined4 **)(param_1 + 0x20) = 0;
  **(undefined4 **)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xfe;
  return;
}

