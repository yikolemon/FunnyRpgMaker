/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007c39f */

char FUN_14007c39f(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  longlong local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_140005554(local_b8,"Game.dat",0);
  FUN_140055d5e(param_1,&local_48);
  iVar3 = FUN_140041fc4(&local_48);
  FUN_140005690(&local_48);
  FUN_140005690(local_b8);
  if (iVar3 == 0) {
    cVar2 = '\0';
  }
  else {
    FUN_140005554(local_b8,"CommonEvent.dat",0);
    FUN_140055d5e(param_1,&local_48);
    iVar3 = FUN_140041fc4(&local_48);
    FUN_140005690(&local_48);
    FUN_140005690(local_b8);
    if (iVar3 == 0) {
      cVar2 = '\x01';
    }
    else {
      local_50 = local_b8;
      FUN_14000169c(local_50,"DataBase.dat");
      local_50 = local_98;
      FUN_14000169c(local_50,"CDatabase.dat");
      local_50 = local_78;
      FUN_14000169c(local_78,"SysDatabase.dat");
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_50 = local_78;
      FUN_140020d68(&local_48,3);
      cVar1 = FUN_14007c921(param_1,&local_48);
      FUN_14000eeca(&local_48);
      lVar4 = 0x40;
      do {
        local_58 = lVar4;
        FUN_1400017de(local_b8 + lVar4);
        lVar4 = local_58 + -0x20;
      } while (lVar4 != -0x20);
      cVar2 = '\x02';
      if (cVar1 == '\0') {
        FUN_140005554(local_b8,"TileSetData.dat",0);
        FUN_140055d5e(param_1,&local_48);
        iVar3 = FUN_140041fc4(&local_48);
        FUN_140005690(&local_48);
        FUN_140005690(local_b8);
        if (iVar3 == 0) {
          cVar2 = '\x05';
        }
        else {
          FUN_140005554(local_b8,".project",0);
          FUN_14000559c(param_1,&local_48);
          iVar3 = FUN_140041fc4(&local_48);
          FUN_140005690(&local_48);
          FUN_140005690(local_b8);
          if (iVar3 == 0) {
            cVar2 = '\x03';
          }
          else {
            FUN_140005554(local_b8,&DAT_14016edb2,0);
            FUN_14000559c(param_1,&local_48);
            iVar3 = FUN_140041fc4(&local_48);
            FUN_140005690(&local_48);
            FUN_140005690(local_b8);
            cVar2 = (iVar3 != 0) * '\x02' + '\x04';
          }
        }
      }
    }
  }
  return cVar2;
}

