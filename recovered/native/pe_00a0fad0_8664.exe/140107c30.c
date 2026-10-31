/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140107c30 */

undefined8 FUN_140107c30(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_14011d6e0();
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

