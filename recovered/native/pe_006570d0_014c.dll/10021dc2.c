/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10021dc2 */

void Unwind_10021dc2(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -0x14) + 0xd0);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}

