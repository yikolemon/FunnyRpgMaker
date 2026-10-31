/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004051ca */

void FUN_004051ca(void)

{
  int *piVar1;
  int iVar2;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_00407050;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = thunk_FUN_00485820();
  if (iVar2 == 0) {
    FUN_00406354((int *)*local_18);
  }
  local_8 = 0xffffffff;
  piVar1 = *(int **)(*local_18 + *(int *)(*(int *)*local_18 + 4) + 0x38);
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_10;
  }
  else {
    (**(code **)(*piVar1 + 8))();
    ExceptionList = local_10;
  }
  return;
}

