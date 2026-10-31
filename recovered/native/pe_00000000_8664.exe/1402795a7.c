/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402795a7 */

void Unwind_1402795a7(void)

{
  longlong *plVar1;
  longlong unaff_RBP;
  
  plVar1 = (longlong *)(unaff_RBP + -0x10);
  FUN_1402718c0(plVar1,plVar1,*(undefined8 *)(*plVar1 + 8));
  thunk_FUN_1404a2310(*plVar1,0x30);
  return;
}

