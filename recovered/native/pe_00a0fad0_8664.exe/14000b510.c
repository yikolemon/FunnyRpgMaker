/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000b510 */

longlong FUN_14000b510(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((*(ulonglong *)(lVar1 + 0x18) <= param_2) ||
     (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + param_2 * 8), lVar2 == 0)) {
    if ((*(char *)(lVar1 + 0x24) == '\x01') &&
       (lVar1 = FUN_1400d4110(), param_2 < *(ulonglong *)(lVar1 + 0x18))) {
      return *(longlong *)(*(longlong *)(lVar1 + 0x10) + param_2 * 8);
    }
    lVar2 = 0;
  }
  return lVar2;
}

