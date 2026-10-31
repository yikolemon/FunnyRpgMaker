/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402782c6 */

void FUN_1402782c6(void)

{
  longlong *plVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_R15;
  
  *(longlong *)(*(longlong *)(unaff_RBP + -8) + unaff_R15) = unaff_RBX;
  *(longlong *)(unaff_RBP + -0x28) = unaff_RBX;
  plVar1 = *(longlong **)(unaff_RBP + -0x10);
  *plVar1 = unaff_RBX;
  *(longlong **)(unaff_RBX + 8) = plVar1;
  return;
}

