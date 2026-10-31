/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f23d8 */

/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_100f23d8(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  undefined1 local_68 [4];
  undefined **local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined **local_44;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined1 *local_30;
  undefined4 *local_2c;
  int *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_44;
  local_18 = &LAB_100f5560;
  local_1c = ExceptionList;
  local_14 = 3;
  iVar1 = *param_1;
  ExceptionList = &local_1c;
  local_28 = param_1;
  pppuVar3 = &local_44;
  if ((iVar1 != 0) &&
     ((((char)param_1[1] != '\x01' || (pppuVar3 = &local_44, *(char *)(iVar1 + 0x6c) == '\0')) &&
      (pppuVar3 = &local_44, *(int *)(iVar1 + 0x70) == 0)))) {
    local_48 = 0x100f2441;
    local_48 = FUN_100f2ef5();
    uStack_4c = 1;
    uStack_50 = 0x100f244c;
    local_48 = FUN_100f2fa8();
    local_14 = 4;
    local_20 = local_68;
    local_24 = local_68;
    local_64 = std::exception::vftable;
    local_2c = &local_60;
    local_5c = 0;
    local_60 = 0;
    local_30 = (undefined1 *)&local_44;
    FUN_10258fb0(local_40,local_2c);
    puVar2 = local_24;
    *(undefined ***)(local_24 + 4) = std::future_error::vftable;
    *(undefined8 *)(puVar2 + 0x10) = local_38;
    *(undefined4 **)local_24 = &uStack_50;
    local_14 = 0xffffffff;
    local_24 = (undefined1 *)&uStack_50;
    FUN_100f3138();
    local_20 = (undefined1 *)&uStack_50;
    local_24[8] = 0;
    local_14 = 4;
    uStack_54 = 0x100f250b;
    FUN_100f3038();
    puVar2 = local_30;
    local_20 = local_30;
    local_14 = 0xffffffff;
    local_44 = std::exception::vftable;
    *(undefined1 **)(local_30 + -4) = local_40;
    *(undefined4 *)(puVar2 + -8) = 0x100f252a;
    FUN_10259020();
    pppuVar3 = (undefined ***)local_20;
  }
  local_20 = (undefined1 *)pppuVar3;
  local_14 = 0xffffffff;
  local_48 = 0x100f254e;
  FUN_100ef9e6();
  ExceptionList = local_1c;
  return;
}

