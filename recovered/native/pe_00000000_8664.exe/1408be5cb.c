/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408be5cb */

void FUN_1408be5cb(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 2) {
    *(undefined1 *)(param_1 + 0x24) = 0;
    return;
  }
  if (((iVar1 == 3) || (iVar1 == 4)) || (iVar1 == 8)) {
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  return;
}

