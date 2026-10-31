/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10268774 */

void FUN_10268774(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined1 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 local_11;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1028a4eb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_3 == 0) {
    cVar2 = FUN_10268682(DAT_10388d00 ^ (uint)&stack0xfffffffc);
    if (cVar2 != '\0') {
      FUN_102686c4(param_1);
    }
  }
  local_28 = (undefined1 *)&param_2;
  local_11 = 0;
  local_24 = &param_3;
  local_20 = &local_11;
  local_8 = 0;
  local_18 = 2;
  local_1c = 2;
  operator()<>(&local_1c,&local_28,&local_18);
  if (param_3 == 0) {
    iVar3 = FUN_102789cf();
    if (iVar3 == 1) {
      local_18 = local_18 & 0xffffff00;
    }
    else {
      cVar2 = FUN_10278a30();
      local_18 = CONCAT31(local_18._1_3_,'\x01' - (cVar2 != '\0'));
    }
    if (param_3 == 0) {
      FUN_10268746(param_1,local_18);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ExceptionList = local_10;
  return;
}

