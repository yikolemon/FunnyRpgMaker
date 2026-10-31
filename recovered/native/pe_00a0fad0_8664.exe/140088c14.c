/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140088c14 */

void FUN_140088c14(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint local_40 [6];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0xc) == 3) {
    if (DAT_1401c9930 == -1) {
      return;
    }
    FUN_140089bf6(param_1,local_40);
    FUN_140089c96(param_1,local_40);
    FUN_140089cca(param_1 + 0x10,local_40);
    FUN_140016e5c(local_40);
    return;
  }
  lVar1 = param_1 + 0x10;
  local_40[0] = 1;
  cVar2 = FUN_140089d92(lVar1);
  if (cVar2 == 'P') {
    local_40[0] = 5;
    bVar3 = FUN_140089d92(lVar1);
    if (bVar3 < 0x55) {
      FUN_140089e70(param_1);
      return;
    }
    if (bVar3 < 0x57) {
      FUN_140089f8e(param_1);
      return;
    }
    FUN_14008a034(param_1);
  }
  if (*(int *)(param_1 + 0xc) == 4) {
    local_40[0] = 0x14;
    bVar3 = FUN_140089d92(lVar1);
    if (100 < bVar3) {
      local_40[0] = 0x19;
      FUN_14008a1ac(lVar1,local_40);
      local_40[0] = local_40[0] & 0xffffff00;
      FUN_14008a286(param_1,local_40);
    }
  }
  else {
    cVar2 = FUN_14008ab9c(lVar1);
    local_40[0] = CONCAT31(local_40[0]._1_3_,cVar2);
    iVar4 = *(int *)(param_1 + 0xc);
    if ((cVar2 != '\0') && (iVar4 != 2)) {
      FUN_14008a47a(param_1,local_40);
      iVar4 = *(int *)(param_1 + 0xc);
    }
    if (iVar4 == 2) {
      local_40[0] = 10;
      cVar2 = FUN_140089d92(lVar1);
      if (cVar2 == -0x3c) {
        local_40[0] = 0xb;
        FUN_14008a1ac(lVar1,local_40);
        local_40[0] = local_40[0] & 0xffffff00;
        FUN_14008a286(param_1,local_40);
        local_40[0] = 1;
        FUN_14008a1ac(lVar1,local_40);
      }
    }
  }
  return;
}

