/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111e98 */

void FUN_10111e98(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  *(uint *)(DAT_1039d74c + 0x1ed0) = *(uint *)(DAT_1039d74c + 0x1ed0) | 0x1000;
  *(uint *)(iVar1 + 0x1ee0) = param_2 + (uint)(param_2 == 0);
  *(undefined4 *)(iVar1 + 0x1f38) = param_1;
  return;
}

