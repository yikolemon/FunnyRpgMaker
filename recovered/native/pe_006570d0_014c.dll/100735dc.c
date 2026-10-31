/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100735dc */

void __fastcall FUN_100735dc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 **ppuVar3;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100c2950;
  local_1c = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_1c;
  *param_1 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((param_1[0x13] != 0) && (*(undefined4 **)param_1[3] == param_1 + 0xf)) {
    iVar1 = param_1[0x14];
    iVar2 = param_1[0x15];
    *(int *)param_1[3] = iVar1;
    *(int *)param_1[7] = iVar1;
    *(int *)param_1[0xb] = iVar2 - iVar1;
  }
  local_24 = param_1;
  ppuVar3 = &local_24;
  if (*(char *)(param_1 + 0x12) == '\x01') {
    FUN_100752c4();
    ppuVar3 = (undefined4 **)local_20;
  }
  local_20 = (undefined1 *)ppuVar3;
  local_14 = 0xffffffff;
  FUN_10074346();
  ExceptionList = local_1c;
  return;
}

