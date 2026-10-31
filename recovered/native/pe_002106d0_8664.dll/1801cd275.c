/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cd275 */

undefined8 FUN_1801cd275(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_1801caa22();
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*plVar1 + 0x18);
  }
  return uVar2;
}

