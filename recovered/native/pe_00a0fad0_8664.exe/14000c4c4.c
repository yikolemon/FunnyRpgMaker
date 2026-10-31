/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000c4c4 */

void FUN_14000c4c4(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    lVar3 = **(longlong **)(param_1 + 0x40);
    lVar4 = 0x58;
    if (lVar3 == 0) {
      lVar3 = **(longlong **)(param_1 + 0x38);
      lVar4 = 0x50;
    }
    lVar1 = **(longlong **)(param_1 + 0x18);
    uVar5 = (**(int **)(param_1 + lVar4) + lVar3) - lVar1;
    lVar3 = lVar1;
    if (0xfff < uVar5) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_1400ddcd0(lVar3,uVar5);
  }
  **(undefined8 **)(param_1 + 0x18) = 0;
  **(undefined8 **)(param_1 + 0x38) = 0;
  **(undefined4 **)(param_1 + 0x50) = 0;
  **(undefined8 **)(param_1 + 0x20) = 0;
  **(undefined8 **)(param_1 + 0x40) = 0;
  **(undefined4 **)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) & 0xfe;
  return;
}

