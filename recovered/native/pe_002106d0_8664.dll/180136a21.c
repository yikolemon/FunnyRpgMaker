/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180136a21 */

undefined4 FUN_180136a21(undefined8 param_1,char param_2)

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
  
  lVar5 = DAT_180419160;
  local_a0 = DAT_180402640 ^ (ulonglong)auStack_108;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar5 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    uVar7 = FUN_180106d4e(lVar1,param_1,0);
    uVar11 = FUN_180101d94(param_1,0);
    local_e8 = 0xbf800000;
    FUN_1801023ca(&local_b0,param_1,uVar11,0);
    fVar14 = (float)FUN_18011a456();
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
    FUN_180111514();
    uVar8 = 0;
    cVar6 = FUN_1801116b6(&local_c0,uVar7,0,0);
    if (cVar6 != '\0') {
      local_a8 = CONCAT44((float)(int)((fVar14 + fVar4 + fVar4) * DAT_1802de570._4_4_ +
                                      DAT_1802de570._4_4_),
                          (float)(int)((fVar14 + fVar3 + fVar3) * (float)DAT_1802de570 +
                                      (float)DAT_1802de570));
      fVar16 = (DAT_1802bb8e0 + fVar14) * DAT_1802dbb2c;
      local_e8 = 0;
      uVar8 = FUN_18013386b(&local_c0,uVar7,&local_c1,&local_c2);
      if ((char)uVar8 != '\0') {
        FUN_18010748b(uVar7);
      }
      FUN_180102b0e(&local_c0,uVar7,0);
      uVar7 = FUN_18018f50a(*(undefined8 *)(lVar1 + 800),fVar16);
      uVar2 = *(undefined8 *)(lVar1 + 800);
      bVar12 = 7;
      if (local_c1 != '\0') {
        bVar12 = local_c2 | 8;
      }
      uVar9 = FUN_18010129b(bVar12,DAT_1802ac570);
      local_e8 = uVar7;
      FUN_180193670(uVar2,&local_a8,fVar16,uVar9);
      uVar9 = DAT_1802ac570;
      if (param_2 != '\0') {
        fVar15 = (float)FUN_180102463(DAT_1802ac570,(float)(int)(fVar14 / DAT_1802de604));
        uVar2 = *(undefined8 *)(lVar1 + 800);
        uVar9 = FUN_18010129b(0x12,uVar9);
        local_e8 = 0;
        FUN_180193670(uVar2,&local_a8,fVar16 - fVar15,uVar9);
      }
      uVar9 = DAT_1802ac570;
      fVar15 = *(float *)(lVar5 + 0xe00);
      if (0.0 < fVar15) {
        uVar2 = *(undefined8 *)(lVar1 + 800);
        uVar10 = FUN_18010129b(6,DAT_1802ac570);
        local_d0 = CONCAT44((float)((ulonglong)local_a8 >> 0x20) + DAT_1802dc280._4_4_,
                            (float)local_a8 + (float)DAT_1802dc280);
        local_e8 = uVar7;
        local_e0 = fVar15;
        FUN_18019355a(uVar2,&local_d0,fVar16,uVar10);
        uVar2 = *(undefined8 *)(lVar1 + 800);
        uVar10 = *(undefined4 *)(lVar5 + 0xe00);
        uVar9 = FUN_18010129b(5,uVar9);
        local_e8 = uVar7;
        local_e0 = (float)uVar10;
        FUN_18019355a(uVar2,&local_a8,fVar16,uVar9);
      }
      local_d0 = CONCAT44(*(float *)(lVar5 + 0xdf8) + fVar4,
                          *(float *)(lVar5 + 0xe0c) + fVar14 + fVar3);
      if (*(char *)(lVar5 + 0x2a40) == '\x01') {
        puVar13 = &DAT_18037a324;
        if (param_2 != '\0') {
          puVar13 = &DAT_180377823;
        }
        FUN_180101ebe(&local_d0,puVar13,0);
      }
      if (0.0 < local_b0) {
        FUN_180101dc8(local_d0,param_1,uVar11,0);
      }
    }
  }
  else {
    uVar8 = 0;
  }
  if (DAT_180402640 == (local_a0 ^ (ulonglong)auStack_108)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_a0 ^ (ulonglong)auStack_108);
}

