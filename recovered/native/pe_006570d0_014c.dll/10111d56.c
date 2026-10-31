/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111d56 */

void FUN_10111d56(undefined8 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_1039d74c;
  *(uint *)(DAT_1039d74c + 0x1ed0) = *(uint *)(DAT_1039d74c + 0x1ed0) | 1;
  *(undefined8 *)(iVar2 + 0x1ee4) = *param_1;
  uVar1 = *param_3;
  *(undefined4 *)(iVar2 + 0x1ef0) = param_3[1];
  *(undefined4 *)(iVar2 + 0x1eec) = uVar1;
  *(uint *)(iVar2 + 0x1ed4) = param_2 + (uint)(param_2 == 0);
  *(undefined1 *)(iVar2 + 0x1f14) = 1;
  return;
}

