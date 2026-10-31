/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002347e */

void Unwind_1002347e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -0x14) + 4);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}

