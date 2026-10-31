/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00419952 */

void __fastcall FUN_00419952(int param_1)

{
  int *piVar1;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_0041a1b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = param_1;
  piVar1 = &local_18;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004190a2(*(int *)(param_1 + 4) + 8);
    piVar1 = (int *)local_14;
  }
  local_14 = (undefined1 *)piVar1;
  local_8 = 0xffffffff;
  if (*(LPVOID *)(local_18 + 4) == (LPVOID)0x0) {
    ExceptionList = local_10;
  }
  else {
    FUN_0047f280(*(LPVOID *)(local_18 + 4));
    ExceptionList = local_10;
  }
  return;
}

