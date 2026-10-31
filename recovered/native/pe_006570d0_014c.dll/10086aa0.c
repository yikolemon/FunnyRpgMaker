/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10086aa0 */

undefined4 * __thiscall
FUN_10086aa0(byte *param_1,undefined4 *param_2,byte *param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_90 [28];
  undefined1 local_74 [28];
  undefined1 local_58 [28];
  undefined4 local_3c;
  undefined4 local_38 [6];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_90;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3290;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (param_1 != param_3) {
    FUN_10001f66("iterator does not fit current value");
    local_14 = 0;
    FUN_10051cd6(local_90,0xca,local_38,param_1);
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
    param_2[1] = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
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
      FUN_10051cd6(local_74,0xcd,local_38,param_1);
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
    FUN_1008729c(local_38,param_4,param_4 + 0x28);
    param_2[1] = local_38[0];
  }
  else {
    if (uVar3 != 2) {
      local_20 = local_90;
      local_3c = FUN_10087286();
      FUN_10017682(local_38,"cannot use erase() with ",&local_3c);
      local_14 = 2;
      FUN_10017546(local_58,0x133,local_38,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_58,&DAT_1036074c);
    }
    iVar2 = *(int *)(param_1 + 8);
    local_20 = local_90;
    FUN_100877cf(param_5 + 0x10,*(undefined4 *)(iVar2 + 4),param_5);
    FUN_1007f222();
    piVar1 = (int *)(iVar2 + 4);
    *piVar1 = *piVar1 + -0x10;
    param_2[2] = param_5;
  }
  ExceptionList = local_1c;
  return param_2;
}

