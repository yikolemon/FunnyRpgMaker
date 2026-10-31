/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000df10 */

void __thiscall FUN_1000df10(int param_1,undefined4 param_2,char param_3)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 local_58 [44];
  lconv *local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_10012a70;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_2c = _localeconv();
  FUN_1022bf80(local_58);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_14 = 0;
  pcVar2 = "";
  if (param_3 == '\0') {
    pcVar2 = local_2c->grouping;
  }
  local_28 = param_1;
  local_24 = param_1;
  uVar3 = FUN_1000e0e6(pcVar2,local_58);
  *(undefined4 *)(local_28 + 8) = uVar3;
  local_24 = local_28;
  uVar3 = FUN_1000e0e6("false",local_58);
  *(undefined4 *)(local_28 + 0x10) = uVar3;
  local_24 = local_28;
  uVar3 = FUN_1000e0e6("true",local_58);
  *(undefined4 *)(local_28 + 0x14) = uVar3;
  if (param_3 == '\0') {
    local_24 = 0;
    uVar1 = FUN_100062e4((int)*local_2c->decimal_point,local_58);
    *(undefined1 *)(local_28 + 0xc) = uVar1;
    local_24 = 0;
    uVar1 = FUN_100062e4((int)*local_2c->thousands_sep,local_58);
  }
  else {
    local_24 = 0;
    uVar1 = FUN_100062e4(0x2e,local_58);
    *(undefined1 *)(local_28 + 0xc) = uVar1;
    local_24 = 0;
    uVar1 = FUN_100062e4(0x2c,local_58);
  }
  *(undefined1 *)(local_28 + 0xd) = uVar1;
  ExceptionList = local_1c;
  return;
}

