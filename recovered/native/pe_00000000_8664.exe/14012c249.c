/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012c249 */

undefined8 FUN_14012c249(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_1401299f6();
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*plVar1 + 0x18);
  }
  return uVar2;
}

