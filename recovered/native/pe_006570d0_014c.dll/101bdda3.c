/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bdda3 */

undefined4 thunk_FUN_101bd5e3(void)

{
  int iVar1;
  
  iVar1 = FUN_100fbf7e();
  if (iVar1 != 0) {
    iVar1 = FUN_1010330d();
    return *(undefined4 *)(iVar1 + 0x84);
  }
  return 0;
}

