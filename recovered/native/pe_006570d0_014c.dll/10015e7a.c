/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10015e7a */

undefined4 * __thiscall FUN_10015e7a(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_10058f60;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_1 = NamedPipeClient::vftable;
  local_c = 0xffffffff;
  local_1c = param_1;
  FUN_10001fee();
  puVar1 = local_1c;
  *local_1c = NamedPipe::vftable;
  if ((HANDLE)local_1c[1] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)local_1c[1]);
    puVar1[1] = 0xffffffff;
  }
  puVar1 = local_1c;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(local_1c,0x20);
  }
  ExceptionList = local_14;
  return puVar1;
}

