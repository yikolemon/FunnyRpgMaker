/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10002688 */

undefined4 *
FUN_10002688(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  size_t sVar1;
  char *_Str;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_48;
  local_14 = 0xffffffff;
  local_18 = &LAB_10005010;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10002db2(param_3,param_4,param_1);
  local_14 = 0;
  *local_24 = std::filesystem::filesystem_error::vftable;
  local_30 = local_24 + 5;
  FUN_10002e46(param_2);
  local_14 = 1;
  local_2c = local_24 + 0xb;
  *(undefined8 *)(local_24 + 0xf) = 0;
  local_24[0xb] = 0;
  local_24[0xc] = 0;
  local_24[0xd] = 0;
  local_24[0xe] = 0;
  FUN_10002eb6();
  local_14 = 2;
  local_38 = 0;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  FUN_10002eb6();
  local_14 = 3;
  local_28 = local_24 + 0x11;
  _Str = "Unknown exception";
  if ((char *)local_24[1] != (char *)0x0) {
    _Str = (char *)local_24[1];
  }
  sVar1 = _strlen(_Str);
  FUN_10002f22(local_28,_Str,sVar1,param_2,&local_48);
  local_14 = 0xffffffff;
  FUN_10001f04();
  ExceptionList = local_1c;
  return local_24;
}

