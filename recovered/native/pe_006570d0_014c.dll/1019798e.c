/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019798e */

void __fastcall FUN_1019798e(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_101985c0;
  local_14 = ExceptionList;
  local_c = 0xffffffff;
  ExceptionList = &local_14;
  local_1c = param_1;
  piVar2 = &local_1c;
  if ((*(char *)(param_1 + 0x120) == '\x01') &&
     (piVar1 = *(int **)(param_1 + 0x11c), piVar2 = &local_1c, piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_1 + 0xf8));
    *(undefined4 *)(param_1 + 0x11c) = 0;
    piVar2 = (int *)local_18;
  }
  local_18 = (undefined1 *)piVar2;
  iVar3 = local_1c;
  if ((*(char *)(local_1c + 200) == '\x01') &&
     (piVar2 = *(int **)(local_1c + 0xc4), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)(local_1c + 0xa0));
    *(undefined4 *)(iVar3 + 0xc4) = 0;
  }
  iVar3 = local_1c;
  if ((*(char *)(local_1c + 0x98) == '\x01') &&
     (piVar2 = *(int **)(local_1c + 0x94), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)(local_1c + 0x70));
    *(undefined4 *)(iVar3 + 0x94) = 0;
  }
  iVar3 = local_1c;
  piVar2 = *(int **)(local_1c + 100);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)(local_1c + 0x40));
    *(undefined4 *)(iVar3 + 100) = 0;
  }
  iVar3 = local_1c;
  piVar2 = *(int **)(local_1c + 0x3c);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)(local_1c + 0x18));
    *(undefined4 *)(iVar3 + 0x3c) = 0;
  }
  FUN_10001fee();
  ExceptionList = local_14;
  return;
}

