/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800733fa */

void FUN_1800733fa(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint local_40 [6];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0xc) == 3) {
    if (DAT_180401868 == -1) {
      return;
    }
    FUN_18007750c(param_1,local_40);
    FUN_1800775ac(param_1,local_40);
    FUN_1800775e0(param_1 + 0x10,local_40);
    FUN_180004cea(local_40);
    return;
  }
  lVar1 = param_1 + 0x10;
  local_40[0] = 1;
  cVar2 = FUN_1800776a8(lVar1);
  if (cVar2 == 'P') {
    local_40[0] = 5;
    bVar3 = FUN_1800776a8(lVar1);
    if (bVar3 < 0x55) {
      FUN_180077786(param_1);
      return;
    }
    if (bVar3 < 0x57) {
      FUN_1800778a4(param_1);
      return;
    }
    FUN_18007794a(param_1);
  }
  if (*(int *)(param_1 + 0xc) == 4) {
    local_40[0] = 0x14;
    bVar3 = FUN_1800776a8(lVar1);
    if (100 < bVar3) {
      local_40[0] = 0x19;
      FUN_180077ad8(lVar1,local_40);
      local_40[0] = local_40[0] & 0xffffff00;
      FUN_180077bb2(param_1,local_40);
    }
  }
  else {
    cVar2 = FUN_180078732(lVar1);
    local_40[0] = CONCAT31(local_40[0]._1_3_,cVar2);
    iVar4 = *(int *)(param_1 + 0xc);
    if ((cVar2 != '\0') && (iVar4 != 2)) {
      FUN_180077ede(param_1,local_40);
      iVar4 = *(int *)(param_1 + 0xc);
    }
    if (iVar4 == 2) {
      local_40[0] = 10;
      cVar2 = FUN_1800776a8(lVar1);
      if (cVar2 == -0x3c) {
        local_40[0] = 0xb;
        FUN_180077ad8(lVar1,local_40);
        local_40[0] = local_40[0] & 0xffffff00;
        FUN_180077bb2(param_1,local_40);
        local_40[0] = 1;
        FUN_180077ad8(lVar1,local_40);
      }
    }
  }
  return;
}

