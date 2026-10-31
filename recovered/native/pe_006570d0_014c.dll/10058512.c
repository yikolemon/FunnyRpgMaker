/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10058512 */

void Unwind_10058512(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  FUN_10004eae();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  return;
}

