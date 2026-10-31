/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140075738 */

ulonglong FUN_140075738(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 ***pppuVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined8 **local_108 [2];
  undefined8 local_f8;
  ulonglong local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 **local_c8;
  undefined8 uStack_c0;
  undefined8 **local_b8;
  longlong lStack_b0;
  undefined8 *local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 **local_78;
  longlong local_70;
  ulonglong local_60;
  longlong local_58;
  undefined8 **local_50;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_14000550c(local_128,param_2,0);
  FUN_140052ee6(local_128,&local_50);
  FUN_14000892c(local_148,&local_50);
  FUN_140005690(&local_50);
  FUN_140075fec(local_128,&local_50);
  FUN_14000892c(local_108,&local_50);
  FUN_140005690(&local_50);
  FUN_140055cae(&local_50,local_148,&DAT_140173c42);
  pppuVar9 = local_108;
  if (7 < local_f0) {
    pppuVar9 = (undefined8 ***)local_108[0];
  }
  puVar6 = (undefined4 *)FUN_140008bae(&local_50,pppuVar9,local_f8);
  local_e8 = *puVar6;
  uStack_e4 = puVar6[1];
  uStack_e0 = puVar6[2];
  uStack_dc = puVar6[3];
  local_d8 = puVar6[4];
  uStack_d4 = puVar6[5];
  uStack_d0 = puVar6[6];
  uStack_cc = puVar6[7];
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined8 *)(puVar6 + 6) = 7;
  *(undefined2 *)puVar6 = 0;
  FUN_140005242(&local_50);
  FUN_14000550c(&local_78,&local_e8,0);
  FUN_140007025();
  local_a8 = (undefined8 *)0xffff00000000;
  pppuVar9 = &local_78;
  if (7 < local_60) {
    pppuVar9 = (undefined8 ***)local_78;
  }
  uVar4 = FUN_1400dcbb0(pppuVar9,&local_50,3,0xffffffff);
  lStack_a0 = CONCAT44(lStack_a0._4_4_,uVar4);
  FUN_140007276(&local_a8,uVar4,&local_50);
  iVar2 = (int)lStack_a0;
  local_48 = FUN_140007025();
  local_50 = (undefined8 **)CONCAT44(local_50._4_4_,iVar2);
  iVar5 = (int)local_a8;
  if ((int)local_a8 == 0) {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14004137b("exists",&local_50,&local_78);
    }
    bVar11 = false;
  }
  else {
    FUN_140007025();
    bVar11 = iVar5 != 1;
  }
  FUN_140005690(&local_78);
  if (bVar11) {
    FUN_14000550c(&local_50,&local_e8,0);
    cVar3 = FUN_1400760fa(&local_50);
    FUN_140005690(&local_50);
    if (cVar3 == '\0') {
      local_a8 = (undefined8 *)0x0;
      lStack_a0 = 0;
      local_98 = 0;
      FUN_14000550c(&local_50,&local_e8,0);
      FUN_1400058d0(&local_78,&local_50);
      FUN_140005690(&local_50);
      if (local_70 == 0) {
        local_48 = 0;
      }
      else {
        LOCK();
        *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
        UNLOCK();
        local_48 = local_70;
      }
      local_50 = local_78;
      local_88 = 0;
      uStack_80 = 0;
      FUN_140005942(&local_88);
      if (local_70 == 0) {
        local_70 = 0;
      }
      else {
        LOCK();
        *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
        UNLOCK();
      }
      local_b8 = local_78;
      local_c8 = (undefined8 ***)0x0;
      uStack_c0 = 0;
      lStack_b0 = local_70;
      FUN_140005942(&local_b8);
      while( true ) {
        cVar3 = FUN_14004351d(&local_50,&local_c8);
        if (cVar3 != '\0') break;
        FUN_140079038(&local_a8,local_50 + 4);
        FUN_140005988(&local_50);
      }
      FUN_140005942(&local_c8);
      FUN_140005942(&local_50);
      FUN_140005942(&local_78);
      local_58 = lStack_a0 - (longlong)local_a8;
      local_29 = local_58 == 0x20;
      if ((bool)local_29) {
        FUN_140005554(&local_50,"decrypt_temp",0);
        local_2a = 0;
        FUN_140055d5e(local_a8,&local_78);
        local_2b = 0;
        pppuVar9 = &local_50;
        if (7 < local_38) {
          pppuVar9 = (undefined8 ***)local_50;
        }
        uStack_c0 = local_40;
        local_c8 = pppuVar9;
        iVar5 = FUN_140041fc4(&local_78);
        uVar10 = CONCAT71((int7)((ulonglong)pppuVar9 >> 8),iVar5 == 0);
      }
      else {
        uVar10 = 0;
      }
      local_2b = local_29;
      if (local_58 == 0x20) {
        FUN_140005690(&local_78);
      }
      local_2a = local_29;
      if (local_58 == 0x20) {
        FUN_140005690(&local_50);
      }
      puVar1 = local_a8;
      if ((char)uVar10 != '\0') {
        puVar8 = local_a8;
        if (7 < (ulonglong)local_a8[3]) {
          puVar8 = (undefined8 *)*local_a8;
        }
        uVar7 = FUN_1400dd250(puVar8);
        if (uVar7 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140041f39("remove",uVar7 >> 0x20,puVar1);
        }
      }
      uVar10 = uVar10 ^ 1;
      FUN_1400793b0(&local_a8);
      goto LAB_140075b26;
    }
  }
  uVar10 = 0;
LAB_140075b26:
  FUN_140005242(&local_e8);
  FUN_140005242(local_108);
  FUN_140005242(local_148);
  FUN_140005690(local_128);
  return uVar10 & 0xffffffff;
}

