/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d954e */

void __thiscall FUN_100d954e(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iStack_3c;
  uint uStack_38;
  uint uStack_34;
  int *piStack_30;
  undefined1 *local_2c;
  int local_28;
  int *local_24;
  undefined1 **local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = &local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100de000;
  local_1c = ExceptionList;
  iVar3 = *param_1;
  ExceptionList = &local_1c;
  if ((uint)(param_1[2] - iVar3 >> 4) < param_3) {
    piStack_30 = (int *)param_3;
    uStack_34 = 0x100d959b;
    local_20 = &local_2c;
    FUN_100d968a();
    uStack_34 = *param_1;
    uStack_38 = param_3;
    iStack_3c = param_2;
    piStack_30 = param_1;
    local_24 = (int *)FUN_100d973d();
  }
  else {
    uStack_34 = param_1[1];
    uVar2 = (int)(uStack_34 - iVar3) >> 4;
    local_28 = param_3 - uVar2;
    if (param_3 < uVar2 || local_28 == 0) {
      uStack_34 = param_3;
      uStack_38 = param_2;
      iStack_3c = 0x100d9634;
      piStack_30 = (int *)iVar3;
      FUN_100d97f9();
      iVar1 = param_1[1];
      iVar3 = param_3 * 0x10 + iVar3;
      local_24 = (int *)iVar3;
      for (; iVar3 != iVar1; iVar3 = iVar3 + 0x10) {
        piStack_30 = (int *)0x100d9650;
        FUN_10013efc();
      }
    }
    else {
      local_24 = param_1;
      if (iVar3 != uStack_34) {
        do {
          local_20 = (undefined1 **)&iStack_3c;
          local_2c = (undefined1 *)&iStack_3c;
          piStack_30 = (int *)uStack_34;
          FUN_10013db4(param_2);
          local_14 = 0xffffffff;
          FUN_1004eed0();
          iVar3 = iVar3 + 0x10;
          param_2 = param_2 + 0x10;
          uStack_34 = local_24[1];
        } while (iVar3 != uStack_34);
      }
      param_1 = local_24;
      local_20 = &local_2c;
      piStack_30 = local_24;
      uStack_38 = local_28;
      iStack_3c = param_2;
      local_24 = (int *)FUN_100d973d();
    }
  }
  param_1[1] = (int)local_24;
  ExceptionList = local_1c;
  return;
}

