/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002ddc8 */

undefined4 *** __thiscall FUN_1002ddc8(undefined4 ***param_1,undefined4 param_2,char param_3)

{
  undefined4 ***pppuVar1;
  undefined1 local_60 [24];
  char local_48;
  undefined4 **local_44 [4];
  undefined4 local_34;
  uint local_30;
  char local_2c;
  undefined4 **local_28;
  undefined4 **local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_60;
  local_18 = &LAB_10059970;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = (undefined4 **)0x0;
  param_1[1] = (undefined4 **)0x0;
  param_1[2] = (undefined4 **)0x0;
  param_1[3] = (undefined4 **)0x0;
  param_1[4] = (undefined4 **)0x0;
  param_1[5] = (undefined4 **)0xf;
  local_28 = param_1 + 6;
  param_1[6] = (undefined4 **)0x0;
  param_1[7] = (undefined4 **)0x0;
  param_1[8] = (undefined4 **)0x0;
  param_1[9] = (undefined4 **)0x0;
  param_1[10] = (undefined4 **)0x0;
  param_1[0xb] = (undefined4 **)0xf;
  local_14 = 2;
  local_24 = param_1;
  if (param_3 != '\0') {
    FUN_1002e092(local_60,param_2);
    local_14 = 3;
    FUN_1000334a(local_60);
    local_2c = local_48;
    local_14 = 0xffffffff;
    FUN_10001fee();
    local_14 = 6;
    if ((undefined4 ***)local_24 != local_44) {
      pppuVar1 = local_44;
      if (0xf < local_30) {
        pppuVar1 = (undefined4 ***)local_44[0];
      }
      FUN_100180a6(pppuVar1,local_34);
    }
    if (local_2c != '\0') {
      FUN_1002df9a(1,(int)local_2c);
    }
    local_14 = 0xffffffff;
    FUN_10001fee();
  }
  ExceptionList = local_1c;
  return (undefined4 ***)local_24;
}

