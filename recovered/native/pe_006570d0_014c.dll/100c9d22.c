/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c9d22 */

void Unwind_100c9d22(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -0x14) + 8);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}

