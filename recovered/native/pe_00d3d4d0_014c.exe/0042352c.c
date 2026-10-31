/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042352c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0042352c(double param_1,double param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
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
  
  local_18 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  bVar3 = true;
  bVar4 = false;
  uVar6 = 0;
  local_80 = 0.0;
  local_98 = 0.0;
  local_88 = DAT_004d7df8;
  local_90 = DAT_004d7df8;
  local_70 = _DAT_004cd850;
  uStack_6c = _UNK_004cd854;
  uStack_68 = _UNK_004cd858;
  uStack_64 = _UNK_004cd85c;
  local_50 = _DAT_004cd850;
  uStack_4c = _UNK_004cd854;
  uStack_48 = _UNK_004cd858;
  uStack_44 = _UNK_004cd85c;
  do {
    FUN_004233a6((double *)&local_30,param_1,uVar6);
    uVar9 = uStack_2c;
    uVar8 = local_30;
    dVar2 = (double)CONCAT44(uStack_2c,local_30);
    if (0.0 <= dVar2) {
      fVar7 = (float10)FUN_004230b6(local_30,uStack_2c,uStack_28,uStack_24,
                                    (double)CONCAT44(uStack_1c,local_20));
      dVar1 = (double)fVar7;
      if (bVar4) {
        if ((bVar3) || (bVar4 = FUN_004231c8(local_98,dVar1,local_80), bVar4)) {
          bVar4 = FUN_004231c8(local_98,param_2,dVar1);
          if (!bVar4) {
            uVar8 = SUB84(local_90,0);
            uVar9 = (undefined4)((ulonglong)local_90 >> 0x20);
          }
          uVar5 = (uint)bVar4;
          uVar10 = (int)(uVar5 << 0x1f) >> 0x1f;
          uVar11 = (int)(uVar5 << 0x1f) >> 0x1f;
          uVar12 = (int)(uVar5 << 0x1f) >> 0x1f;
          uVar5 = (int)(uVar5 << 0x1f) >> 0x1f;
          if (!bVar4) {
            local_98 = dVar1;
            local_88 = dVar2;
            dVar1 = local_80;
          }
          local_80 = dVar1;
          local_70 = local_70 & uVar10 | ~uVar10 & uStack_28;
          uStack_6c = uStack_6c & uVar11 | ~uVar11 & uStack_24;
          uStack_68 = uStack_68 & uVar12 | ~uVar12 & local_20;
          uStack_64 = uStack_64 & uVar5 | ~uVar5 & uStack_1c;
          local_50 = ~uVar10 & local_50 | uStack_28 & uVar10;
          uStack_4c = ~uVar11 & uStack_4c | uStack_24 & uVar11;
          uStack_48 = ~uVar12 & uStack_48 | local_20 & uVar12;
          uStack_44 = ~uVar5 & uStack_44 | uStack_1c & uVar5;
          bVar4 = true;
          bVar3 = false;
          local_90 = (double)CONCAT44(uVar9,uVar8);
        }
        else {
          bVar4 = true;
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
        bVar4 = true;
        local_98 = dVar1;
        local_90 = dVar2;
        local_88 = dVar2;
        local_80 = dVar1;
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0xc);
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
  if (DAT_0050e8c0 != (local_18 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_18 ^ (uint)&stack0xfffffffc);
  }
  return;
}

