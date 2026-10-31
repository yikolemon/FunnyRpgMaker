/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100259b2 */

undefined4
FUN_100259b2(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined **local_78;
  undefined1 local_28 [4];
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_90;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059840;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_90 = local_28;
  FUN_10025df0();
  local_14 = 3;
  local_90 = local_28;
  cVar1 = FUN_10025e1e();
  if (cVar1 == '\0') {
    local_90 = local_28;
    FUN_10025f46();
    local_14 = 4;
    local_8c = param_2;
    uStack_88 = param_3;
    uStack_84 = param_4;
    uStack_80 = param_5;
    local_7c = param_6;
    local_90 = param_1;
    uVar3 = (*(code *)local_78[3])();
    local_78 = fmt::v12::format_facet<std::locale>::vftable;
    local_14 = 0xffffffff;
    FUN_10001fee();
    FUN_10001fee();
    FUN_10001fee();
  }
  else {
    local_90 = local_28;
    piVar2 = (int *)FUN_10025ea6();
    local_8c = param_2;
    uStack_88 = param_3;
    uStack_84 = param_4;
    uStack_80 = param_5;
    local_7c = param_6;
    local_90 = param_1;
    uVar3 = (**(code **)(*piVar2 + 0xc))();
  }
  local_14 = 0xffffffff;
  if (local_24 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*local_24 + 8))();
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
  }
  ExceptionList = local_1c;
  return uVar3;
}

