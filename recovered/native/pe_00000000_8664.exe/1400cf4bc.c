/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cf4bc */

longlong FUN_1400cf4bc(longlong param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  FUN_1400cf543();
  if (*(short *)(param_1 + 0xa18) == 99) {
    FUN_1400cf557(param_1);
  }
  if (param_2 < 1000) {
    iVar2 = *(int *)(param_1 + 0xa1c);
    while (999 < iVar2 + param_2) {
      FUN_1400cf557(param_1);
      iVar2 = *(int *)(param_1 + 0xa1c);
    }
    sVar1 = *(short *)(param_1 + 0xa18);
    *(short *)(param_1 + 0xa18) = sVar1 + 1;
    param_1 = (longlong)sVar1 * 0x10 + param_1;
  }
  else {
    *(undefined2 *)(param_1 + 0xa18) = 0;
    *(undefined4 *)(param_1 + 0xa1c) = 0;
    param_1 = 0;
  }
  return param_1;
}

