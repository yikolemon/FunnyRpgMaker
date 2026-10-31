/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076b438 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076b438(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(ulonglong)_DAT_14cc808b1039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_14cc808b1039d74c;
  if (1 < (int)*(uint *)(pcVar1 + 0x138)) {
    *(ulonglong *)(param_3 + 0x138) = (ulonglong)*(uint *)(pcVar1 + 0x138);
    return;
  }
  FUN_140754dc5();
  return;
}

