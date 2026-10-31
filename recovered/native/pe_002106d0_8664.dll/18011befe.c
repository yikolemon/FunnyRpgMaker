/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011befe */

longlong FUN_18011befe(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x448);
  if ((((lVar2 == 0) || (*(char *)(lVar2 + 0x10a) == '\0')) &&
      (lVar2 = param_1, *(longlong *)(param_1 + 0x4c8) != 0)) &&
     ((*(longlong *)(*(longlong *)(param_1 + 0x4c8) + 0x40) != 0 &&
      (lVar1 = FUN_180153820(), lVar1 != 0)))) {
    lVar2 = *(longlong *)(lVar1 + 8);
  }
  return lVar2;
}

