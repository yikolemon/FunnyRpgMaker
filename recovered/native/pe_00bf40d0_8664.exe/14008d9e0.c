/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008d9e0 */

undefined8 FUN_14008d9e0(longlong param_1)

{
  longlong *plVar1;
  PVOID pvVar2;
  
  pvVar2 = FUN_14009d690();
  plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return 1;
    }
    if (*plVar1 == param_1) break;
    plVar1 = (longlong *)plVar1[1];
  }
  return 0;
}

