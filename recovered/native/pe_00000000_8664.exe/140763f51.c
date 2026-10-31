/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140763f51 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140763f51(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(ulonglong)_DAT_14cc888b1039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_14cc888b1039d74c;
  *(undefined1 *)(param_1 + 0xfb) = 1;
  FUN_14075a0a4(*(undefined4 *)(pcVar1 + 0x14cc));
  FUN_140763f97();
  return;
}

