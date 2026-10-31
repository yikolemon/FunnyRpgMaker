/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10103c09 */

void FUN_10103c09(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  if (*(int *)(DAT_1039d74c + 0x1528) == param_1) {
    *(int *)(DAT_1039d74c + 0x152c) = param_1;
  }
  if (*(int *)(iVar1 + 0x1554) == param_1) {
    *(undefined1 *)(iVar1 + 0x155d) = 1;
  }
  return;
}

