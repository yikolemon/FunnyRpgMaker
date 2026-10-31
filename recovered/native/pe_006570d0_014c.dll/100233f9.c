/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100233f9 */

void Unwind_100233f9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + 8) + 4);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}

