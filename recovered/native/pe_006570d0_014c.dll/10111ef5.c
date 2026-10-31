/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111ef5 */

undefined4 FUN_10111ef5(void)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  return *(undefined4 *)(*(int *)(iVar1 + 0x14cc) + 0x2e8);
}

