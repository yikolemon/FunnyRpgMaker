/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140058a04 */

undefined8 FUN_140058a04(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = FUN_14001d3fa(*(longlong *)(param_1 + 8),"truetype");
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0xb;
  }
  else {
    *(longlong *)(param_1 + 0x38) = *plVar1;
    uVar2 = 0;
  }
  return uVar2;
}

