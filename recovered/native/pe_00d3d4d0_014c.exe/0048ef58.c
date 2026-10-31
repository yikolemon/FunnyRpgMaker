/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048ef58 */

void FUN_0048ef58(void)

{
  uint *puVar1;
  int unaff_EBP;
  
  puVar1 = (uint *)(*(int *)**(undefined4 **)(unaff_EBP + 0x10) + 0x350);
  *puVar1 = *puVar1 & 0xffffffef;
  return;
}

