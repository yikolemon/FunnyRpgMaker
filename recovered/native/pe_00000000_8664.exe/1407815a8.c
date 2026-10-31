/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407815a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407815a8(undefined8 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(ulonglong)_DAT_1fe8808b1039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_1fe8808b1039d74c;
  FUN_14075b751(param_1,*(undefined4 *)pcVar1);
  return;
}

