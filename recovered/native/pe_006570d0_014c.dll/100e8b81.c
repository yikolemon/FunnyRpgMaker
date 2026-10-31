/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e8b81 */

void FUN_100e8b81(char *param_1,undefined4 *****param_2)

{
  undefined4 *****pppppuVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c [5];
  undefined4 ****local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_68;
  local_18 = &LAB_100ead80;
  local_1c = ExceptionList;
  local_58 = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_54 = 0xf;
  local_50 = 0;
  local_4c[0] = 0;
  local_4c[1] = 0;
  local_4c[2] = 0;
  local_4c[3] = 0;
  local_4c[4] = 0;
  local_14 = 0xffffffff;
  ExceptionList = &local_1c;
  if (*param_1 == '\0') {
    FUN_1000334a(&local_68);
  }
  else {
    local_20 = (undefined1 *)&local_68;
    FUN_100e1814(&local_38,"original",&local_68);
  }
  local_14 = 3;
  if (param_2 != &local_38) {
    pppppuVar1 = &local_38;
    if (0xf < local_24) {
      pppppuVar1 = (undefined4 *****)local_38;
    }
    FUN_100180a6(pppppuVar1,local_28);
  }
  local_14 = 0xffffffff;
  FUN_10001fee();
  if (*param_1 == '\0') {
    local_38 = (undefined4 *****)0x0;
    local_34 = 0;
    local_30 = 0;
    FUN_100abf8c((local_4c[0] - local_50 >> 3) * -0x55555555,&local_50,local_4c);
  }
  else {
    FUN_100e8dda(&local_38,"original_sequence",&local_50);
  }
  local_14 = 4;
  if (param_2 + 6 != &local_38) {
    FUN_100ab26e(local_38,(local_34 - (int)local_38 >> 3) * -0x55555555);
  }
  local_14 = 0xffffffff;
  FUN_10060b3c();
  if (*param_1 == '\0') {
    local_38 = (undefined4 *****)0x0;
    local_34 = 0;
    local_30 = 0;
    FUN_100abf8c((local_4c[3] - local_4c[2] >> 3) * -0x55555555,local_4c + 2,local_4c + 3);
  }
  else {
    FUN_100e8dda(&local_38,"translation_sequence",local_4c + 2);
  }
  local_14 = 5;
  if (param_2 + 9 != &local_38) {
    FUN_100ab26e(local_38,(local_34 - (int)local_38 >> 3) * -0x55555555);
  }
  local_14 = 0xffffffff;
  FUN_10060b3c();
  ExceptionList = local_1c;
  return;
}

