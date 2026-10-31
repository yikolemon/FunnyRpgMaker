/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769709 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140769709(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(ulonglong)_DAT_1fa4888b1039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_1fa4888b1039d74c;
  if (1 < (int)param_1) {
    *(int *)(pcVar1 + 0x1fa4) = (int)param_1 + -1;
    *(undefined4 *)(pcVar1 + 0x1e40) =
         *(undefined4 *)(((ulonglong)*(uint *)(pcVar1 + 0x1fac) - 8) + param_1 * 4);
    return;
  }
  FUN_140754dc5();
  return;
}

