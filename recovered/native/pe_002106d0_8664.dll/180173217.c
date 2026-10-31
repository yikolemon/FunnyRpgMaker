/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180173217 */

void FUN_180173217(void)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 ****ppppuVar4;
  float fVar5;
  char *local_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 ***local_88 [3];
  ulonglong local_70;
  uint local_68;
  undefined4 local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_180044980(&DAT_1804193d8);
  local_d0 = 0;
  cVar1 = FUN_180134257(&DAT_18035f76e);
  if (cVar1 != '\0') {
    DAT_180419469 = '\0';
  }
  FUN_180119f0f(0);
  local_64 = FUN_18011837d(&DAT_18035efc7);
  lVar3 = FUN_18010128e();
  fVar5 = *(float *)(lVar3 + 0x14);
  FUN_180111069(local_88);
  local_d0 = CONCAT44((float)((ulonglong)local_88[0] >> 0x20) + 0.0,fVar5 + SUB84(local_88[0],0));
  FUN_180121774(local_64,&local_d0,0x40,0);
  cVar1 = FUN_18010ca66(&DAT_18035f0af,0,0);
  if (cVar1 != '\0') {
    FUN_1801003f2(&local_d0);
    fVar5 = (float)FUN_180116c08();
    lVar3 = FUN_18010128e();
    FUN_1801004b6(&local_d0,(ulonglong)(DAT_180419458 - DAT_180419450) >> 6,
                  fVar5 + *(float *)(lVar3 + 0x60));
    while (cVar1 = FUN_180100a32(&local_d0), cVar1 != '\0') {
      for (local_68 = (uint)local_d0; (int)local_68 < local_d0._4_4_; local_68 = local_68 + 1) {
        FUN_18011810d();
        local_e0 = "{:03d}: {}";
        local_d8 = 10;
        FUN_180173713(local_88,&local_e0,&local_68,
                      DAT_180419450 + (longlong)(int)local_68 * 0x40 + 8);
        local_98 = 0;
        cVar1 = FUN_1801391f6("##selectable",DAT_180403c00 == local_68,0x40,&local_98);
        if (cVar1 != '\0') {
          DAT_180403c00 = local_68;
        }
        FUN_18011834f();
        cVar1 = FUN_18011aab1();
        if (cVar1 != '\0') {
          ppppuVar4 = local_88;
          if (0xf < local_70) {
            ppppuVar4 = (undefined8 ****)local_88[0];
          }
          FUN_18013309a(ppppuVar4);
          thunk_FUN_18010f900();
        }
        cVar1 = FUN_180110bfd(1);
        if (cVar1 != '\0') {
          DAT_180403c00 = local_68;
          FUN_18011ac8e(&DAT_18035f56a);
        }
        FUN_180119893(0,0);
        ppppuVar4 = local_88;
        if (0xf < local_70) {
          ppppuVar4 = (undefined8 ****)local_88[0];
        }
        FUN_18013309a(ppppuVar4);
        FUN_180001ef2(local_88);
      }
    }
    cVar1 = FUN_18011b56a(&DAT_18035f56a,0);
    if (cVar1 != '\0') {
      local_88[0] = (undefined8 ****)0x0;
      cVar1 = FUN_1801391f6(&DAT_18035f0bc,0,0);
      if (cVar1 != '\0') {
        local_f0 = "$gameTemp.reserveCommonEvent({})";
        local_e8 = 0x20;
        FUN_1800054e8(local_88,&local_f0,&DAT_180403c00);
        FUN_180013ef1(local_88);
        FUN_180001ef2(local_88);
      }
      FUN_18011b3ef();
    }
    thunk_FUN_180100412(&local_d0);
  }
  FUN_18010f900();
  bVar2 = FUN_18010ca66(&DAT_18035f0a1,0,0);
  if (((bVar2 & -1 < (int)DAT_180403c00) == 1) &&
     ((ulonglong)DAT_180403c00 < (ulonglong)(DAT_180419458 - DAT_180419450 >> 6))) {
    local_d0 = 0;
    FUN_180173007(DAT_180419450 + (ulonglong)DAT_180403c00 * 0x40 + 0x28);
  }
  FUN_18010f900();
  if (DAT_180419469 == '\0') {
    DAT_180419469 = '\x01';
    FUN_1800e2378();
    FUN_180121e5d(local_64);
    FUN_180121d97(local_64,0x400);
    FUN_180110cf0(&local_90);
    FUN_180121d5c(local_64,local_90);
    FUN_180121fec(local_64,0,DAT_1802dbb70,&local_d0,local_88);
    FUN_180121cbb(&DAT_18035f0af,local_d0 & 0xffffffff);
    FUN_180121cbb(&DAT_18035f0a1,(ulonglong)local_88[0] & 0xffffffff);
    FUN_180122131(local_64);
    FUN_18011d4cf();
  }
  FUN_18023d6e0(&DAT_1804193d8);
  return;
}

