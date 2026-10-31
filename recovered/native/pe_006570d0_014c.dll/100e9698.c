/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e9698 */

void __thiscall FUN_100e9698(int param_1,undefined4 *param_2,uint *param_3,undefined4 param_4)

{
  uint *puVar1;
  int local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 uStack_34;
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_54;
  local_14 = 0xffffffff;
  local_18 = &LAB_100eae00;
  local_1c = ExceptionList;
  puVar1 = *(uint **)(param_1 + 4);
  ExceptionList = &local_1c;
  if (puVar1 == *(uint **)(param_1 + 8)) {
    param_3 = (uint *)FUN_100e987a(param_3,param_4);
  }
  else if (param_3 == puVar1) {
    local_20 = (undefined1 *)&local_54;
    FUN_100e9a2a(puVar1,param_4);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x30;
  }
  else {
    local_54 = param_1;
    local_20 = (undefined1 *)&local_54;
    FUN_100aa917(&local_50,param_4);
    local_14 = 0;
    FUN_100aa917(puVar1,puVar1 + -0xc);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x30;
    FUN_100e9802(param_3,puVar1 + -0xc,puVar1);
    if (param_3 != &local_50) {
      FUN_10004e60();
      *(ulonglong *)(param_3 + 4) = CONCAT44(uStack_3c,local_40);
      *param_3 = local_50;
      param_3[1] = uStack_4c;
      param_3[2] = uStack_48;
      param_3[3] = uStack_44;
      local_40 = 0;
      uStack_3c = 0xf;
      local_50 = local_50 & 0xffffff00;
    }
    if (param_3 + 6 != &local_38) {
      FUN_10060b3c();
      *(ulonglong *)(param_3 + 6) = CONCAT44(uStack_34,local_38);
      param_3[8] = local_30;
      local_38 = 0;
      uStack_34 = 0;
      local_30 = 0;
    }
    if (param_3 + 9 != &local_2c) {
      FUN_10060b3c();
      *(ulonglong *)(param_3 + 9) = CONCAT44(uStack_28,local_2c);
      param_3[0xb] = local_24;
      local_2c = 0;
      uStack_28 = 0;
      local_24 = 0;
    }
    local_14 = 0xffffffff;
    FUN_100a90c6(&local_50);
  }
  *param_2 = param_3;
  ExceptionList = local_1c;
  return;
}

