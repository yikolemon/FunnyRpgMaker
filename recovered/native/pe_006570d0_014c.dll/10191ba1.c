/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10191ba1 */

void Unwind_10191ba1(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -0x30) = uVar1;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    FUN_100fa2cb(*(int *)(unaff_EBP + -0x24));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = uVar1;
  return;
}

