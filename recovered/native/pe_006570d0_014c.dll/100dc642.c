/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100dc642 */

int * __thiscall FUN_100dc642(float *param_1,int *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  undefined4 local_40;
  int local_3c;
  float *local_38;
  undefined4 local_34;
  int local_30;
  int local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_100de110;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  uVar3 = FUN_100d7b05(param_3);
  FUN_100d78b0(&local_34,param_3,uVar3);
  iVar4 = local_30;
  if (local_30 == 0) {
    local_24 = uVar3;
    if (param_1[2] == 8.35907e-37) {
                    /* WARNING: Subroutine does not return */
      FUN_10228490("unordered_map/set too long");
    }
    FUN_100dc810(param_1 + 1,param_3,param_4);
    local_14 = 0;
    fVar5 = (float)((double)((ulonglong)((int)param_1[2] + 1) | (ulonglong)DAT_1028f6b0) -
                   DAT_1028f6b0) /
            (float)((double)((ulonglong)(uint)param_1[7] | (ulonglong)DAT_1028f6b0) - DAT_1028f6b0);
    uVar3 = local_24;
    if (*param_1 <= fVar5 && fVar5 != *param_1) {
      local_38 = param_1;
      FUN_100d85dc();
      uVar3 = local_24;
      FUN_100d78b0(&local_40,local_28 + 8,local_24);
      local_30 = local_3c;
      local_34 = local_40;
    }
    iVar4 = local_28;
    local_28 = 0;
    iVar4 = FUN_10033d76(uVar3,local_34,iVar4);
    *param_2 = iVar4;
    *(undefined1 *)(param_2 + 1) = 1;
    local_14 = 0xffffffff;
    FUN_100d866e();
  }
  else {
    *(undefined8 *)(local_30 + 0x10) = *param_4;
    if ((undefined8 *)(local_30 + 0x10) != param_4) {
      FUN_10004e60();
      *(undefined8 *)(iVar4 + 0x28) = param_4[3];
      uVar3 = *(undefined4 *)((int)param_4 + 0xc);
      uVar1 = *(undefined4 *)(param_4 + 2);
      uVar2 = *(undefined4 *)((int)param_4 + 0x14);
      *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(param_4 + 1);
      *(undefined4 *)(iVar4 + 0x1c) = uVar3;
      *(undefined4 *)(iVar4 + 0x20) = uVar1;
      *(undefined4 *)(iVar4 + 0x24) = uVar2;
      *(undefined4 *)(param_4 + 3) = 0;
      *(undefined4 *)((int)param_4 + 0x1c) = 0xf;
      *(undefined1 *)(param_4 + 1) = 0;
      FUN_10004e60();
      *(undefined8 *)(iVar4 + 0x40) = param_4[6];
      uVar3 = *(undefined4 *)((int)param_4 + 0x24);
      uVar1 = *(undefined4 *)(param_4 + 5);
      uVar2 = *(undefined4 *)((int)param_4 + 0x2c);
      *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(param_4 + 4);
      *(undefined4 *)(iVar4 + 0x34) = uVar3;
      *(undefined4 *)(iVar4 + 0x38) = uVar1;
      *(undefined4 *)(iVar4 + 0x3c) = uVar2;
      *(undefined4 *)(param_4 + 6) = 0;
      *(undefined4 *)((int)param_4 + 0x34) = 0xf;
      *(undefined1 *)(param_4 + 4) = 0;
    }
    *param_2 = local_30;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  ExceptionList = local_1c;
  return param_2;
}

