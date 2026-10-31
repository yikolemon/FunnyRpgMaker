/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10157813 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10157813(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_5c;
  local_14 = 0xffffffff;
  local_18 = &LAB_1015f510;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100446d6();
  local_14 = 0;
  FUN_100b3d38();
  iVar1 = DAT_1039d84c;
  FUN_100243fc(&DAT_1039d84c,*(undefined4 *)(DAT_1039d84c + 4));
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  _DAT_1039d850 = 0;
  FUN_100d1635();
  FUN_1016b06c();
  puVar2 = (undefined4 *)FUN_100b3d86(1);
  local_24 = (undefined4 *)*puVar2;
  local_28 = (undefined4 *)puVar2[1];
  while( true ) {
    local_14 = 0xffffffff;
    if (local_24 == local_28) break;
    local_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    local_44 = 3;
    local_58 = 0;
    local_14 = 1;
    if ((uint)local_24[0xb] < 0x10) {
      puVar2 = local_24 + 6;
    }
    else {
      puVar2 = (undefined4 *)local_24[6];
    }
    FUN_10063c30(&local_40,puVar2,local_24[10] + (int)puVar2,&local_58);
    local_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    local_2c = 3;
    local_40 = 0;
    local_14 = 3;
    puVar2 = local_24;
    if (0xf < (uint)local_24[5]) {
      puVar2 = (undefined4 *)*local_24;
    }
    FUN_10063c30(local_5c,puVar2,local_24[4] + (int)puVar2,&local_40);
    local_14 = 4;
    FUN_100b4128(&local_40,&local_58);
    local_14 = 0xffffffff;
    FUN_10061fce();
    FUN_10061fce();
    local_24 = local_24 + 0xc;
  }
  FUN_1022c200(&DAT_10389e10);
  ExceptionList = local_1c;
  return;
}

