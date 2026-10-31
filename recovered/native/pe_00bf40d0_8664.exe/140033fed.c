/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140033fed */

void FUN_140033fed(ulonglong param_1,ulonglong param_2,ulonglong param_3)

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

