/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017e1c5 */

void FUN_18017e1c5(longlong param_1)

{
  int iVar1;
  
  *(undefined8 *)(param_1 + 0x4820) = 0;
  *(undefined4 *)(param_1 + 0x482c) = 0;
  *(undefined4 *)(param_1 + 0x47d8) = 0;
  *(undefined4 *)(param_1 + 0x4778) = 0;
  *(undefined4 *)(param_1 + 0x4718) = 0;
  *(undefined4 *)(param_1 + 0x46b8) = 0;
  *(undefined1 *)(param_1 + 0x4828) = 0xff;
  iVar1 = 0x7fffffff;
  if (*(int *)(param_1 + 0x4868) != 0) {
    iVar1 = *(int *)(param_1 + 0x4868);
  }
  *(int *)(param_1 + 0x486c) = iVar1;
  *(undefined4 *)(param_1 + 0x4844) = 0;
  return;
}

