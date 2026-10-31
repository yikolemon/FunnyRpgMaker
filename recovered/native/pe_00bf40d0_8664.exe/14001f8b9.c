/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001f8b9 */

undefined8 FUN_14001f8b9(longlong param_1,char *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = FUN_14001d3fa(param_1,param_2);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*plVar1 + 0x18);
  }
  return uVar2;
}

