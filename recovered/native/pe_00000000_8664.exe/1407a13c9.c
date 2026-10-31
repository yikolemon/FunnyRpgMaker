/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a13c9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1407a13c9(longlong param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (char *)(ulonglong)_DAT_14cc888b1039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_14cc888b1039d74c;
  *(undefined1 *)(param_1 + 0xfb) = 1;
  if (*(char *)((ulonglong)*(uint *)(pcVar1 + 0x14cc) + 0xfe) != '\0') {
    return 0;
  }
  FUN_14075a0a4();
  uVar2 = FUN_14079fc89();
  return uVar2;
}

