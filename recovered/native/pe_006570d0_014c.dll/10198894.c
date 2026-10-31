/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10198894 */

undefined4 FUN_10198894(void)

{
  int iVar1;
  
  iVar1 = FUN_100fbf7e();
  if (iVar1 != 0) {
    iVar1 = FUN_1010330d();
    return *(undefined4 *)(iVar1 + 0x80);
  }
  return 0;
}

