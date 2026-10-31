/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e84b3 */

void FUN_100e84b3(char *param_1,undefined4 param_2)

{
  undefined1 local_5c [28];
  undefined1 local_40 [24];
  undefined4 local_28;
  undefined1 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_5c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ead30;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*param_1 == '\x02') {
    local_20 = local_5c;
    FUN_100e8574(param_1,param_2,local_24);
    ExceptionList = local_1c;
    return;
  }
  local_28 = FUN_1001776c();
  FUN_10017682(local_40,"type must be array, but is ",&local_28);
  local_14 = 0;
  FUN_10017546(local_5c,0x12e,local_40,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_5c,&DAT_1036074c);
}

