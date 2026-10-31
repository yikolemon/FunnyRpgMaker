/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00405a7c */

bool FUN_00405a7c(ushort param_1)

{
  int iVar1;
  
  iVar1 = FUN_00481490();
  return (param_1 & (ushort)iVar1) != 0;
}

