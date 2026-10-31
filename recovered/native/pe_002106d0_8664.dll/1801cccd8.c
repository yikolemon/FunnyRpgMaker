/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cccd8 */

longlong FUN_1801cccd8(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x118);
    if (param_3 != (longlong *)0x0) {
      if (*param_3 != 0) {
        lVar2 = *(longlong *)(*param_3 + 8);
      }
      *param_3 = 0;
    }
    for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 8)) {
      lVar1 = *(longlong *)(lVar2 + 0x10);
      if (*(int *)(lVar1 + 0x20) == param_2) {
        if (param_3 == (longlong *)0x0) {
          return lVar1;
        }
        *param_3 = lVar2;
        return lVar1;
      }
    }
  }
  return 0;
}

