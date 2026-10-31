/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004947bc */

void FUN_004947bc(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_00494580();
  if (0 < *(int *)((int)pvVar1 + 0x18)) {
    pvVar1 = FUN_00494580();
    *(int *)((int)pvVar1 + 0x18) = *(int *)((int)pvVar1 + 0x18) + -1;
  }
  return;
}

