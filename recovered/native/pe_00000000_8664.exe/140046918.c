/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140046918 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140046918(longlong param_1)

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
  FUN_1400378a0();
  plVar1 = (longlong *)(local_f8 + 0x78);
  FUN_1400483bc(plVar1,*(undefined8 *)(local_f8 + 0x70));
  fVar9 = DAT_1401c86d4;
  fVar8 = DAT_1401c86d0;
  uVar7 = DAT_1401c86a4;
  fVar6 = DAT_1401c8670;
  uVar5 = DAT_1401c8658;
  fVar23 = 0.0;
  uVar17 = 0;
  do {
    while( true ) {
      if (*(ulonglong *)(local_f8 + 0x70) <= uVar17) goto code_r0x000140046f89;
      puVar2 = *(undefined4 **)
                (*(longlong *)(local_f8 + 0x58) +
                (*(longlong *)(local_f8 + 0x60) - 1U & *(longlong *)(local_f8 + 0x68) + uVar17) * 8)
      ;
      cVar12 = FUN_140048420(puVar2);
      if (cVar12 != '\x03') break;
      FUN_140048488(local_f8,uVar17 & 0xffffffff);
    }
    switch(*(char *)(puVar2 + 1)) {
    case '\x01':
      bVar4 = false;
      pcVar15 = &DAT_140ec1fe3;
      break;
    case '\x02':
      bVar4 = false;
      pcVar15 = &DAT_140ec1e4f;
      break;
    case '\x03':
      bVar4 = false;
      pcVar15 = &DAT_140ec1ed2;
      break;
    case '\x04':
      bVar4 = false;
      pcVar15 = &DAT_140ec1fd3;
      break;
    default:
      bVar4 = true;
      pcVar15 = (char *)0x0;
    }
    pcVar16 = (char *)((longlong)puVar2 + 5);
    if (*(char *)((longlong)puVar2 + 5) == '\0') {
      bVar13 = *(char *)(puVar2 + 1) - 1;
      if (bVar13 < 4) {
        pcVar16 = (&PTR_s_Success_1401c84d0)[bVar13];
      }
      else {
        pcVar16 = (char *)0x0;
      }
    }
    uVar19 = FUN_14004850a(puVar2);
    local_158 = uVar5;
    local_154 = uVar5;
    local_150 = uVar5;
    if ((byte)(*(char *)(puVar2 + 1) - 1U) < 4) {
      lVar14 = (ulonglong)(byte)(*(char *)(puVar2 + 1) - 1U) * 4;
      local_158 = *(undefined4 *)(&DAT_1401c84f0 + lVar14);
      local_154 = *(undefined4 *)(&DAT_1401c8500 + lVar14);
      local_150 = *(undefined4 *)(&DAT_1401c8510 + lVar14);
    }
    local_14c = uVar19;
    FUN_14004859e(local_198,"##TOAST%d",uVar17 & 0xffffffff);
    FUN_14008fe68(uVar19);
    lVar10 = DAT_140f2a910;
    *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
    lVar14 = *(longlong *)(lVar10 + 0x1608);
    *(undefined1 *)(lVar14 + 0x10b) = 1;
    uVar22 = *(undefined8 *)(*(longlong *)(lVar10 + 0x1608) + 0x68);
    fVar21 = (float)uVar22;
    fVar24 = (float)((ulonglong)uVar22 >> 0x20);
    local_148[0] = DAT_1401c8660;
    local_100 = CONCAT44((*(float *)(lVar14 + 100) + fVar24 + fVar6) - fVar23,
                         *(float *)(lVar14 + 0x60) + fVar21 + fVar6);
    FUN_14008fda3(&local_100,1,local_148);
    local_148[0] = CONCAT44(fVar24 + _UNK_1401c8684,fVar21 + _DAT_1401c8680);
    local_100 = CONCAT44(fVar24 * _UNK_1401c8694 * 0.0,fVar21 * _DAT_1401c8690 * DAT_1401c86a0);
    FUN_14008fdd9(&local_100,local_148,0,0);
    FUN_140085d7e(local_198,0,*puVar2);
    lVar14 = DAT_140f2a910;
    *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
    local_148[0] = *(longlong *)(lVar14 + 0x1608);
    plVar3 = *(longlong **)(local_f8 + 0x80);
    if (plVar3 == *(longlong **)(local_f8 + 0x88)) {
      FUN_14000d3b4(plVar1,plVar3,local_148);
    }
    else {
      *plVar3 = local_148[0];
      *(longlong *)(local_f8 + 0x80) = *(longlong *)(local_f8 + 0x80) + 8;
    }
    FUN_14008a381(local_148);
    FUN_14008f9f7((float)local_148[0]);
    if (bVar4) {
      if (*(char *)((longlong)puVar2 + 5) != '\0') goto LAB_140046c9a;
      bVar18 = false;
LAB_140046f2b:
      if ((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) {
        if ((!bVar4) && (*pcVar15 != '\0')) {
          FUN_140092bab(0,uVar7);
        }
        bVar4 = true;
        FUN_1400abfd5("%s",pcVar16);
        goto LAB_140046cad;
      }
      bVar4 = true;
      if ((bVar18) || (bVar4 = false, *(char *)((longlong)puVar2 + 0x1005) != '\0'))
      goto LAB_140046cad;
    }
    else {
      bVar18 = *pcVar15 != '\0';
      if (bVar18) {
        FUN_1400ac0bb(&local_158,"%s",pcVar15);
      }
      if (*(char *)((longlong)puVar2 + 5) == '\0') goto LAB_140046f2b;
      if (*pcVar15 != '\0') {
        FUN_140092bab(0,uVar7);
      }
LAB_140046c9a:
      bVar4 = true;
      FUN_1400abfd5("%s",(longlong)puVar2 + 5);
LAB_140046cad:
      FUN_140092bab(0,uVar7);
    }
    local_148[0] = 0;
    local_148[1] = 0;
    FUN_14007a7b5(0x16,local_148);
    lVar14 = FUN_14007a54a();
    local_148[0] = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar14 + 0x4c) >> 0x20) *
                            _UNK_1401c86b4,(float)*(undefined8 *)(lVar14 + 0x4c) * _DAT_1401c86b0);
    FUN_14007ae77(0xb,local_148);
    fVar20 = (float)FUN_14009319a();
    FUN_14008a381(local_148);
    fVar11 = (float)local_148[0];
    lVar14 = FUN_14007a54a();
    fVar21 = *(float *)(lVar14 + 0x4c);
    FUN_14007b686(&local_100,&DAT_140ec204a,0,0,0xbf800000);
    FUN_140093227(((fVar20 + fVar11) - (fVar21 + fVar21)) - (float)local_100);
    local_148[0] = 0;
    cVar12 = FUN_1400ad187(&DAT_140ec204a,local_148);
    if (cVar12 != '\0') {
      FUN_140048488(local_f8,uVar17 & 0xffffffff);
      uVar17 = uVar17 - 1;
    }
    FUN_14007af87(1);
    FUN_14007a8e1(1);
    if (bVar4) {
      if (*(char *)((longlong)puVar2 + 0x1005) != '\0') {
        fVar21 = (float)FUN_1400931be();
        FUN_140093264(fVar21 + DAT_1401c86c0);
        goto LAB_140046dc1;
      }
    }
    else {
LAB_140046dc1:
      if (*(char *)((longlong)puVar2 + 0x1005) != '\0') {
        FUN_1400abfd5("%s",(longlong)puVar2 + 0x1005);
      }
    }
    FUN_140007f78(local_148,puVar2 + 0x806);
    cVar12 = FUN_140048628(local_148,0);
    if (local_110 != (longlong *)0x0) {
      (**(code **)(*local_110 + 0x20))(local_110,local_110 != local_148);
    }
    if (cVar12 == '\0') {
      local_148[0] = 0;
      cVar12 = FUN_1400ad187(puVar2 + 0x816,local_148);
      if (cVar12 != '\0') {
        FUN_140007f78(local_148,puVar2 + 0x806);
        if (local_110 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_1401899e0();
        }
        (**(code **)(*local_110 + 0x10))();
        if (local_110 != (longlong *)0x0) {
          (**(code **)(*local_110 + 0x20))(local_110,local_110 != local_148);
        }
      }
    }
    FUN_14008fabc();
    if (uVar17 == 0) {
      lVar14 = _Xtime_get_ticks();
      uVar22 = FUN_14004863e(DAT_1401c86c8,
                             (float)((lVar14 - *(longlong *)(puVar2 + 0x804)) / 10000) /
                             DAT_1401c86c4);
      fVar23 = (float)FUN_14008fccf();
      fVar23 = (float)FUN_140048631(DAT_1401c86cc - fVar23,0,uVar22);
    }
    fVar21 = (float)FUN_14008fccf();
    FUN_140088c18();
    fVar23 = fVar23 + fVar21 + fVar8;
    uVar17 = uVar17 + 1;
  } while (fVar23 + fVar9 < fVar24);
code_r0x000140046f89:
  for (lVar14 = *(longlong *)(local_f8 + 0x80); lVar14 != *plVar1; lVar14 = lVar14 + -8) {
    FUN_140092c65(*(undefined8 *)(lVar14 + -8));
  }
  FUN_14018a340(local_f8);
  return;
}

