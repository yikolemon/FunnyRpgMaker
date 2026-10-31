/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00418651 */

bool FUN_00418651(void)

{
  bool bVar1;
  uint local_58 [6];
  undefined **local_40;
  HANDLE local_3c;
  int local_38 [6];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_0041a050;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_00402bae(local_58,(uint *)PTR_s_FunnyGamePlayer_GlobalHotkeyMana_0050e79c);
  local_14 = 0;
  FUN_00418772(&local_40,local_58);
  local_14 = 0xffffffff;
  FUN_0040230a((int *)local_58);
  local_14 = 3;
  bVar1 = FUN_00418832((int)&local_40);
  local_40 = NamedPipeClient::vftable;
  local_14 = 0xffffffff;
  FUN_0040230a(local_38);
  local_40 = NamedPipe::vftable;
  if (local_3c != (HANDLE)0xffffffff) {
    CloseHandle(local_3c);
  }
  ExceptionList = local_1c;
  return bVar1;
}

