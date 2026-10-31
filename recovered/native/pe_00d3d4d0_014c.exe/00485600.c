/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00485600 */

undefined4 __cdecl FUN_00485600(int param_1)

{
  int *piVar1;
  PVOID pvVar2;
  
  pvVar2 = FUN_00494580();
  piVar1 = *(int **)((int)pvVar2 + 0x24);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return 0;
}

