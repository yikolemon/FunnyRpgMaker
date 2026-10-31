/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011c288 */

void Unwind_1011c288(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x2c);
  if (iVar1 != 0) {
    FUN_100fa2cb(iVar1);
  }
  return;
}

