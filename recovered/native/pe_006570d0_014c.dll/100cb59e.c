/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cb59e */

int __thiscall FUN_100cb59e(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined1 auStack_70 [4];
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int local_60 [2];
  int local_58 [9];
  int *local_34;
  int local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_70;
  local_1c = &LAB_100cc4e0;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  local_18 = 1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(bool *)param_1 =
       (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(param_3 != 0))) !=
       (int)(-param_4 - (uint)(param_3 != 0)) < 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  local_6c = param_1;
  if ((int)(uint)(param_3 == 0) <= param_4) {
    local_60[0] = param_1;
    FUN_1001860e(param_2);
    local_30 = param_3;
    local_2c = param_4;
    local_18 = 3;
    FUN_100cb8e8(local_60);
    local_18 = 4;
    if (*(int *)(local_6c + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_102716bc();
    }
    uVar1 = CONCAT44(uStack_64,local_68);
    local_68 = 0;
    uStack_64 = 0;
    *(undefined8 *)(local_6c + 4) = uVar1;
    local_18 = 0xffffffff;
    if (local_34 != (int *)0x0) {
      (**(code **)(*local_34 + 0x10))(local_34 != local_58);
    }
  }
  ExceptionList = local_20;
  return local_6c;
}

