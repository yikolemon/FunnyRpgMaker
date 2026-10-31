/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075beda */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14075beda(uint param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  
  *(char *)(ulonglong)_DAT_1fbc888b1039d74c =
       *(char *)(ulonglong)_DAT_1fbc888b1039d74c + (char)_DAT_1fbc888b1039d74c;
  if (0 < (int)param_1) {
    do {
      uVar1 = *(uint *)(ulonglong)((param_3 + param_1 * 0x28) - 0x24);
      if ((uVar1 != 0) && ((*(byte *)((ulonglong)uVar1 + 0xf) & 8) != 0)) {
        return (ulonglong)uVar1;
      }
    } while (1 < param_1);
  }
  return 0;
}

