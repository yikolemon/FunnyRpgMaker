/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00402f0a */

undefined4 * FUN_00402f0a(uint *param_1,LPCWSTR param_2,undefined4 param_3,int *param_4)

{
  size_t sVar1;
  uint *_Str;
  WCHAR local_48 [12];
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_48;
  local_14 = 0xffffffff;
  local_18 = &LAB_00406ea0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_00403634(param_3,param_4,param_1);
  local_14 = 0;
  *local_24 = std::filesystem::filesystem_error::vftable;
  local_30 = local_24 + 5;
  FUN_004036c8(local_30,(uint *)param_2);
  local_14 = 1;
  local_2c = local_24 + 0xb;
  *(undefined8 *)(local_24 + 0xf) = 0;
  local_24[0xb] = 0;
  local_24[0xc] = 0;
  local_24[0xd] = 0;
  local_24[0xe] = 0;
  FUN_00402c36(local_2c);
  local_14 = 2;
  local_48[8] = L'\0';
  local_48[9] = L'\0';
  local_48[10] = L'\0';
  local_48[0xb] = L'\0';
  local_48[0] = L'\0';
  local_48[1] = L'\0';
  local_48[2] = L'\0';
  local_48[3] = L'\0';
  local_48[4] = L'\0';
  local_48[5] = L'\0';
  local_48[6] = L'\0';
  local_48[7] = L'\0';
  FUN_00402c36((undefined4 *)local_48);
  local_14 = 3;
  local_28 = local_24 + 0x11;
  _Str = (uint *)"Unknown exception";
  if ((uint *)local_24[1] != (uint *)0x0) {
    _Str = (uint *)local_24[1];
  }
  sVar1 = _strlen((char *)_Str);
  FUN_00403738(local_28,_Str,sVar1,param_2,local_48);
  local_14 = 0xffffffff;
  FUN_00401d7c((undefined4 *)local_48);
  ExceptionList = local_1c;
  return local_24;
}

