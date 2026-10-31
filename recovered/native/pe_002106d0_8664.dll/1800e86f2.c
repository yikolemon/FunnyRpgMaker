/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e86f2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800e86f2(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  bool bVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  float fVar11;
  char cVar12;
  byte bVar13;
  longlong lVar14;
  char *pcVar15;
  char *pcVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined1 local_198 [64];
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  longlong local_148 [7];
  longlong *local_110;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  
  local_f0 = 0xfffffffffffffffe;
  local_f8 = param_1;
  FUN_180044980();
  plVar1 = (longlong *)(local_f8 + 0x78);
  FUN_18006451c(plVar1,*(undefined8 *)(local_f8 + 0x70));
  fVar9 = DAT_1802dc2dc;
  fVar8 = DAT_1802dc290;
  uVar7 = DAT_1802dc270;
  fVar6 = DAT_1802dbb4c;
  uVar5 = DAT_1802bb8e0;
  fVar23 = 0.0;
  uVar17 = 0;
  do {
    while( true ) {
      if (*(ulonglong *)(local_f8 + 0x70) <= uVar17) goto code_r0x0001800e8d63;
      puVar2 = *(undefined4 **)
                (*(longlong *)(local_f8 + 0x58) +
                (*(longlong *)(local_f8 + 0x60) - 1U & *(longlong *)(local_f8 + 0x68) + uVar17) * 8)
      ;
      cVar12 = FUN_1800ee9c4(puVar2);
      if (cVar12 != '\x03') break;
      FUN_1800eea2c(local_f8,uVar17 & 0xffffffff);
    }
    switch(*(char *)(puVar2 + 1)) {
    case '\x01':
      bVar4 = false;
      pcVar15 = &DAT_18035f52a;
      break;
    case '\x02':
      bVar4 = false;
      pcVar15 = &DAT_18035f114;
      break;
    case '\x03':
      bVar4 = false;
      pcVar15 = &DAT_18035f2f3;
      break;
    case '\x04':
      bVar4 = false;
      pcVar15 = &DAT_18035f506;
      break;
    default:
      bVar4 = true;
      pcVar15 = (char *)0x0;
    }
    pcVar16 = (char *)((longlong)puVar2 + 5);
    if (*(char *)((longlong)puVar2 + 5) == '\0') {
      bVar13 = *(char *)(puVar2 + 1) - 1;
      if (bVar13 < 4) {
        pcVar16 = (&PTR_s_Success_1802dc1c8)[bVar13];
      }
      else {
        pcVar16 = (char *)0x0;
      }
    }
    uVar19 = FUN_1800eeaae(puVar2);
    local_158 = uVar7;
    local_154 = uVar7;
    local_150 = uVar7;
    if ((byte)(*(char *)(puVar2 + 1) - 1U) < 4) {
      lVar14 = (ulonglong)(byte)(*(char *)(puVar2 + 1) - 1U) * 4;
      local_158 = *(undefined4 *)(&DAT_1802dc1e8 + lVar14);
      local_154 = *(undefined4 *)(&DAT_1802dc1f8 + lVar14);
      local_150 = *(undefined4 *)(&DAT_1802dc208 + lVar14);
    }
    local_14c = uVar19;
    FUN_1800eeb42(local_198,"##TOAST%d",uVar17 & 0xffffffff);
    FUN_180116b50(uVar19);
    lVar10 = DAT_180419160;
    *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
    lVar14 = *(longlong *)(lVar10 + 0x1608);
    *(undefined1 *)(lVar14 + 0x10b) = 1;
    uVar22 = *(undefined8 *)(*(longlong *)(lVar10 + 0x1608) + 0x68);
    fVar21 = (float)uVar22;
    fVar24 = (float)((ulonglong)uVar22 >> 0x20);
    local_148[0] = DAT_1802dc280;
    local_100 = CONCAT44((*(float *)(lVar14 + 100) + fVar24 + fVar8) - fVar23,
                         *(float *)(lVar14 + 0x60) + fVar21 + fVar8);
    FUN_180116a8b(&local_100,1,local_148);
    local_148[0] = CONCAT44(fVar24 + _UNK_1802dc2a4,fVar21 + _DAT_1802dc2a0);
    local_100 = CONCAT44(fVar24 * _UNK_1802dc2b4 * 0.0,fVar21 * _DAT_1802dc2b0 * DAT_1802dbb2c);
    FUN_180116ac1(&local_100,local_148,0,0);
    FUN_18010ca66(local_198,0,*puVar2);
    lVar14 = DAT_180419160;
    *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
    local_148[0] = *(longlong *)(lVar14 + 0x1608);
    plVar3 = *(longlong **)(local_f8 + 0x80);
    if (plVar3 == *(longlong **)(local_f8 + 0x88)) {
      FUN_180052bde(plVar1,plVar3,local_148);
    }
    else {
      *plVar3 = local_148[0];
      *(longlong *)(local_f8 + 0x80) = *(longlong *)(local_f8 + 0x80) + 8;
    }
    FUN_180111069(local_148);
    FUN_1801166df((float)local_148[0]);
    if (bVar4) {
      if (*(char *)((longlong)puVar2 + 5) != '\0') goto LAB_1800e8a74;
      bVar18 = false;
LAB_1800e8d05:
      if ((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) {
        if ((!bVar4) && (*pcVar15 != '\0')) {
          FUN_180119893(0,uVar5);
        }
        bVar4 = true;
        FUN_1801330a5("%s",pcVar16);
        goto LAB_1800e8a87;
      }
      bVar4 = true;
      if ((bVar18) || (bVar4 = false, *(char *)((longlong)puVar2 + 0x1005) != '\0'))
      goto LAB_1800e8a87;
    }
    else {
      bVar18 = *pcVar15 != '\0';
      if (bVar18) {
        FUN_18013318b(&local_158,"%s",pcVar15);
      }
      if (*(char *)((longlong)puVar2 + 5) == '\0') goto LAB_1800e8d05;
      if (*pcVar15 != '\0') {
        FUN_180119893(0,uVar5);
      }
LAB_1800e8a74:
      bVar4 = true;
      FUN_1801330a5("%s",(longlong)puVar2 + 5);
LAB_1800e8a87:
      FUN_180119893(0,uVar5);
    }
    local_148[0] = 0;
    local_148[1] = 0;
    FUN_1801014f9(0x16,local_148);
    lVar14 = FUN_18010128e();
    local_148[0] = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar14 + 0x4c) >> 0x20) *
                            _UNK_1802dc2c4,(float)*(undefined8 *)(lVar14 + 0x4c) * _DAT_1802dc2c0);
    FUN_180101bbb(0xb,local_148);
    fVar20 = (float)FUN_180119e82();
    FUN_180111069(local_148);
    fVar11 = (float)local_148[0];
    lVar14 = FUN_18010128e();
    fVar21 = *(float *)(lVar14 + 0x4c);
    FUN_1801023ca(&local_100,&DAT_18035f632,0,0,0xbf800000);
    FUN_180119f0f(((fVar20 + fVar11) - (fVar21 + fVar21)) - (float)local_100);
    local_148[0] = 0;
    cVar12 = FUN_180134257(&DAT_18035f632,local_148);
    if (cVar12 != '\0') {
      FUN_1800eea2c(local_f8,uVar17 & 0xffffffff);
      uVar17 = uVar17 - 1;
    }
    FUN_180101ccb(1);
    FUN_180101625(1);
    if (bVar4) {
      if (*(char *)((longlong)puVar2 + 0x1005) != '\0') {
        fVar21 = (float)FUN_180119ea6();
        FUN_180119f4c(fVar21 + DAT_1802dc2d0);
        goto LAB_1800e8b9b;
      }
    }
    else {
LAB_1800e8b9b:
      if (*(char *)((longlong)puVar2 + 0x1005) != '\0') {
        FUN_1801330a5("%s",(longlong)puVar2 + 0x1005);
      }
    }
    FUN_1800181b0(local_148,puVar2 + 0x806);
    cVar12 = FUN_1800eebcc(local_148,0);
    if (local_110 != (longlong *)0x0) {
      (**(code **)(*local_110 + 0x20))(local_110,local_110 != local_148);
    }
    if (cVar12 == '\0') {
      local_148[0] = 0;
      cVar12 = FUN_180134257(puVar2 + 0x816,local_148);
      if (cVar12 != '\0') {
        FUN_1800181b0(local_148,puVar2 + 0x806);
        if (local_110 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_1802398e0();
        }
        (**(code **)(*local_110 + 0x10))();
        if (local_110 != (longlong *)0x0) {
          (**(code **)(*local_110 + 0x20))(local_110,local_110 != local_148);
        }
      }
    }
    FUN_1801167a4();
    if (uVar17 == 0) {
      lVar14 = _Xtime_get_ticks();
      uVar22 = FUN_1800eebe2(DAT_1802ac570,
                             (float)((lVar14 - *(longlong *)(puVar2 + 0x804)) / 10000) /
                             DAT_1802dc2d4);
      fVar23 = (float)FUN_1801169b7();
      fVar23 = (float)FUN_1800eebd5(DAT_1802dc2d8 - fVar23,0,uVar22);
    }
    fVar21 = (float)FUN_1801169b7();
    FUN_18010f900();
    fVar23 = fVar23 + fVar21 + fVar9;
    uVar17 = uVar17 + 1;
  } while (fVar23 + fVar6 < fVar24);
code_r0x0001800e8d63:
  for (lVar14 = *(longlong *)(local_f8 + 0x80); lVar14 != *plVar1; lVar14 = lVar14 + -8) {
    FUN_18011994d(*(undefined8 *)(lVar14 + -8));
  }
  FUN_18023d6e0(local_f8);
  return;
}

