/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10064d48 */

void __thiscall FUN_10064d48(int *param_1,uint *param_2)

{
  int *local_38;
  undefined4 local_34;
  uint local_30;
  int *local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2190;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*param_2 < 0x40000000) {
    local_28 = param_1[1] - *param_1;
    local_20 = (undefined1 *)&local_38;
    local_34 = FUN_10001426(*param_2 << 2);
    local_30 = *param_2;
    local_14 = 0;
    local_38 = param_1;
    local_2c = param_1;
    local_24 = local_34;
    thunk_FUN_100185ef(*param_1,param_1[1],local_34);
    local_34 = 0;
    FUN_1001fb4c(local_24,local_28 >> 2,*param_2);
    local_14 = 0xffffffff;
    FUN_1001a46e();
    ExceptionList = local_1c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

