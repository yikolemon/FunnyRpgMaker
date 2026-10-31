/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c76d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c76d0(undefined8 param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  bVar3 = true;
  bVar6 = false;
  iVar8 = 0;
  local_80 = 0.0;
  local_98 = 0.0;
  local_88 = DAT_10303848;
  local_90 = DAT_10303848;
  local_70 = _DAT_102b8b00;
  uStack_6c = _UNK_102b8b04;
  uStack_68 = _UNK_102b8b08;
  uStack_64 = _UNK_102b8b0c;
  local_50 = _DAT_102b8b00;
  uStack_4c = _UNK_102b8b04;
  uStack_48 = _UNK_102b8b08;
  uStack_44 = _UNK_102b8b0c;
  do {
    FUN_101c754a(&local_30,(int)param_1,(int)((ulonglong)param_1 >> 0x20),iVar8);
    uVar11 = uStack_2c;
    uVar10 = local_30;
    dVar2 = (double)CONCAT44(uStack_2c,local_30);
    if (0.0 <= dVar2) {
      fVar9 = (float10)FUN_101c725a(local_30,uStack_2c,uStack_28,uStack_24,
                                    CONCAT44(uStack_1c,local_20));
      dVar1 = (double)fVar9;
      if (bVar6) {
        uVar15 = (undefined4)((ulonglong)local_98 >> 0x20);
        if ((bVar3) ||
           (cVar4 = FUN_101c736c(SUB84(local_98,0),uVar15,dVar1,local_80), cVar4 != '\0')) {
          bVar5 = FUN_101c736c(SUB84(local_98,0),uVar15,(int)param_2,
                               (int)((ulonglong)param_2 >> 0x20),dVar1);
          if (bVar5 == 0) {
            uVar10 = SUB84(local_90,0);
            uVar11 = (undefined4)((ulonglong)local_90 >> 0x20);
          }
          uVar7 = (uint)bVar5;
          uVar12 = (int)(uVar7 << 0x1f) >> 0x1f;
          uVar13 = (int)(uVar7 << 0x1f) >> 0x1f;
          uVar14 = (int)(uVar7 << 0x1f) >> 0x1f;
          uVar7 = (int)(uVar7 << 0x1f) >> 0x1f;
          if (bVar5 == 0) {
            local_98 = dVar1;
            local_88 = dVar2;
            dVar1 = local_80;
          }
          local_80 = dVar1;
          local_70 = local_70 & uVar12 | ~uVar12 & uStack_28;
          uStack_6c = uStack_6c & uVar13 | ~uVar13 & uStack_24;
          uStack_68 = uStack_68 & uVar14 | ~uVar14 & local_20;
          uStack_64 = uStack_64 & uVar7 | ~uVar7 & uStack_1c;
          local_50 = ~uVar12 & local_50 | uStack_28 & uVar12;
          uStack_4c = ~uVar13 & uStack_4c | uStack_24 & uVar13;
          uStack_48 = ~uVar14 & uStack_48 | local_20 & uVar14;
          uStack_44 = ~uVar7 & uStack_44 | uStack_1c & uVar7;
          bVar6 = true;
          bVar3 = false;
          local_90 = (double)CONCAT44(uVar11,uVar10);
        }
        else {
          bVar6 = true;
          bVar3 = false;
        }
      }
      else {
        local_70 = uStack_28;
        uStack_6c = uStack_24;
        uStack_68 = local_20;
        uStack_64 = uStack_1c;
        local_50 = uStack_28;
        uStack_4c = uStack_24;
        uStack_48 = local_20;
        uStack_44 = uStack_1c;
        bVar6 = true;
        local_98 = dVar1;
        local_90 = dVar2;
        local_88 = dVar2;
        local_80 = dVar1;
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0xc);
  *param_3 = local_88;
  *(uint *)(param_3 + 1) = local_70;
  *(uint *)((int)param_3 + 0xc) = uStack_6c;
  *(uint *)(param_3 + 2) = uStack_68;
  *(uint *)((int)param_3 + 0x14) = uStack_64;
  param_3[3] = local_90;
  *(uint *)(param_3 + 4) = local_50;
  *(uint *)((int)param_3 + 0x24) = uStack_4c;
  *(uint *)(param_3 + 5) = uStack_48;
  *(uint *)((int)param_3 + 0x2c) = uStack_44;
  if (DAT_10388d00 != (local_18 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

