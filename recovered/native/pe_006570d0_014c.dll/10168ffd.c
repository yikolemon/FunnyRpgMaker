/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10168ffd */

undefined4 FUN_10168ffd(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x1e8);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}

