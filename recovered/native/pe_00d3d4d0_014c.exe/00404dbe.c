/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00404dbe */

void __fastcall FUN_00404dbe(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_00407010;
  local_14 = ExceptionList;
  local_c = 0;
  iVar1 = *(int *)(param_1 + 4);
  ExceptionList = &local_14;
  local_1c = param_1;
  piVar3 = &local_1c;
  if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 0x2c), piVar3 = &local_1c, piVar2 != (int *)0x0))
  {
    (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)(iVar1 + 8));
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    piVar3 = (int *)local_18;
  }
  local_18 = (undefined1 *)piVar3;
  local_c = 0xffffffff;
  if (*(LPVOID *)(local_1c + 4) == (LPVOID)0x0) {
    ExceptionList = local_14;
  }
  else {
    FUN_0047f280(*(LPVOID *)(local_1c + 4));
    ExceptionList = local_14;
  }
  return;
}

