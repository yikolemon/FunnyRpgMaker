/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c70f0 */

undefined8 FUN_1801c70f0(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_1801c68b0();
  if ((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    FUN_1801c7114();
    uVar2 = 1;
  }
  return uVar2;
}

