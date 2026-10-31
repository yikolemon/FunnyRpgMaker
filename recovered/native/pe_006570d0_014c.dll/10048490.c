/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10048490 */

void __thiscall FUN_10048490(int param_1,undefined4 param_2,char param_3)

{
  undefined2 uVar1;
  wchar_t wVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined1 local_58 [44];
  lconv *local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a700;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_2c = _localeconv();
  FUN_1022bf80(local_58);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_14 = 0;
  pcVar3 = "";
  if (param_3 == '\0') {
    pcVar3 = local_2c->grouping;
  }
  local_28 = param_1;
  local_24 = param_1;
  uVar4 = FUN_1000e0e6(pcVar3,local_58);
  *(undefined4 *)(local_28 + 8) = uVar4;
  local_24 = local_28;
  uVar4 = FUN_10048617("false",local_58);
  *(undefined4 *)(local_28 + 0x10) = uVar4;
  local_24 = local_28;
  uVar4 = FUN_10048617("true",local_58);
  *(undefined4 *)(local_28 + 0x14) = uVar4;
  if (param_3 == '\0') {
    *(wchar_t *)(local_28 + 0xc) = *local_2c->_W_decimal_point;
    wVar2 = *local_2c->_W_thousands_sep;
  }
  else {
    local_24 = 0;
    uVar1 = FUN_100486f1(0x2e,local_58);
    *(undefined2 *)(local_28 + 0xc) = uVar1;
    local_24 = 0;
    wVar2 = FUN_100486f1(0x2c,local_58);
  }
  *(wchar_t *)(local_28 + 0xe) = wVar2;
  *unaff_FS_OFFSET = local_1c;
  return;
}

