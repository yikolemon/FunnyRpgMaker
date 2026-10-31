/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017ebf9 */

void Unwind_1017ebf9(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int iVar3;
  
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  uVar2 = *(undefined4 *)(unaff_EBP + 0x20);
  for (iVar3 = *(int *)(unaff_EBP + -0x14); iVar3 != iVar1; iVar3 = iVar3 + 0x2c) {
    FUN_10179724(uVar2,iVar3);
  }
  return;
}

