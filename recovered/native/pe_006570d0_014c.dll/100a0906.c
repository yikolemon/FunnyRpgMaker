/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a0906 */

undefined4 __thiscall FUN_100a0906(int param_1,char param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_28 [4];
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3ff0;
  local_1c = ExceptionList;
  local_24 = *(int **)(*(int *)(param_1 + 0x30) + 4);
  ExceptionList = &local_1c;
  (**(code **)(*local_24 + 4))();
  local_14 = 0;
  piVar1 = (int *)FUN_10091ec2(local_28);
  uVar2 = (**(code **)(*piVar1 + 0x30))((int)param_2);
  local_14 = 0xffffffff;
  if (local_24 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*local_24 + 8))();
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  ExceptionList = local_1c;
  return uVar2;
}

