/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b8c52 */

int __fastcall FUN_100b8c52(int param_1,uint param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_60;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1cb0;
  local_1c = ExceptionList;
  local_24 = param_1;
  if ((int)param_2 < 0 || param_3 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    iVar2 = *(int *)*param_3;
    if (param_2 < (uint)((((int *)*param_3)[1] - iVar2 >> 2) * 0x286bca1b)) {
      iVar1 = iVar2 + param_2 * 0x4c;
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      piVar3 = (int *)(iVar2 + param_2 * 0x4c);
      piVar4 = piVar3 + 1;
      ExceptionList = &local_1c;
      FUN_100b7d76(*piVar4 - *piVar3 >> 2,iVar1,piVar4);
      local_14 = 2;
      local_54 = iVar1 + 0x10;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_28 = iVar1;
      FUN_100b7e6e((*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10) >> 3) * -0x55555555,local_54,
                   iVar1 + 0x14);
      local_14 = 3;
      FUN_100b81a8(*param_4,param_4[1] - *param_4 >> 2);
      FUN_100b82a4(param_4[3],(param_4[4] - param_4[3] >> 3) * -0x55555555);
      local_44 = local_28;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      FUN_100b7d76(local_5c - local_60 >> 2,&local_60,&local_5c);
      local_14 = 4;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      FUN_100b7e6e((local_4c - local_50 >> 3) * -0x55555555,&local_50,&local_4c);
      *(undefined4 *)(local_24 + 0x24) = 0;
      local_14 = 7;
      FUN_100b8fc4();
      iVar1 = local_30;
      *(int *)(local_24 + 0x24) = local_24;
      local_14 = 0xffffffff;
      iVar2 = local_34;
      if (local_34 != 0) {
        for (; iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
          FUN_100b80da();
        }
        (*DAT_1039c964)(local_34);
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
      }
      local_14 = 0xffffffff;
      if (local_40 != 0) {
        (*DAT_1039c964)(local_40);
      }
      iVar1 = local_4c;
      iVar2 = local_50;
      if (local_50 != 0) {
        for (; iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
          FUN_100b80da();
        }
        (*DAT_1039c964)(local_50);
        local_14 = 0xffffffff;
      }
      if (local_60 != 0) {
        (*DAT_1039c964)(local_60);
      }
      ExceptionList = local_1c;
    }
    else {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return local_24;
}

