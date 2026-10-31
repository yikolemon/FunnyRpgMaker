/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bd2d1 */

longlong * FUN_1400bd2d1(longlong *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 ***pppuVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 local_150 [8];
  undefined8 local_148;
  undefined1 local_130 [32];
  undefined8 **local_110 [3];
  ulonglong local_f8;
  undefined8 **local_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 **local_c8 [2];
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_58 = param_1;
  FUN_1400bda94(&local_68);
  if (local_60 == 0) {
    local_90 = 0;
  }
  else {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
    local_90 = local_60;
  }
  local_98 = local_68;
  local_78 = 0;
  uStack_70 = 0;
  FUN_140005942(&local_78);
  if (local_60 == 0) {
    local_60 = 0;
  }
  else {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_88 = local_68;
  local_a8 = 0;
  uStack_a0 = 0;
  lStack_80 = local_60;
  FUN_140005942(&local_88);
  do {
    cVar3 = FUN_14004351d(&local_98,&local_a8);
    lVar1 = local_98;
    if (cVar3 != '\0') {
      FUN_140005942(&local_a8);
      FUN_140005942(&local_98);
      FUN_140005942(&local_68);
      FUN_1400beb98(*local_58,local_58[1],(local_58[1] - *local_58 >> 3) * -0x3333333333333333);
      return local_58;
    }
    FUN_140043528(local_98,&local_f0);
    iVar5 = (int)local_f0;
    uVar7 = (int)local_f0 == 2;
    if ((bool)uVar7) {
      local_4c = 1;
      FUN_140005554(local_c8,".wolfx",0);
      local_4a = 1;
      local_4b = 0;
      local_49 = 1;
      FUN_14000559c(lVar1 + 0x20,local_130);
      local_4d = 1;
      local_4e = 0;
      local_f0 = local_c8;
      if (7 < local_b0) {
        local_f0 = local_c8[0];
      }
      local_e8 = local_b8;
      iVar4 = FUN_140041fc4(local_130,&local_f0);
      bVar8 = iVar4 == 0;
    }
    else {
      bVar8 = false;
    }
    local_4e = uVar7;
    local_4d = uVar7;
    uVar2 = uVar7;
    if (iVar5 == 2) {
      FUN_140005690(local_130);
      local_4b = uVar7;
      local_4a = uVar7;
      FUN_140005690(local_c8);
      uVar7 = local_4b;
      uVar2 = local_4a;
    }
    local_4a = uVar2;
    local_4b = uVar7;
    if (bVar8) {
      FUN_140041956(local_110,lVar1 + 0x20);
      FUN_14000892c(&local_f0,local_110);
      pppuVar6 = local_110;
      if (7 < local_f8) {
        pppuVar6 = (undefined8 ***)local_110[0];
      }
      iVar5 = FUN_1400dcbb0(pppuVar6,local_150,9,0xffffffff);
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140041f39("file_size",iVar5,local_110);
      }
      local_d0 = local_148;
      FUN_1400be020(local_58,&local_f0);
      FUN_140005242(&local_f0);
      FUN_140005690(local_110);
    }
    FUN_1400bdb06(&local_98);
  } while( true );
}

