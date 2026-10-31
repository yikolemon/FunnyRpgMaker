/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10107cf6 */

void FUN_10107cf6(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_1039d74c;
  *(uint *)(DAT_1039d74c + 0x1ed0) = *(uint *)(DAT_1039d74c + 0x1ed0) | 2;
  uVar1 = *param_1;
  *(undefined4 *)(iVar2 + 0x1ef8) = param_1[1];
  *(undefined4 *)(iVar2 + 0x1ef4) = uVar1;
  *(uint *)(iVar2 + 0x1ed8) = param_2 + (uint)(param_2 == 0);
  return;
}

