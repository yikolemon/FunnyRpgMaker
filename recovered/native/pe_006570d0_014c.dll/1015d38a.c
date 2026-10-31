/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015d38a */

/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_1015d38a(undefined4 param_1,undefined4 **param_2)

{
  undefined4 **ppuVar1;
  undefined1 *puVar2;
  int local_78;
  undefined1 local_74 [12];
  undefined4 uStack_68;
  undefined4 **ppuStack_64;
  undefined4 **ppuStack_60;
  undefined4 local_5c;
  int local_58;
  undefined4 **local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 local_44;
  int *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined4 *local_30;
  undefined4 uStack_2c;
  undefined4 *local_28;
  undefined4 **local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_5c;
  local_14 = 0xffffffff;
  local_18 = &LAB_1015f550;
  local_1c = ExceptionList;
  uStack_50 = param_2[4];
  if ((undefined4 *)0xf < param_2[5]) {
    param_2 = (undefined4 **)*param_2;
  }
  ppuStack_60 = (undefined4 **)0x1015d3d7;
  ExceptionList = &local_1c;
  local_54 = param_2;
  FUN_1015d79b();
  if (local_58 != 0) {
    local_44 = 0;
    local_54 = (undefined4 ***)0x0;
    uStack_50 = (undefined4 *)0x0;
    uStack_4c = 0;
    uStack_48 = 0;
    ppuStack_60 = (undefined4 **)local_58;
    ppuStack_64 = (undefined4 **)local_5c;
    uStack_68 = 0x1015d3fe;
    FUN_1000254c();
    local_14 = 0;
    ppuStack_64 = (undefined4 ***)0x1015d410;
    ppuStack_60 = &local_54;
    ppuStack_60 = (undefined4 **)FUN_100a9370();
    local_24 = ppuStack_60;
    if ((undefined4 **)ppuStack_60[4] == (undefined4 **)0x0) {
      if ((undefined4 ***)ppuStack_60 != &local_54) {
        ppuStack_64 = &local_54;
        if (0xf < local_44._4_4_) {
          ppuStack_64 = local_54;
        }
        ppuStack_60 = (undefined4 **)(undefined4)local_44;
        uStack_68 = 0x1015d440;
        ppuStack_60 = (undefined4 **)FUN_100180a6();
      }
      local_20 = (undefined1 *)&local_78;
      local_3c = &local_78;
      local_34 = local_74;
      local_38 = (undefined1 *)&local_5c;
      FUN_1000334a(&local_54);
      *local_3c = (int)&local_30;
      local_14 = 0;
      FUN_1015d867();
      ppuVar1 = local_24;
      puVar2 = local_38;
      local_20 = local_38;
      local_14 = 1;
      if (local_24 + 6 != &local_30) {
        *(undefined4 *)(local_38 + -4) = 0x1015d4a4;
        FUN_10060b3c();
        *(ulonglong *)(ppuVar1 + 6) = CONCAT44(uStack_2c,local_30);
        ppuVar1[8] = local_28;
        local_30 = (undefined4 **)0x0;
        uStack_2c = 0;
        local_28 = (undefined4 **)0x0;
      }
      local_14 = 0xffffffff;
      *(undefined4 *)(puVar2 + -4) = 0x1015d4cf;
      FUN_10060b3c();
      ppuVar1 = (undefined4 **)local_24[6];
      local_14 = 0;
      *(int *)(puVar2 + -4) = ((int)local_24[7] - (int)ppuVar1 >> 3) * -0x55555555;
      *(undefined4 ***)(puVar2 + -8) = ppuVar1;
      *(undefined4 *)(puVar2 + -0xc) = 0x1015d4f6;
      FUN_100ab26e();
    }
    local_14 = 0xffffffff;
    ppuStack_60 = (undefined4 **)0x1015d506;
    FUN_10001fee();
  }
  ExceptionList = local_1c;
  return;
}

