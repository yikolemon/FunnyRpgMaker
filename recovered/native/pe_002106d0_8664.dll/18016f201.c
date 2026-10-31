/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016f201 */

void FUN_18016f201(void)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  char cVar10;
  undefined1 uVar11;
  longlong lVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  int local_d8;
  char local_d2;
  byte local_d1;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  
  lVar12 = DAT_180419160;
  local_c0 = DAT_180402640 ^ (ulonglong)auStack_108;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  lVar3 = *(longlong *)(lVar12 + 0x1608);
  puVar4 = *(uint **)(lVar3 + 0x208);
  FUN_18011a356();
  if (1 < (int)puVar4[4]) {
    FUN_18010f0ef();
    FUN_18018ecc2(puVar4 + 0x1c,*(undefined8 *)(lVar3 + 800));
  }
  uVar2 = puVar4[1];
  uVar16 = FUN_180102463(puVar4[8],*(undefined4 *)(lVar3 + 0x15c));
  puVar4[8] = uVar16;
  *(uint *)(lVar3 + 0x15c) = uVar16;
  if ((uVar2 & 0x10) == 0) {
    *(uint *)(lVar3 + 0x170) = puVar4[10];
  }
  if (((uVar2 & 1) == 0) && (*(char *)(lVar3 + 0x10e) == '\0')) {
    fVar17 = (float)FUN_180102463(puVar4[9],*(undefined4 *)(lVar3 + 700));
    uVar18 = FUN_1800eebe2(*(undefined4 *)(lVar3 + 0x15c),*(undefined4 *)(lVar3 + 0x2c4));
    fVar8 = DAT_1802dbb50;
    fVar7 = DAT_1802ac570;
    if (1 < (int)puVar4[4]) {
      fVar20 = fVar17 + DAT_1802ac570;
      local_d8 = -1;
      uVar14 = 1;
      lVar15 = 0x24;
      do {
        lVar5 = *(longlong *)(puVar4 + 0x1a);
        fVar1 = *(float *)(lVar3 + 0x60);
        fVar19 = (float)FUN_18016e43a(uVar14 & 0xffffffff);
        fVar19 = fVar19 + fVar1;
        uVar16 = *puVar4;
        local_d0 = (float)(int)(*(float *)(lVar12 + 0x1330) * fVar8);
        local_c8 = fVar19 + local_d0;
        local_d0 = fVar19 - local_d0;
        local_cc = fVar17;
        local_c4 = uVar18;
        cVar10 = FUN_1801116b6(&local_d0,uVar16 + uVar14 & 0xffffffff,0,2);
        if (cVar10 != '\0') {
          local_d1 = 0;
          local_d2 = '\0';
          if ((uVar2 & 2) == 0) {
            local_e8 = 0;
            FUN_18013386b(&local_d0,uVar16 + uVar14 & 0xffffffff,&local_d1,&local_d2);
            if ((local_d1 == 0) && (local_d2 == '\0')) goto LAB_18016f42f;
            FUN_180118f36(4);
            if (local_d2 == '\0') goto LAB_18016f42f;
            if ((*(byte *)(lVar5 + lVar15) & 2) == 0) {
              local_d8 = (int)uVar14;
            }
            bVar13 = 0x1e;
          }
          else {
LAB_18016f42f:
            bVar13 = local_d1 | 0x1c;
          }
          local_e8 = FUN_18010129b(bVar13,fVar7);
          local_e0 = 0x3f800000;
          FUN_180192a86(*(undefined8 *)(lVar3 + 800),(float)(int)fVar19,fVar20,uVar18);
        }
        iVar9 = local_d8;
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + 0x1c;
      } while ((longlong)uVar14 < (longlong)(int)puVar4[4]);
      if (local_d8 != -1) {
        if ((-1 < (int)puVar4[4]) && (*(char *)((longlong)puVar4 + 9) == '\0')) {
          lVar12 = -1;
          lVar15 = 4;
          do {
            *(undefined4 *)(*(longlong *)(puVar4 + 0x1a) + lVar15) =
                 *(undefined4 *)(*(longlong *)(puVar4 + 0x1a) + -4 + lVar15);
            lVar12 = lVar12 + 1;
            lVar15 = lVar15 + 0x1c;
          } while (lVar12 < (int)puVar4[4]);
        }
        *(undefined1 *)((longlong)puVar4 + 9) = 1;
        uVar18 = FUN_18016f592(puVar4,local_d8);
        FUN_18016e532(iVar9,uVar18);
        uVar11 = 1;
        goto LAB_18016f4d6;
      }
    }
  }
  uVar11 = 0;
LAB_18016f4d6:
  *(undefined1 *)((longlong)puVar4 + 9) = uVar11;
  *(undefined8 *)(lVar3 + 0x298) = *(undefined8 *)(lVar3 + 0x2a8);
  *(undefined8 *)(lVar3 + 0x2a0) = *(undefined8 *)(lVar3 + 0x2b0);
  uVar6 = *(undefined8 *)(puVar4 + 0x15);
  *(undefined8 *)(lVar3 + 0x2a8) = *(undefined8 *)(puVar4 + 0x13);
  *(undefined8 *)(lVar3 + 0x2b0) = uVar6;
  *(undefined8 *)(lVar3 + 0x208) = 0;
  *(undefined4 *)(lVar3 + 0x1a0) = 0;
  *(float *)(lVar3 + 0x158) = (float)(int)(*(float *)(lVar3 + 0x60) + *(float *)(lVar3 + 0x19c));
  FUN_18011c137();
  if (DAT_180402640 == (local_c0 ^ (ulonglong)auStack_108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_c0 ^ (ulonglong)auStack_108);
}

