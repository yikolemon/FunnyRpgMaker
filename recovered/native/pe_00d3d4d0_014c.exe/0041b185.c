/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041b185 */

void FUN_0041b185(undefined4 *param_1)

{
  LPVOID local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_0041b780;
  local_14 = ExceptionList;
  local_1c = (LPVOID)*param_1;
  if (local_1c != (LPVOID)0x0) {
    local_c = 0xffffffff;
    ExceptionList = &local_14;
    thunk_FUN_00495f00(local_1c);
    *param_1 = 0;
  }
  ExceptionList = local_14;
  return;
}

