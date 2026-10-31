/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f330c */

void __thiscall
FUN_100f330c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_18 = &LAB_100f5660;
  local_1c = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_1c;
  if (*(char *)((int)param_1 + 0x75) != '\x01') {
    local_20 = (undefined1 *)&local_20;
    FUN_10235400(param_1 + 3,&param_2);
    (**(code **)(*param_1 + 0x14))(param_4,param_5);
    local_14 = 0xffffffff;
    FUN_10235380(&param_2);
    ExceptionList = local_1c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100f2ce8(3);
}

