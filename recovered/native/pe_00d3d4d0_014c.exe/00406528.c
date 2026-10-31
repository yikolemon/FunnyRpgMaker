/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00406528 */

undefined4 __thiscall FUN_00406528(void *this,char param_1)

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
  local_18 = &LAB_00407130;
  local_1c = ExceptionList;
  local_24 = *(int **)(*(int *)((int)this + 0x30) + 4);
  ExceptionList = &local_1c;
  (**(code **)(*local_24 + 4))();
  local_14 = 0;
  piVar1 = FUN_00405085(local_28);
  uVar2 = (**(code **)(*piVar1 + 0x30))((int)param_1);
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

