/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015098c */

undefined8 FUN_14015098c(longlong param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x660) == 0xffff) {
      return 6;
    }
    if (param_2 != (longlong *)0x0) {
      lVar2 = *(longlong *)(lVar1 + 0x10f0);
      if (lVar2 == 0) {
        lVar2 = FUN_1401502ed(lVar1);
        *(longlong *)(lVar1 + 0x10f0) = lVar2;
      }
      *param_2 = lVar2;
    }
    if (param_3 != (longlong *)0x0) {
      lVar2 = *(longlong *)(lVar1 + 0x10f8);
      if (lVar2 == 0) {
        lVar2 = FUN_1401502ed(lVar1,*(undefined4 *)(lVar1 + 0x664));
        *(longlong *)(lVar1 + 0x10f8) = lVar2;
      }
      *param_3 = lVar2;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(lVar1 + 0x668);
    }
  }
  return 0;
}

