/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048d4e9 */

void __cdecl FUN_0048d4e9(UINT param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined4 *local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  uint local_18;
  undefined1 local_11;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_004a73e4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_3 == 0) {
    uVar3 = FUN_00484a10();
    if ((char)uVar3 != '\0') {
      FUN_0048d41a(param_1);
    }
  }
  local_28 = &param_2;
  local_11 = 0;
  local_24 = &param_3;
  local_20 = &local_11;
  local_8 = 0;
  local_18 = 2;
  local_1c = 2;
  operator()<>(&local_1c,&local_28);
  if (param_3 == 0) {
    bVar2 = FUN_00499bdf();
    if (CONCAT31(extraout_var,bVar2) == 1) {
      local_18 = local_18 & 0xffffff00;
    }
    else {
      uVar3 = FUN_00499c40();
      local_18 = CONCAT31(local_18._1_3_,'\x01' - ((char)uVar3 != '\0'));
    }
    if (param_3 == 0) {
      FUN_0048d49c(param_1,(char)local_18);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ExceptionList = local_10;
  return;
}

