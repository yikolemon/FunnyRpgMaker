/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004161c */

void Unwind_1004161c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -0x14) + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}

