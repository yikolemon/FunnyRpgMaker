/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040a7b8 */

void __thiscall FUN_0040a7b8(void *this,undefined4 param_1,char param_2)

{
  WCHAR WVar1;
  uint *puVar2;
  LPWSTR pWVar3;
  UINT local_58 [11];
  lconv *local_2c;
  void *local_28;
  void *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_004181a0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_2c = _localeconv();
  FUN_00481340(local_58);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_14 = 0;
  puVar2 = (uint *)0x504c95;
  if (param_2 == '\0') {
    puVar2 = (uint *)local_2c->grouping;
  }
  local_28 = this;
  local_24 = this;
  puVar2 = FUN_0040a957(puVar2);
  *(uint **)((int)local_28 + 8) = puVar2;
  local_24 = local_28;
  pWVar3 = FUN_0040a995((byte *)"false",local_58);
  *(LPWSTR *)((int)local_28 + 0x10) = pWVar3;
  local_24 = local_28;
  pWVar3 = FUN_0040a995(&DAT_00503c61,local_58);
  *(LPWSTR *)((int)local_28 + 0x14) = pWVar3;
  if (param_2 == '\0') {
    *(wchar_t *)((int)local_28 + 0xc) = *local_2c->_W_decimal_point;
    WVar1 = *local_2c->_W_thousands_sep;
  }
  else {
    local_24 = (void *)0x0;
    WVar1 = FUN_0040aa6f(0x2e,local_58);
    *(WCHAR *)((int)local_28 + 0xc) = WVar1;
    local_24 = (void *)0x0;
    WVar1 = FUN_0040aa6f(0x2c,local_58);
  }
  *(WCHAR *)((int)local_28 + 0xe) = WVar1;
  ExceptionList = local_1c;
  return;
}

