/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ca8be */

undefined4 * __thiscall FUN_100ca8be(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  size_t sVar3;
  char *_Str;
  undefined1 *local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 *local_160;
  undefined1 local_15c [252];
  undefined **local_60;
  char *local_5c [4];
  undefined1 local_4c [4];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 *local_30;
  uint *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_16c;
  local_18 = &LAB_100cc430;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = std::exception::vftable;
  local_30 = param_1 + 1;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = spdlog::spdlog_ex::vftable;
  local_2c = param_1 + 3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xf;
  local_16c = local_15c;
  local_168 = 0;
  local_160 = &LAB_100190fe;
  local_164 = 0xfa;
  local_14 = 5;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  local_28 = param_1;
  local_24 = param_2;
  uVar2 = FUN_100025af();
  local_14 = 0;
  FUN_10073d60(param_3,uVar2,local_24);
  local_14 = 1;
  _Str = "Unknown exception";
  if (local_5c[0] != (char *)0x0) {
    _Str = local_5c[0];
  }
  sVar3 = _strlen(_Str);
  FUN_100253ad(local_4c,_Str,_Str + sVar3,&local_16c);
  local_14 = 0xffffffff;
  local_60 = std::exception::vftable;
  FUN_10259020(local_5c);
  local_14 = 5;
  FUN_10043137(&local_48,&local_16c);
  puVar1 = local_2c;
  local_14 = 6;
  if (local_2c != &local_48) {
    FUN_10004e60();
    *(ulonglong *)(puVar1 + 4) = CONCAT44(uStack_34,local_38);
    *puVar1 = local_48;
    puVar1[1] = uStack_44;
    puVar1[2] = uStack_40;
    puVar1[3] = uStack_3c;
    local_38 = 0;
    uStack_34 = 0xf;
    local_48 = local_48 & 0xffffff00;
  }
  local_14 = 0xffffffff;
  FUN_10001fee();
  if (local_16c != local_15c) {
    thunk_FUN_10274120(local_16c);
  }
  ExceptionList = local_1c;
  return local_28;
}

