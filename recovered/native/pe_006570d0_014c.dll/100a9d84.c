/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a9d84 */

int * FUN_100a9d84(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  float fVar4;
  undefined4 *local_44;
  int local_40;
  undefined4 *local_3c;
  int local_38;
  int local_30;
  float *local_2c;
  undefined4 local_28;
  undefined1 local_21;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_44;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4400;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  puVar3 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar3 = (undefined4 *)*param_2;
  }
  uVar1 = FUN_1001c721(puVar3,param_2[4]);
  FUN_1004340a(&local_3c,param_2,uVar1);
  if (local_38 == 0) {
    local_28 = uVar1;
    if (local_2c[2] == 1.1769572e-34) {
                    /* WARNING: Subroutine does not return */
      FUN_10228490("unordered_map/set too long");
    }
    local_44 = param_2;
    FUN_100a9f08(local_2c + 1,&DAT_102910a0,&local_44,&local_21);
    local_14 = 0;
    fVar4 = (float)((double)((ulonglong)((int)local_2c[2] + 1) | (ulonglong)DAT_1028f6b0) -
                   DAT_1028f6b0) /
            (float)((double)((ulonglong)(uint)local_2c[7] | (ulonglong)DAT_1028f6b0) - DAT_1028f6b0)
    ;
    uVar1 = local_28;
    if (*local_2c <= fVar4 && fVar4 != *local_2c) {
      FUN_100a9fb4();
      uVar1 = local_28;
      FUN_1004340a(&local_44,local_30 + 8,local_28);
      local_38 = local_40;
      local_3c = local_44;
    }
    iVar2 = local_30;
    local_30 = 0;
    iVar2 = FUN_10033d76(uVar1,local_3c,iVar2);
    *param_1 = iVar2;
    *(undefined1 *)(param_1 + 1) = 1;
    local_14 = 0xffffffff;
    FUN_100aa046();
  }
  else {
    *param_1 = local_38;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

