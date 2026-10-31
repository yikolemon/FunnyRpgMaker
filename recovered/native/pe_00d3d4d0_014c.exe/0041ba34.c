/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041ba34 */

void __fastcall FUN_0041ba34(int *param_1)

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
  local_10 = &LAB_0041bce0;
  local_14 = ExceptionList;
  local_c = 0xffffffff;
  ExceptionList = &local_14;
  local_1c = param_1;
  ppiVar3 = &local_1c;
  if (((char)param_1[0x48] == '\x01') &&
     (piVar1 = (int *)param_1[0x47], ppiVar3 = &local_1c, piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != param_1 + 0x3e);
    param_1[0x47] = 0;
    ppiVar3 = (int **)local_18;
  }
  local_18 = (undefined1 *)ppiVar3;
  piVar1 = local_1c;
  if (((char)local_1c[0x32] == '\x01') && (piVar2 = (int *)local_1c[0x31], piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != local_1c + 0x28);
    piVar1[0x31] = 0;
  }
  piVar1 = local_1c;
  if (((char)local_1c[0x26] == '\x01') && (piVar2 = (int *)local_1c[0x25], piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != local_1c + 0x1c);
    piVar1[0x25] = 0;
  }
  piVar2 = local_1c;
  piVar1 = (int *)local_1c[0x19];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != local_1c + 0x10);
    piVar2[0x19] = 0;
  }
  piVar2 = local_1c;
  piVar1 = (int *)local_1c[0xf];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != local_1c + 6);
    piVar2[0xf] = 0;
  }
  FUN_0040230a(local_1c);
  ExceptionList = local_14;
  return;
}

