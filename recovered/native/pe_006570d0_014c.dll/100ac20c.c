/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ac20c */

int * FUN_100ac20c(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  float fVar4;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_2c;
  float *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c45b0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  puVar3 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar3 = (undefined4 *)*param_2;
  }
  uVar1 = FUN_1001c721(puVar3,param_2[4]);
  FUN_1004340a(&local_38,param_2,uVar1);
  if (local_34 == 0) {
    local_24 = uVar1;
    if (local_28[2] == 1.1769572e-34) {
                    /* WARNING: Subroutine does not return */
      FUN_10228490("unordered_map/set too long");
    }
    FUN_100ac382(local_28 + 1,param_2);
    local_14 = 0;
    fVar4 = (float)((double)((ulonglong)((int)local_28[2] + 1) | (ulonglong)DAT_1028f6b0) -
                   DAT_1028f6b0) /
            (float)((double)((ulonglong)(uint)local_28[7] | (ulonglong)DAT_1028f6b0) - DAT_1028f6b0)
    ;
    uVar1 = local_24;
    if (*local_28 <= fVar4 && fVar4 != *local_28) {
      FUN_100a9fb4();
      uVar1 = local_24;
      FUN_1004340a(&local_40,local_2c + 8,local_24);
      local_34 = local_3c;
      local_38 = local_40;
    }
    iVar2 = local_2c;
    local_2c = 0;
    iVar2 = FUN_10033d76(uVar1,local_38,iVar2);
    *param_1 = iVar2;
    *(undefined1 *)(param_1 + 1) = 1;
    local_14 = 0xffffffff;
    FUN_100aa046();
  }
  else {
    *param_1 = local_34;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

