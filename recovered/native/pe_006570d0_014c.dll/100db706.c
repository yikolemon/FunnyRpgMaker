/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100db706 */

void Unwind_100db706(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x12a);
  *(undefined1 *)(unaff_EBP + -0x129) = uVar1;
  FUN_10001fee();
  *(undefined1 *)(unaff_EBP + -0x129) = uVar1;
  return;
}

