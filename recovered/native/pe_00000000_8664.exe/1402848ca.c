/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402848ca */

void FUN_1402848ca(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint local_40 [6];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0xc) == 3) {
    if (s___AVEngineUI___140612d30._8_4_ == -1) {
      return;
    }
    FUN_1402889dc(param_1,local_40);
    FUN_140288a7c(param_1,local_40);
    FUN_140288ab0(param_1 + 0x10,local_40);
    FUN_1402161ba(local_40);
    return;
  }
  lVar1 = param_1 + 0x10;
  local_40[0] = 1;
  cVar2 = FUN_140288b78(lVar1);
  if (cVar2 == 'P') {
    local_40[0] = 5;
    bVar3 = FUN_140288b78(lVar1);
    if (bVar3 < 0x55) {
      FUN_140288c56(param_1);
      return;
    }
    if (bVar3 < 0x57) {
      FUN_140288d74(param_1);
      return;
    }
    FUN_140288e1a(param_1);
  }
  if (*(int *)(param_1 + 0xc) == 4) {
    local_40[0] = 0x14;
    bVar3 = FUN_140288b78(lVar1);
    if (100 < bVar3) {
      local_40[0] = 0x19;
      FUN_140288fa8(lVar1,local_40);
      local_40[0] = local_40[0] & 0xffffff00;
      FUN_140289082(param_1,local_40);
    }
  }
  else {
    cVar2 = FUN_140289c02(lVar1);
    local_40[0] = CONCAT31(local_40[0]._1_3_,cVar2);
    iVar4 = *(int *)(param_1 + 0xc);
    if ((cVar2 != '\0') && (iVar4 != 2)) {
      FUN_1402893ae(param_1,local_40);
      iVar4 = *(int *)(param_1 + 0xc);
    }
    if (iVar4 == 2) {
      local_40[0] = 10;
      cVar2 = FUN_140288b78(lVar1);
      if (cVar2 == -0x3c) {
        local_40[0] = 0xb;
        FUN_140288fa8(lVar1,local_40);
        local_40[0] = local_40[0] & 0xffffff00;
        FUN_140289082(param_1,local_40);
        local_40[0] = 1;
        FUN_140288fa8(lVar1,local_40);
      }
    }
  }
  return;
}

