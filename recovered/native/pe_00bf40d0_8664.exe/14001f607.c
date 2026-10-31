/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001f607 */

undefined8 FUN_14001f607(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = *param_1;
    uVar2 = 0x23;
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x90) != 0)) {
      *(longlong **)(lVar1 + 0x80) = param_1;
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x24;
}

