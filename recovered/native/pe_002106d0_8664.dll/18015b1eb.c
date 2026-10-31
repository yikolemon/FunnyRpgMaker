/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015b1eb */

void FUN_18015b1eb(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_70;
  int local_68;
  ulonglong local_60 [4];
  int local_40 [2];
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_180002218();
  local_70 = 0xffff00000000;
  puVar3 = DAT_1804192b0;
  if (DAT_1804192c8 < 8) {
    puVar3 = &DAT_1804192b0;
  }
  local_68 = FUN_18023a250(puVar3,local_60,3,0xffffffff);
  FUN_1800024e2(&local_70,local_68,local_60);
  iVar2 = local_68;
  local_38 = FUN_180002218();
  local_40[0] = iVar2;
  iVar1 = (int)local_70;
  if ((int)local_70 == 0) {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18000219a("exists",local_40,&DAT_1804192b0);
    }
  }
  else {
    FUN_180002218();
    if (iVar1 != 1) {
      FUN_1800b9844(&DAT_1804189d0,&DAT_1804192b0);
      FUN_18015af44();
      DAT_180419310 = 1;
    }
  }
  do {
    local_60[0] = 500;
    FUN_1800c50db(local_60);
    if (DAT_180419310 == 2) {
      FUN_180001e92(local_60,"window.__FUNNY_GAME_TRANSLATION_LOAD_SUCCEEDED__");
      FUN_180013de7(local_40,local_60);
      FUN_180001ef2(local_60);
      if ((char)local_40[0] == '\x04') {
        local_60[0] = local_60[0] & 0xffffffffffffff00;
        FUN_1800e06ec(&DAT_1802b0ea8,local_40,local_60);
        if ((char)local_60[0] == '\0') goto code_r0x00018015b31c;
      }
      else {
code_r0x00018015b31c:
        DAT_180419310 = 1;
      }
      FUN_1800137c6(local_40);
    }
    if (DAT_180419310 == 1) {
      FUN_18015b3b5();
      DAT_180419310 = 2;
    }
  } while( true );
}

