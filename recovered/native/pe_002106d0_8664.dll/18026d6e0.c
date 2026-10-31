/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026d6e0 */

undefined8 FUN_18026d6e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_18028cfc0();
  plVar1 = *(longlong **)(lVar2 + 0x58);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return 1;
    }
    if (*plVar1 == param_1) break;
    plVar1 = (longlong *)plVar1[1];
  }
  return 0;
}

