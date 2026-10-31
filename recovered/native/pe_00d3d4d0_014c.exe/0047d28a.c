/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047d28a */

bool __fastcall FUN_0047d28a(int param_1)

{
  int *piVar1;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
     ((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 && (*piVar1 == param_1)))) {
    return piVar1[1] - 0x3f54U < 0xffffffe0;
  }
  return true;
}

