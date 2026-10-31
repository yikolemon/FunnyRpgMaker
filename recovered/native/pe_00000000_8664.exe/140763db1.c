/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140763db1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140763db1(int param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = _DAT_1528888b1039d74c;
  pcVar2 = (char *)(ulonglong)_DAT_1528888b1039d74c;
  *pcVar2 = *pcVar2 + (char)_DAT_1528888b1039d74c;
  if (param_1 != 0) {
    return CONCAT31((int3)(uVar1 >> 8),param_1 == *(int *)(pcVar2 + 0x1e80));
  }
  return 0;
}

