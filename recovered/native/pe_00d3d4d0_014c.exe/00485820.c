/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00485820 */

undefined4 FUN_00485820(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_00494630();
  if (pvVar1 != (PVOID)0x0) {
    return *(undefined4 *)((int)pvVar1 + 0x18);
  }
  return 0;
}

