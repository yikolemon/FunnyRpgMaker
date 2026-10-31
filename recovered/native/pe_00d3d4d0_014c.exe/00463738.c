/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00463738 */

int __fastcall FUN_00463738(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iStack_18;
  int local_14;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&iStack_18;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(*(int *)(iVar1 + 0x80) + 0x34) == 0) {
    param_2 = FUN_004646ed(*(int *)(param_1 + 0x214),param_2);
    if ((int)param_2 < 0) {
      iVar1 = 0x12;
      goto LAB_004637af;
    }
    iVar1 = *(int *)(param_1 + 4);
  }
  iVar1 = (**(code **)(param_1 + 0x254))(iVar1,param_2,&local_14,&iStack_18);
  if (iVar1 == 0) {
    param_3[1] = local_14;
    iStack_18 = iStack_18 + local_14;
    if (local_14 == 0) {
      iStack_18 = 0;
    }
    param_3[2] = iStack_18;
    param_3[3] = local_14;
    iVar1 = 0;
  }
LAB_004637af:
  if (DAT_0050e8c0 == (local_10 ^ (uint)&iStack_18)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_10 ^ (uint)&iStack_18);
}

