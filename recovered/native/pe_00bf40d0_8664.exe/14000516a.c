/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000516a */

longlong FUN_14000516a(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((*(ulonglong *)(lVar1 + 0x18) <= param_2) ||
     (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + param_2 * 8), lVar2 == 0)) {
    if ((*(char *)(lVar1 + 0x24) == '\x01') &&
       (lVar1 = FUN_140086950(), param_2 < *(ulonglong *)(lVar1 + 0x18))) {
      return *(longlong *)(*(longlong *)(lVar1 + 0x10) + param_2 * 8);
    }
    lVar2 = 0;
  }
  return lVar2;
}

