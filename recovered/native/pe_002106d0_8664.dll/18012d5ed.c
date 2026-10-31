/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012d5ed */

void FUN_18012d5ed(longlong param_1)

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

