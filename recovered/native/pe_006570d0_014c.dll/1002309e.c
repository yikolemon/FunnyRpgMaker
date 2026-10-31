/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002309e */

int * FUN_1002309e(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 local_58 [4];
  undefined4 local_54 [7];
  int *local_38;
  int local_34 [2];
  int *local_2c;
  int local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059780;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10022d74();
  piVar4 = *(int **)(local_28 + 0x78);
  local_38 = piVar4;
  while( true ) {
    piVar4 = (int *)*piVar4;
    local_14 = 2;
    if (piVar4 == local_38) break;
    local_2c = piVar4;
    (**(code **)(*(int *)piVar4[3] + 8))(&local_24);
    local_14 = 3;
    FUN_10033a5a(local_34,local_2c + 2);
    puVar3 = local_24;
    piVar4 = local_2c;
    local_24 = (undefined4 *)0x0;
    puVar1 = *(undefined4 **)(local_34[0] + 0xc);
    *(undefined4 **)(local_34[0] + 0xc) = puVar3;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    local_14 = 0xffffffff;
    if (local_24 != (undefined4 *)0x0) {
      (**(code **)*local_24)(1);
    }
  }
  FUN_10033880(local_34,local_28 + 4,local_28 + 0x34,local_28 + 0x1c,local_58);
  iVar2 = local_34[0];
  *(undefined1 *)(local_34[0] + 0x38) = *(undefined1 *)(local_28 + 0x38);
  local_34[0] = 0;
  *param_1 = iVar2;
  local_14 = 0xffffffff;
  FUN_10004eae();
  FUN_1002335e(local_54,local_54[0]);
  FUN_102283a0(local_54[0],0x10);
  ExceptionList = local_1c;
  return param_1;
}

