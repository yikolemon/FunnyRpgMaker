/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017b35e */

undefined8 * __fastcall FUN_1017b35e(undefined8 *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_60 [4];
  undefined8 *local_5c;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  char *local_40;
  undefined4 local_3c;
  undefined8 *local_38;
  uint local_34;
  uint local_30;
  undefined1 *local_2c;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_2c = &stack0xfffffffc;
  local_24 = auStack_60;
  local_18 = 0xffffffff;
  local_1c = &LAB_10180370;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  local_5c = param_1;
  FUN_1017b5f2();
  local_18 = 1;
  uVar3 = FUN_10013d2e(&DAT_1033a3fb);
  uStack_54 = 0;
  local_58 = 0;
  FUN_100d8b63(uVar3,&local_58);
  *local_5c = CONCAT44(uStack_54,local_58);
  uVar3 = FUN_10013d2e("x");
  local_58 = 0;
  FUN_100561d8(uVar3,&local_58);
  *(uint *)(local_5c + 1) = local_58;
  uVar3 = FUN_10013d2e("y");
  local_58 = 0;
  FUN_100561d8(uVar3,&local_58);
  *(uint *)((int)local_5c + 0xc) = local_58;
  uVar3 = FUN_10013d2e("name");
  local_40 = (char *)0x0;
  local_3c = 0;
  FUN_100dc4d4(uVar3,&local_40);
  FUN_101575f2(&local_58,&local_40);
  puVar2 = local_5c;
  local_18 = 2;
  puVar1 = (uint *)(local_5c + 2);
  if (puVar1 != &local_58) {
    FUN_10004e60();
    puVar2[4] = CONCAT44(uStack_44,local_48);
    *puVar1 = local_58;
    *(uint *)((int)puVar2 + 0x14) = uStack_54;
    *(undefined4 *)(puVar2 + 3) = uStack_50;
    *(undefined4 *)((int)puVar2 + 0x1c) = uStack_4c;
    local_48 = 0;
    uStack_44 = 0xf;
    local_58 = local_58 & 0xffffff00;
  }
  local_18 = 0xffffffff;
  FUN_10001fee();
  local_40 = "pages";
  local_3c = 5;
  local_18 = 1;
  FUN_100d8f98(&local_40);
  local_18 = 4;
  local_34 = uStack_54;
  local_38 = local_5c + 5;
  uVar4 = local_58;
  while (uVar4 != local_34) {
    local_30 = uVar4;
    FUN_1017b690(uVar4);
    uVar4 = local_30 + 0x10;
  }
  local_18 = 0xffffffff;
  FUN_100171ce();
  ExceptionList = local_20;
  return local_5c;
}

