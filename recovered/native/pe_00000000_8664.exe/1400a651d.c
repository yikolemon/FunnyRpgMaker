/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a651d */

void FUN_1400a651d(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1;
  while ((*(longlong *)(lVar1 + 0x418) != lVar1 && ((*(byte *)(lVar1 + 0x17) & 0x14) == 0))) {
    lVar1 = *(longlong *)(lVar1 + 0x408);
    if (lVar1 == 0) {
      return;
    }
  }
  if (lVar1 == param_1) {
    return;
  }
  *(longlong *)(lVar1 + 0x448) = param_1;
  return;
}

