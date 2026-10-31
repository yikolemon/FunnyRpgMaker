/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769952 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140769952(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(ulonglong)_DAT_14cc808b1039d74c;
  *pcVar2 = *pcVar2 + (char)_DAT_14cc808b1039d74c;
  uVar1 = *(uint *)(pcVar2 + 0x230);
  if (0 < (int)uVar1) {
    *(undefined4 *)(pcVar2 + 0x220) =
         *(undefined4 *)(((ulonglong)*(uint *)(pcVar2 + 0x238) - 4) + (ulonglong)uVar1 * 4);
    *(ulonglong *)(param_3 + 0x230) = (ulonglong)uVar1;
    return;
  }
  FUN_140754dc5();
  return;
}

