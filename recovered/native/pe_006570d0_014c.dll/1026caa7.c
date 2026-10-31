/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026caa7 */

void FUN_1026caa7(void)

{
  uint *puVar1;
  int unaff_EBP;
  
  puVar1 = (uint *)(*(int *)**(undefined4 **)(unaff_EBP + 0x10) + 0x350);
  *puVar1 = *puVar1 & 0xffffffef;
  return;
}

