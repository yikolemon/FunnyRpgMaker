/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076e606 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14076e606(int param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (char *)(ulonglong)_DAT_1fbc888b1039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_1fbc888b1039d74c;
  if (*(int *)(pcVar1 + 0x1fc8) < param_1) {
    FUN_14075a0a4(*(undefined4 *)(pcVar1 + 0x14cc));
    uVar2 = FUN_14076e40c();
    return uVar2;
  }
  pcVar1[0x1ed0] = '\0';
  pcVar1[0x1ed1] = '\0';
  pcVar1[0x1ed2] = '\0';
  pcVar1[0x1ed3] = '\0';
  return 0;
}

