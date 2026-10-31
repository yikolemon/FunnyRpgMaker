/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041924c */

void __fastcall FUN_0041924c(undefined4 *param_1)

{
  LPVOID local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_0041a080;
  local_10 = ExceptionList;
  local_18 = (LPVOID)*param_1;
  if (local_18 != (LPVOID)0x0) {
    local_8 = 0xffffffff;
    ExceptionList = &local_10;
    FUN_0047f280(local_18);
    ExceptionList = local_10;
  }
  return;
}

