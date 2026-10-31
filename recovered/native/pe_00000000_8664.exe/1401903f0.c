/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401903f0 */

undefined8 FUN_1401903f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_1401aae30();
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

