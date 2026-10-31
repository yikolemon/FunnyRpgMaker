/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101794e2 */

int __thiscall FUN_101794e2(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_10180260;
  local_14 = ExceptionList;
  local_c = 0xffffffff;
  piVar1 = *(int **)(param_1 + 0x18);
  ExceptionList = &local_14;
  local_1c = param_1;
  piVar3 = &local_1c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
    piVar3 = (int *)local_18;
  }
  local_18 = (undefined1 *)piVar3;
  iVar2 = local_1c;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(local_1c,0x20);
  }
  ExceptionList = local_14;
  return iVar2;
}

