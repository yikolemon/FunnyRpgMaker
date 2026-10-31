/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018c8a0 */

short FUN_14018c8a0(longlong param_1,short param_2)

{
  short *psVar1;
  ulonglong uVar2;
  short *psVar3;
  short sVar4;
  
  uVar2 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar2 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar2)) &&
     ((param_2 == -1 || (*(short *)(uVar2 - 2) == param_2)))) {
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -2;
    if (param_2 == -1) {
      param_2 = 0;
    }
    return param_2;
  }
  if ((*(longlong *)(param_1 + 0x80) != 0) && (param_2 != -1)) {
    if ((*(longlong *)(param_1 + 0x68) == 0) && (sVar4 = FUN_1401aa3dc(param_2), sVar4 != -1)) {
      return param_2;
    }
    psVar1 = (short *)(param_1 + 0x70);
    if ((short *)**(longlong **)(param_1 + 0x38) != psVar1) {
      *psVar1 = param_2;
      psVar3 = (short *)**(longlong **)(param_1 + 0x18);
      if (psVar3 != psVar1) {
        *(short **)(param_1 + 0x88) = psVar3;
        *(longlong *)(param_1 + 0x90) =
             **(longlong **)(param_1 + 0x38) + (longlong)**(int **)(param_1 + 0x50) * 2;
      }
      **(longlong **)(param_1 + 0x18) = (longlong)psVar1;
      **(longlong **)(param_1 + 0x38) = (longlong)psVar1;
      **(undefined4 **)(param_1 + 0x50) = 1;
      return param_2;
    }
  }
  return -1;
}

