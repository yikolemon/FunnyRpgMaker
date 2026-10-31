/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047fb30 */

undefined4 thunk_FUN_00485820(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_00494630();
  if (pvVar1 != (PVOID)0x0) {
    return *(undefined4 *)((int)pvVar1 + 0x18);
  }
  return 0;
}

