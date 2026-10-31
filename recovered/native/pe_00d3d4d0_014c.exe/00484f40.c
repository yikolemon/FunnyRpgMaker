/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00484f40 */

void FUN_00484f40(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0040a56c();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_0041b893();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}

