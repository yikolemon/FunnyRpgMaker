/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014f370 */

void FUN_18014f370(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = DAT_180419160;
  *(longlong *)(DAT_180419160 + 0x1fb8) = param_1;
  *(undefined4 *)(lVar2 + 0x1fb0) = *(undefined4 *)(lVar2 + 0x1f9c);
  lVar1 = *(longlong *)(lVar2 + 0x2638);
  if (lVar1 == 0) {
    *(uint *)(lVar2 + 0x1fac) = *(uint *)(lVar2 + 0x1fac) | 0x200000;
  }
  else {
    *(uint *)(lVar2 + 0x1fac) = *(uint *)(lVar2 + 0x1fac) | 0x600000;
    if (*(longlong *)(lVar1 + 0x10) == param_1) {
      *(undefined1 *)(lVar1 + 0x55) = 1;
      return;
    }
  }
  return;
}

