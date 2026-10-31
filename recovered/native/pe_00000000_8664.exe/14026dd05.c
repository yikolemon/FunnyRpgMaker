/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14026dd05 */

/* WARNING: Removing unreachable block (ram,0x00014026dd75) */

void FUN_14026dd05(void)

{
  longlong *plVar1;
  longlong unaff_RBP;
  
  FUN_14021331c(unaff_RBP + -0x20);
  FUN_140268dc2(unaff_RBP + 0x2e0);
  plVar1 = (longlong *)(unaff_RBP + 0x228);
  FUN_14027e16a(plVar1,plVar1,*(undefined8 *)(*plVar1 + 8));
  thunk_FUN_1404a2310(*plVar1,0x40);
  FUN_14027ca26(unaff_RBP + 0xc0);
  FUN_14021331c(unaff_RBP + 0x1d8);
  FUN_1402125bc(unaff_RBP + 0xa0);
  return;
}

