/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cccac */

undefined8 FUN_1801cccac(longlong *param_1)

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

