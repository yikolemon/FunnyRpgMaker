/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c96fc */

void __fastcall FUN_100c96fc(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  int *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100cc350;
  local_14 = ExceptionList;
  local_c = 0xffffffff;
  piVar1 = (int *)param_1[0x27];
  ExceptionList = &local_14;
  local_1c = param_1;
  ppiVar3 = &local_1c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != param_1 + 0x1e);
    param_1[0x27] = 0;
    ppiVar3 = (int **)local_18;
  }
  local_18 = (undefined1 *)ppiVar3;
  piVar2 = local_1c;
  piVar1 = (int *)local_1c[0x1d];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != local_1c + 0x14);
    piVar2[0x1d] = 0;
  }
  piVar2 = local_1c;
  piVar1 = (int *)local_1c[0x13];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != local_1c + 10);
    piVar2[0x13] = 0;
  }
  piVar2 = local_1c;
  piVar1 = (int *)local_1c[9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != local_1c);
    piVar2[9] = 0;
  }
  ExceptionList = local_14;
  return;
}

