/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180133fde */

undefined4 FUN_180133fde(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_d8 [32];
  float *local_b8;
  longlong local_b0;
  float *local_a8;
  undefined8 local_98;
  undefined8 local_90;
  byte local_82;
  char local_81;
  float local_80;
  float fStack_7c;
  undefined8 local_78;
  undefined1 local_70 [8];
  float local_68;
  float local_64;
  ulonglong local_60;
  
  lVar2 = DAT_180419160;
  local_60 = DAT_180402640 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar2 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    uVar4 = FUN_180106d4e(lVar1,param_1,0);
    uVar7 = FUN_180101d94(param_1,0);
    local_b8 = (float *)CONCAT44(local_b8._4_4_,0xbf800000);
    FUN_1801023ca(&local_68,param_1,uVar7,0);
    local_80 = *(float *)(lVar1 + 0x158);
    fStack_7c = *(float *)(lVar1 + 0x15c);
    fVar9 = *(float *)(lVar2 + 0xdf8);
    if ((short)param_3 < 0) {
      if (fVar9 < *(float *)(lVar1 + 400)) {
        fStack_7c = fStack_7c + (*(float *)(lVar1 + 400) - fVar9);
      }
    }
    FUN_1801110af(local_70,*param_2,*(float *)(lVar2 + 0xdf4) + *(float *)(lVar2 + 0xdf4) + local_68
                  ,fVar9 + fVar9 + local_64);
    local_78 = CONCAT44(fStack_7c + local_70._4_4_,local_80 + local_70._0_4_);
    FUN_180111514(local_70);
    uVar5 = 0;
    cVar3 = FUN_1801116b6(&local_80,uVar4,0,0);
    if (cVar3 != '\0') {
      local_b8._0_4_ = param_3;
      uVar5 = FUN_18013386b(&local_80,uVar4,&local_81,&local_82);
      iVar8 = 0x16;
      if (local_81 != '\0') {
        iVar8 = local_82 + 0x17;
      }
      uVar6 = FUN_18010129b(iVar8);
      FUN_180102b0e(&local_80,uVar4,0);
      local_b8 = (float *)CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar2 + 0xdfc));
      FUN_1801027d9(CONCAT44(fStack_7c,local_80),local_78,uVar6,1);
      if (*(char *)(lVar2 + 0x2a40) == '\x01') {
        FUN_18011d2ab(&DAT_18036ba6b,&DAT_18036ba38);
      }
      local_b0 = lVar2 + 0xe98;
      fVar9 = (float)*(undefined8 *)(lVar2 + 0xdf4);
      fVar10 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0xdf4) >> 0x20);
      local_90 = CONCAT44((float)((ulonglong)local_78 >> 0x20) - fVar10,(float)local_78 - fVar9);
      local_98 = CONCAT44(fStack_7c + fVar10,local_80 + fVar9);
      local_b8 = &local_68;
      local_a8 = &local_80;
      FUN_180102475(&local_98,&local_90,param_1,uVar7);
    }
  }
  else {
    uVar5 = 0;
  }
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_d8)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_d8);
}

