/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005194e */

undefined4 * __thiscall
FUN_1005194e(byte *param_1,undefined4 *param_2,byte *param_3,undefined4 param_4,int param_5,
            int param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 local_90 [28];
  undefined1 local_74 [28];
  undefined1 local_58 [28];
  undefined1 local_3c [24];
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_90;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a9b0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (param_1 != param_3) {
    FUN_10001f66("iterator does not fit current value");
    local_14 = 0;
    FUN_10051cd6(local_90,0xca,local_3c,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_90,&DAT_1036082c);
  }
  *param_2 = param_1;
  param_2[2] = 0;
  param_2[1] = 0;
  param_2[3] = 0x80000000;
  if (*param_1 == 2) {
    param_2[2] = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
  }
  else if (*param_1 == 1) {
    param_2[1] = **(undefined4 **)(param_1 + 8);
  }
  else {
    param_2[3] = 1;
  }
  uVar3 = (uint)*param_1;
  if (uVar3 - 3 < 6) {
    if (param_6 != 0) {
      local_20 = local_90;
      FUN_10001f66("iterator out of range");
      local_14 = 1;
      FUN_10051cd6(local_74,0xcd,local_3c,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_74,&DAT_1036082c);
    }
    if (uVar3 == 8) {
      local_20 = local_90;
      FUN_10004eae();
      FUN_102283a0(*(undefined4 *)(param_1 + 8),0x20);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
    else if (uVar3 == 3) {
      local_20 = local_90;
      FUN_10001fee();
      FUN_102283a0(*(undefined4 *)(param_1 + 8),0x18);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
    *param_1 = 0;
  }
  else if (uVar3 == 1) {
    local_20 = local_90;
    uVar4 = FUN_10051ff0(param_4);
    param_2[1] = uVar4;
  }
  else {
    if (uVar3 != 2) {
      local_20 = local_90;
      local_24 = FUN_1001776c();
      FUN_10017682(local_3c,"cannot use erase() with ",&local_24);
      local_14 = 2;
      FUN_10017546(local_58,0x133,local_3c,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_58,&DAT_1036074c);
    }
    iVar2 = *(int *)(param_1 + 8);
    local_20 = local_90;
    FUN_100522f5(param_5 + 0x10,*(undefined4 *)(iVar2 + 4),param_5);
    FUN_10013efc();
    piVar1 = (int *)(iVar2 + 4);
    *piVar1 = *piVar1 + -0x10;
    param_2[2] = param_5;
  }
  ExceptionList = local_1c;
  return param_2;
}

