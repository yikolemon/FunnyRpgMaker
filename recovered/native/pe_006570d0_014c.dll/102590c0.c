/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102590c0 */

undefined4 FUN_102590c0(void)

{
  int iVar1;
  
  iVar1 = FUN_102723b0();
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x18);
  }
  return 0;
}

