/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403806d1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403806d1(void)

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
  
  lVar12 = DAT_14062a630;
  local_c0 = ram0x000140613b10 ^ (ulonglong)auStack_108;
  *(undefined1 *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x10b) = 1;
  lVar3 = *(longlong *)(lVar12 + 0x1608);
  puVar4 = *(uint **)(lVar3 + 0x208);
  FUN_14032b826();
  if (1 < (int)puVar4[4]) {
    FUN_1403205bf();
    FUN_1403a0192(puVar4 + 0x1c,*(undefined8 *)(lVar3 + 800));
  }
  uVar2 = puVar4[1];
  uVar16 = FUN_140313933(puVar4[8],*(undefined4 *)(lVar3 + 0x15c));
  puVar4[8] = uVar16;
  *(uint *)(lVar3 + 0x15c) = uVar16;
  if ((uVar2 & 0x10) == 0) {
    *(uint *)(lVar3 + 0x170) = puVar4[10];
  }
  if (((uVar2 & 1) == 0) && (*(char *)(lVar3 + 0x10e) == '\0')) {
    fVar17 = (float)FUN_140313933(puVar4[9],*(undefined4 *)(lVar3 + 700));
    uVar18 = FUN_1403000b2(*(undefined4 *)(lVar3 + 0x15c),*(undefined4 *)(lVar3 + 0x2c4));
    fVar8 = DAT_1404ed020;
    fVar7 = DAT_1404bda40;
    if (1 < (int)puVar4[4]) {
      fVar20 = fVar17 + DAT_1404bda40;
      local_d8 = -1;
      uVar14 = 1;
      lVar15 = 0x24;
      do {
        lVar5 = *(longlong *)(puVar4 + 0x1a);
        fVar1 = *(float *)(lVar3 + 0x60);
        fVar19 = (float)FUN_14037f90a(uVar14 & 0xffffffff);
        fVar19 = fVar19 + fVar1;
        uVar16 = *puVar4;
        local_d0 = (float)(int)(*(float *)(lVar12 + 0x1330) * fVar8);
        local_c8 = fVar19 + local_d0;
        local_d0 = fVar19 - local_d0;
        local_cc = fVar17;
        local_c4 = uVar18;
        cVar10 = FUN_140322b86(&local_d0,uVar16 + uVar14 & 0xffffffff,0,2);
        if (cVar10 != '\0') {
          local_d1 = 0;
          local_d2 = '\0';
          if ((uVar2 & 2) == 0) {
            local_e8 = 0;
            FUN_140344d3b(&local_d0,uVar16 + uVar14 & 0xffffffff,&local_d1,&local_d2);
            if ((local_d1 == 0) && (local_d2 == '\0')) goto LAB_1403808ff;
            FUN_14032a406(4);
            if (local_d2 == '\0') goto LAB_1403808ff;
            if ((*(byte *)(lVar5 + lVar15) & 2) == 0) {
              local_d8 = (int)uVar14;
            }
            bVar13 = 0x1e;
          }
          else {
LAB_1403808ff:
            bVar13 = local_d1 | 0x1c;
          }
          local_e8 = FUN_14031276b(bVar13,fVar7);
          local_e0 = 0x3f800000;
          FUN_1403a3f56(*(undefined8 *)(lVar3 + 800),(float)(int)fVar19,fVar20,uVar18);
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
        uVar18 = FUN_140380a62(puVar4,local_d8);
        FUN_14037fa02(iVar9,uVar18);
        uVar11 = 1;
        goto LAB_1403809a6;
      }
    }
  }
  uVar11 = 0;
LAB_1403809a6:
  *(undefined1 *)((longlong)puVar4 + 9) = uVar11;
  *(undefined8 *)(lVar3 + 0x298) = *(undefined8 *)(lVar3 + 0x2a8);
  *(undefined8 *)(lVar3 + 0x2a0) = *(undefined8 *)(lVar3 + 0x2b0);
  uVar6 = *(undefined8 *)(puVar4 + 0x15);
  *(undefined8 *)(lVar3 + 0x2a8) = *(undefined8 *)(puVar4 + 0x13);
  *(undefined8 *)(lVar3 + 0x2b0) = uVar6;
  *(undefined8 *)(lVar3 + 0x208) = 0;
  *(undefined4 *)(lVar3 + 0x1a0) = 0;
  *(float *)(lVar3 + 0x158) = (float)(int)(*(float *)(lVar3 + 0x60) + *(float *)(lVar3 + 0x19c));
  FUN_14032d607();
  if (ram0x000140613b10 == (local_c0 ^ (ulonglong)auStack_108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_c0 ^ (ulonglong)auStack_108);
}

