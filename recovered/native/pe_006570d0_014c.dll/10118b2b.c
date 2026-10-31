/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10118b2b */

int FUN_10118b2b(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2e4) != -1) {
    return *(int *)(param_1 + 0x2e4) + *(int *)(DAT_1039d74c + 0x26f0);
  }
  iVar1 = FUN_10118aeb(*(undefined4 *)(param_1 + 8));
  return iVar1;
}

