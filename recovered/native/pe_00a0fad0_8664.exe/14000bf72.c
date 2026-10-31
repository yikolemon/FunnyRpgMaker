/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000bf72 */

ulonglong FUN_14000bf72(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)*(int **)(param_1 + 0x38);
  if (pbVar2 == (byte *)0x0) {
    return 0xffffffff;
  }
  if (**(int **)(param_1 + 0x50) < 1) {
    pbVar1 = (byte *)**(undefined8 **)(param_1 + 0x40);
    if (pbVar1 == (byte *)0x0) {
      return 0xffffffff;
    }
    if ((*(byte *)(param_1 + 0x70) & 4) != 0) {
      return 0xffffffff;
    }
    pbVar3 = *(byte **)(param_1 + 0x68);
    if (*(byte **)(param_1 + 0x68) < pbVar1) {
      pbVar3 = pbVar1;
    }
    if (pbVar3 <= pbVar2) {
      return 0xffffffff;
    }
    *(byte **)(param_1 + 0x68) = pbVar3;
    **(int **)(param_1 + 0x50) = (int)pbVar3 - **(int **)(param_1 + 0x38);
    pbVar2 = (byte *)**(undefined8 **)(param_1 + 0x38);
  }
  return (ulonglong)*pbVar2;
}

