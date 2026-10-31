/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a3b66 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400a3b66(longlong param_1,longlong param_2,undefined8 *param_3,char param_4,char param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float unaff_XMM8_Da;
  float unaff_XMM8_Db;
  undefined8 unaff_XMM9_Qa;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  uint local_c4;
  undefined8 local_c0;
  ulonglong local_b8 [15];
  ulonglong uVar8;
  
  local_b8[3] = DAT_140f17b40 ^ (ulonglong)auStack_108;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar11 = *(uint *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = uVar11 & 0xfffffffe;
  uVar3 = *(uint *)((longlong)param_3 + 0x24);
  uVar10 = (ulonglong)uVar3;
  iVar4 = *(int *)(param_3 + 5);
  if (uVar3 < iVar4 + uVar3) {
    auVar20 = _DAT_140211280;
    auVar22 = _DAT_140211590;
    local_c4 = uVar11;
    do {
      if (*(int *)(param_2 + 0x10) < 1) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(param_2 + 0x18);
      }
      uVar11 = *(uint *)(param_3 + 4);
      lVar5 = *(longlong *)(param_2 + 0x28);
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_b8[2] = 0;
      lVar9 = 0;
      fVar12 = auVar22._0_4_;
      fVar13 = auVar22._4_4_;
      uVar14 = auVar22._8_4_;
      uVar15 = auVar22._12_4_;
      fVar16 = auVar20._0_4_;
      fVar17 = auVar20._4_4_;
      uVar18 = auVar20._8_4_;
      uVar19 = auVar20._12_4_;
      do {
        uVar8 = (uVar10 & 0xffffffff) + lVar9;
        uVar7 = (uint)uVar8;
        if (lVar6 != 0) {
          uVar7 = (uint)*(ushort *)(lVar6 + (uVar8 & 0xffffffff) * 2);
        }
        uVar8 = *(ulonglong *)((ulonglong)uVar11 * 0x14 + lVar5 + (ulonglong)uVar7 * 0x14);
        local_b8[lVar9] = uVar8;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar8;
        auVar20._4_4_ = fVar17;
        auVar20._0_4_ = fVar16;
        auVar20._8_4_ = uVar18;
        auVar20._12_4_ = uVar19;
        auVar20 = minps(auVar21,auVar20);
        auVar22._4_4_ = fVar13;
        auVar22._0_4_ = fVar12;
        auVar22._8_4_ = uVar14;
        auVar22._12_4_ = uVar15;
        auVar22 = maxps(auVar21,auVar22);
        lVar9 = lVar9 + 1;
        fVar12 = auVar22._0_4_;
        fVar13 = auVar22._4_4_;
        uVar14 = auVar22._8_4_;
        uVar15 = auVar22._12_4_;
        fVar16 = auVar20._0_4_;
        fVar17 = auVar20._4_4_;
        uVar18 = auVar20._8_4_;
        uVar19 = auVar20._12_4_;
      } while (lVar9 != 3);
      if (param_4 != '\0') {
        local_e0 = 0x200;
        local_e8 = 0x3f800000;
        FUN_1400db1c8(param_1,local_b8,3,0xff00ffff);
      }
      uVar10 = (uVar10 & 0xffffffff) + 3;
    } while ((uint)uVar10 < iVar4 + uVar3);
    unaff_XMM8_Da = (float)(int)fVar12;
    unaff_XMM8_Db = (float)(int)fVar13;
    unaff_XMM9_Qa = CONCAT44((float)(int)fVar17,(float)(int)fVar16);
    uVar11 = local_c4;
  }
  if (param_5 != '\0') {
    local_b8[0] = CONCAT44((float)(int)(float)((ulonglong)uVar2 >> 0x20),(float)(int)(float)uVar2);
    local_c0 = CONCAT44((float)(int)(float)((ulonglong)uVar1 >> 0x20),(float)(int)(float)uVar1);
    local_d8 = 0;
    local_e0 = 0x3f800000;
    local_e8 = 0;
    FUN_1400de17e(param_1,&local_c0,local_b8,0xffff00ff);
    local_b8[0] = CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
    local_d8 = 0;
    local_e0 = 0x3f800000;
    local_e8 = 0;
    local_c0 = unaff_XMM9_Qa;
    FUN_1400de17e(param_1,&local_c0,local_b8,0xffffff00);
  }
  *(uint *)(param_1 + 0x30) = uVar11;
  if (DAT_140f17b40 == (local_b8[3] ^ (ulonglong)auStack_108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_b8[3] ^ (ulonglong)auStack_108);
}

