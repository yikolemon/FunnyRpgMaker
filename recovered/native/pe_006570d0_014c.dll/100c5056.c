/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c5056 */

int * __thiscall FUN_100c5056(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte local_3c [12];
  char local_30;
  undefined4 local_2c;
  int *piStack_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c7e30;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = param_1;
  FUN_1007a540(param_1);
  local_14 = 0;
  uVar2 = 0;
  if (local_30 == '\x01') {
    piStack_28 = *(int **)(*(int *)((int)local_24 + *(int *)(*local_24 + 4) + 0x30) + 4);
    (**(code **)(*piStack_28 + 4))();
    local_14 = 3;
    piVar3 = (int *)FUN_100a1501(&local_2c);
    local_14 = 0xffffffff;
    if (piStack_28 != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*piStack_28 + 8))();
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
    }
    iVar1 = *(int *)(*local_24 + 4);
    piStack_28 = *(int **)((int)local_24 + iVar1 + 0x38);
    local_2c = 0;
    local_14 = 1;
    (**(code **)(*piVar3 + 0x20))
              (local_3c,ZEXT48(piStack_28) << 0x20,(int)local_24 + iVar1,
               *(undefined2 *)((int)local_24 + iVar1 + 0x40),param_2);
    uVar2 = (uint)local_3c[0] << 2;
  }
  local_14 = 0;
  FUN_10073a60((uint)(*(int *)((int)local_24 + *(int *)(*local_24 + 4) + 0x38) == 0) << 2 |
               uVar2 | *(uint *)((int)local_24 + *(int *)(*local_24 + 4) + 0xc),0);
  local_14 = 0xffffffff;
  FUN_1007a64a();
  ExceptionList = local_1c;
  return local_24;
}

