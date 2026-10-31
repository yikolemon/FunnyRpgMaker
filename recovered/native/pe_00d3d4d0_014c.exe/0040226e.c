/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040226e */

void __fastcall FUN_0040226e(undefined4 *param_1)

{
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_18;
  local_10 = &LAB_00406dd0;
  local_14 = ExceptionList;
  local_c = 1;
  if (7 < (uint)param_1[5]) {
    ExceptionList = &local_14;
    FUN_00402ece(param_1,(LPVOID)*param_1,param_1[5]);
  }
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)param_1 = 0;
  ExceptionList = local_14;
  return;
}

