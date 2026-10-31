/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015dff1 */

void FUN_1015dff1(char *param_1)

{
  undefined1 auStack_80 [4];
  int local_7c [2];
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined1 local_68 [28];
  undefined4 local_4c [2];
  undefined1 local_44 [28];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_80;
  local_18 = 0xffffffff;
  local_1c = &LAB_1015f600;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  if (*param_1 == '\x01') {
    local_28 = &stack0xfffffffc;
    local_24 = auStack_80;
    FUN_10055ef0();
    local_18 = 1;
    local_70 = (undefined4 *)**(undefined4 **)(param_1 + 8);
    local_74 = (undefined4 *)*local_70;
    while (local_74 != local_70) {
      local_18 = 1;
      local_6c = local_74;
      FUN_10013db4(local_74 + 10);
      local_18 = 2;
      FUN_1015e17c(local_4c,local_6c + 4,local_68);
      local_18 = 0xffffffff;
      FUN_10013efc();
      FUN_10016fb8();
    }
    FUN_1015e3fc(local_7c);
    local_18 = 0xffffffff;
    FUN_10016fee(local_7c,*(undefined4 *)(local_7c[0] + 4));
    FUN_102283a0(local_7c[0],0x38);
    ExceptionList = local_20;
    return;
  }
  local_4c[0] = FUN_1001776c();
  FUN_10017682(local_68,"type must be object, but is ",local_4c);
  local_18 = 0;
  FUN_10017546(local_44,0x12e,local_68,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_44,&DAT_1036074c);
}

