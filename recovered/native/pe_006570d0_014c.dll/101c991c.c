/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c991c */

int * FUN_101c991c(int *param_1,double *param_2)

{
  undefined4 uVar1;
  double *pdVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  float fVar4;
  undefined1 auStack_50 [4];
  float *local_4c;
  undefined1 local_45;
  undefined4 local_44;
  int local_3c;
  undefined8 local_38;
  double *local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_50;
  local_18 = 0xffffffff;
  local_1c = &LAB_101ca0c0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  local_38 = ~-(ulonglong)(*param_2 == 0.0) & (ulonglong)*param_2;
  uVar1 = FUN_100d7b05(&local_38);
  FUN_101c98c6(&local_38,param_2,uVar1);
  if (local_38._4_4_ == 0) {
    local_44 = uVar1;
    if (local_4c[2] == 1.6434601e-32) {
                    /* WARNING: Subroutine does not return */
      FUN_10228490("unordered_map/set too long");
    }
    local_30 = param_2;
    FUN_101c9ab2(local_4c + 1,&DAT_102910a0,&local_30,&local_45);
    local_18 = 0;
    fVar4 = (float)((double)((ulonglong)((int)local_4c[2] + 1) | (ulonglong)DAT_1028f6b0) -
                   DAT_1028f6b0) /
            (float)((double)((ulonglong)(uint)local_4c[7] | (ulonglong)DAT_1028f6b0) - DAT_1028f6b0)
    ;
    if (fVar4 < *local_4c || fVar4 == *local_4c) {
      pdVar2 = (double *)local_38;
      uVar1 = local_44;
    }
    else {
      FUN_101c9b52();
      uVar1 = local_44;
      FUN_101c98c6(&local_30,local_3c + 8,local_44);
      local_38 = CONCAT44(local_2c,local_30);
      pdVar2 = local_30;
    }
    iVar3 = local_3c;
    local_3c = 0;
    iVar3 = FUN_10033d76(uVar1,pdVar2,iVar3);
    *param_1 = iVar3;
    *(undefined1 *)(param_1 + 1) = 1;
    local_18 = 0xffffffff;
    FUN_10067890();
  }
  else {
    *param_1 = local_38._4_4_;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *unaff_FS_OFFSET = local_20;
  return param_1;
}

