/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075b935 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14075b935(void)

{
  uint uVar1;
  char *pcVar2;
  longlong unaff_RBP;
  int unaff_ESI;
  
  uVar1 = _DAT_2250b8801039d74c;
  pcVar2 = (char *)(ulonglong)_DAT_2250b8801039d74c;
  *pcVar2 = *pcVar2 + (char)_DAT_2250b8801039d74c;
  *(int *)(unaff_RBP + 0xb) = *(int *)(unaff_RBP + 0xb) + unaff_ESI;
  return CONCAT31((int3)(uVar1 >> 8),*(int *)(pcVar2 + 0x22d0) != 0);
}

