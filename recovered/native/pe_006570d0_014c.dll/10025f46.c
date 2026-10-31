/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10025f46 */

undefined4 * __thiscall FUN_10025f46(undefined4 *param_1,undefined4 param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte bVar4;
  int *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_18 = &LAB_10059870;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[1] = 0;
  *param_1 = fmt::v12::format_facet<std::locale>::vftable;
  local_48 = param_1 + 2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf;
  local_44 = param_1 + 8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xf;
  local_40 = param_1 + 0xe;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0xf;
  local_14 = 2;
  local_24 = param_1;
  local_4c = (int *)FUN_1000c417(param_2);
  (**(code **)(*local_4c + 0x14))(&local_3c);
  puVar3 = local_24;
  piVar2 = local_4c;
  local_14 = 3;
  puVar1 = local_24 + 8;
  if (puVar1 != &local_3c) {
    FUN_10004e60();
    *(undefined8 *)(puVar3 + 0xc) = local_2c;
    *puVar1 = local_3c;
    puVar3[9] = uStack_38;
    puVar3[10] = uStack_34;
    puVar3[0xb] = uStack_30;
    local_2c = 0xf00000000;
    local_3c = local_3c & 0xffffff00;
  }
  local_14 = 0xffffffff;
  FUN_10001fee();
  if (local_24[0xc] != 0) {
    local_14 = 2;
    bVar4 = (**(code **)(*piVar2 + 0x10))();
    puVar3 = local_24;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    local_2c = 0xf00000001;
    local_3c = (uint)bVar4;
    local_14 = 4;
    puVar1 = local_24 + 2;
    if (puVar1 != &local_3c) {
      FUN_10004e60();
      *(undefined8 *)(puVar3 + 6) = local_2c;
      *puVar1 = local_3c;
      puVar3[3] = uStack_38;
      puVar3[4] = uStack_34;
      puVar3[5] = uStack_30;
      local_2c = 0xf00000000;
      local_3c = local_3c & 0xffffff00;
    }
    local_14 = 0xffffffff;
    FUN_10001fee();
  }
  ExceptionList = local_1c;
  return local_24;
}

