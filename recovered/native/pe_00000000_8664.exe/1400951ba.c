/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400951ba */

longlong FUN_1400951ba(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x448);
  if ((((lVar2 == 0) || (*(char *)(lVar2 + 0x10a) == '\0')) &&
      (lVar2 = param_1, *(longlong *)(param_1 + 0x4c8) != 0)) &&
     ((*(longlong *)(*(longlong *)(param_1 + 0x4c8) + 0x40) != 0 &&
      (lVar1 = FUN_1400cc750(), lVar1 != 0)))) {
    lVar2 = *(longlong *)(lVar1 + 8);
  }
  return lVar2;
}

