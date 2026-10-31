/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076f185 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14076f185(void)

{
  uint uVar1;
  char *pcVar2;
  longlong unaff_RBP;
  int unaff_ESI;
  
  uVar1 = _DAT_20d9b8801039d74c;
  pcVar2 = (char *)(ulonglong)_DAT_20d9b8801039d74c;
  *pcVar2 = *pcVar2 + (char)_DAT_20d9b8801039d74c;
  *(int *)(unaff_RBP + 9) = *(int *)(unaff_RBP + 9) + unaff_ESI;
  if (*(int *)(pcVar2 + 0x2124) != 0) {
    return 0;
  }
  return CONCAT31((int3)(uVar1 >> 8),*(int *)(pcVar2 + 0x2194) == 0);
}

