/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140007378 */

void FUN_140007378(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    lVar3 = **(longlong **)(param_1 + 0x40);
    lVar4 = 0x58;
    if (lVar3 == 0) {
      lVar3 = **(longlong **)(param_1 + 0x38);
      lVar4 = 0x50;
    }
    lVar1 = **(longlong **)(param_1 + 0x18);
    if ((0xfff < (ulonglong)((lVar3 + (longlong)**(int **)(param_1 + lVar4) * 2) - lVar1)) &&
       (0x1f < (ulonglong)((lVar1 + -8) - *(longlong *)(lVar1 + -8)))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    FUN_1400863f0();
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

