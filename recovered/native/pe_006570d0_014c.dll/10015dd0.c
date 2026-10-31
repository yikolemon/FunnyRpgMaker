/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10015dd0 */

undefined4 * __thiscall FUN_10015dd0(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_10058f50;
  local_14 = ExceptionList;
  local_c = 0;
  ExceptionList = &local_14;
  *param_1 = NamedPipe::vftable;
  local_1c = param_1;
  ppuVar2 = &local_1c;
  if ((HANDLE)param_1[1] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0xffffffff;
    ppuVar2 = (undefined4 **)local_18;
  }
  local_18 = (undefined1 *)ppuVar2;
  puVar1 = local_1c;
  local_c = 0xffffffff;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(local_1c,8);
  }
  ExceptionList = local_14;
  return puVar1;
}

