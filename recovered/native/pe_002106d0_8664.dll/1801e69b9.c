/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e69b9 */

void FUN_1801e69b9(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x18) - *(int *)(param_3 + 0x1c);
  if (iVar1 != 0) {
    for (; param_1 < param_3; param_1 = param_1 + 0x30) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x1c) + iVar1;
    }
    while (param_3 + 0x30 <= param_2) {
      *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x4c) + iVar1;
      param_3 = param_3 + 0x30;
    }
  }
  return;
}

