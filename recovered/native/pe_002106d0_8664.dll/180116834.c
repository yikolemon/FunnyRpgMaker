/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116834 */

longlong FUN_180116834(longlong param_1,char param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x418);
      if (param_2 != '\0') {
        lVar1 = *(longlong *)(lVar1 + 0x420);
      }
      if (param_3 != '\0') {
        lVar1 = *(longlong *)(lVar1 + 0x428);
      }
      bVar2 = param_1 != lVar1;
      param_1 = lVar1;
    } while (bVar2);
    return lVar1;
  }
  return 0;
}

