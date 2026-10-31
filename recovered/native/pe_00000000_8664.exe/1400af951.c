/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400af951 */

undefined4 FUN_1400af951(undefined8 param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  float local_e0;
  undefined8 local_d0;
  byte local_c2;
  char local_c1;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  undefined8 local_a8;
  ulonglong local_a0;
  
  lVar5 = DAT_140f2a910;
  local_a0 = DAT_140f17b40 ^ (ulonglong)auStack_108;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar5 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    uVar7 = FUN_140080066(lVar1,param_1,0);
    uVar11 = FUN_14007b050(param_1,0);
    local_e8 = 0xbf800000;
    FUN_14007b686(&local_b0,param_1,uVar11,0);
    fVar14 = (float)FUN_14009376e();
    fVar3 = *(float *)(lVar1 + 0x158);
    fVar4 = *(float *)(lVar1 + 0x15c);
    fVar16 = 0.0;
    if (0.0 < local_b0) {
      fVar16 = local_b0 + *(float *)(lVar5 + 0xe0c);
    }
    fStack_b8 = fVar16 + fVar14 + fVar3;
    fStack_b4 = *(float *)(lVar5 + 0xdf8) + *(float *)(lVar5 + 0xdf8) + local_ac + fVar4;
    local_a8 = CONCAT44(fStack_b4 - fVar4,fStack_b8 - fVar3);
    local_c0 = fVar3;
    fStack_bc = fVar4;
    FUN_14008a82c();
    uVar8 = 0;
    cVar6 = FUN_14008a9ce(&local_c0,uVar7,0,0);
    if (cVar6 != '\0') {
      local_a8 = CONCAT44((float)(int)((fVar14 + fVar4 + fVar4) * DAT_1401c8640._4_4_ +
                                      DAT_1401c8640._4_4_),
                          (float)(int)((fVar14 + fVar3 + fVar3) * (float)DAT_1401c8640 +
                                      (float)DAT_1401c8640));
      fVar16 = (DAT_1401c86a4 + fVar14) * DAT_1401c86a0;
      local_e8 = 0;
      uVar8 = FUN_1400ac79b(&local_c0,uVar7,&local_c1,&local_c2);
      if ((char)uVar8 != '\0') {
        FUN_1400807a3(uVar7);
      }
      FUN_14007bdca(&local_c0,uVar7,0);
      uVar7 = FUN_1400daa7e(*(undefined8 *)(lVar1 + 800),fVar16);
      uVar2 = *(undefined8 *)(lVar1 + 800);
      bVar12 = 7;
      if (local_c1 != '\0') {
        bVar12 = local_c2 | 8;
      }
      uVar9 = FUN_14007a557(bVar12,DAT_1401c86c8);
      local_e8 = uVar7;
      FUN_1400debe4(uVar2,&local_a8,fVar16,uVar9);
      uVar9 = DAT_1401c86c8;
      if (param_2 != '\0') {
        fVar15 = (float)FUN_14007b71f(DAT_1401c86c8,(float)(int)(fVar14 / DAT_14020fff0));
        uVar2 = *(undefined8 *)(lVar1 + 800);
        uVar9 = FUN_14007a557(0x12,uVar9);
        local_e8 = 0;
        FUN_1400debe4(uVar2,&local_a8,fVar16 - fVar15,uVar9);
      }
      uVar9 = DAT_1401c86c8;
      fVar15 = *(float *)(lVar5 + 0xe00);
      if (0.0 < fVar15) {
        uVar2 = *(undefined8 *)(lVar1 + 800);
        uVar10 = FUN_14007a557(6,DAT_1401c86c8);
        local_d0 = CONCAT44((float)((ulonglong)local_a8 >> 0x20) + DAT_1401c8660._4_4_,
                            (float)local_a8 + (float)DAT_1401c8660);
        local_e8 = uVar7;
        local_e0 = fVar15;
        FUN_1400deace(uVar2,&local_d0,fVar16,uVar10);
        uVar2 = *(undefined8 *)(lVar1 + 800);
        uVar10 = *(undefined4 *)(lVar5 + 0xe00);
        uVar9 = FUN_14007a557(5,uVar9);
        local_e8 = uVar7;
        local_e0 = (float)uVar10;
        FUN_1400deace(uVar2,&local_a8,fVar16,uVar9);
      }
      local_d0 = CONCAT44(*(float *)(lVar5 + 0xdf8) + fVar4,
                          *(float *)(lVar5 + 0xe0c) + fVar14 + fVar3);
      if (*(char *)(lVar5 + 0x2a40) == '\x01') {
        puVar13 = &DAT_140ed9596;
        if (param_2 != '\0') {
          puVar13 = &DAT_140ed716f;
        }
        FUN_14007b17a(&local_d0,puVar13,0);
      }
      if (0.0 < local_b0) {
        FUN_14007b084(local_d0,param_1,uVar11,0);
      }
    }
  }
  else {
    uVar8 = 0;
  }
  if (DAT_140f17b40 == (local_a0 ^ (ulonglong)auStack_108)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_a0 ^ (ulonglong)auStack_108);
}

