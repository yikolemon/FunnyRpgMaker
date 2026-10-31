/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769dc5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140769dc5(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(ulonglong)_DAT_14cc888b1039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_14cc888b1039d74c;
  *(undefined1 *)(param_1 + 0xfb) = 1;
  return *(undefined4 *)((ulonglong)*(uint *)(pcVar1 + 0x14cc) + 0x2e8);
}

