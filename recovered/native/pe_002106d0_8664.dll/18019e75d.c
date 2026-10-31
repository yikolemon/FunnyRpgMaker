/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019e75d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_18019e75d(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,ushort param_5,
             uint *param_6,float *param_7)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar17;
  float fVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  
  plVar2 = *(longlong **)(param_2 + 0x90);
  iVar6 = FUN_1801cb681(*plVar2,param_5);
  if (iVar6 != 0) {
    if (plVar2[2] != param_3) {
      FUN_1801cccac(*param_4);
      plVar2[2] = param_3;
    }
    lVar9 = FUN_18019ec2a(plVar2,param_5);
    if (lVar9 != 0) {
      lVar9 = *plVar2;
      fVar18 = *(float *)(param_2 + 0x70) * *(float *)(param_3 + 0x18);
      lVar3 = *(longlong *)(lVar9 + 0x78);
      fVar21 = ((float)*(int *)(lVar3 + 0x58) * _DAT_180328050) / fVar18;
      if (param_7 != (float *)0x0) {
        *param_7 = fVar21;
        return CONCAT71((uint7)(byte)(param_5 >> 8),1);
      }
      iVar6 = FUN_1801cb657(lVar3,*(uint *)(plVar2 + 1) >> 6 & 2);
      if (iVar6 == 0) {
        uVar1 = *(ulonglong *)(lVar3 + 0x68);
        iVar19 = (int)uVar1;
        iVar20 = (int)(uVar1 >> 0x20);
        auVar13._0_4_ = -(uint)(iVar19 == 0);
        auVar13._4_4_ = -(uint)(iVar19 == 0);
        auVar13._8_4_ = -(uint)(iVar20 == 0);
        auVar13._12_4_ = -(uint)(SUB124(SUB1612((undefined1  [16])0x0,4),8) == iVar20);
        iVar6 = movmskpd((int)(ulonglong *)(lVar3 + 0x68),auVar13);
        *param_6 = *param_6 & 0x3f | (uint)((ulonglong)param_5 << 6);
        param_6[1] = (uint)fVar21;
        uVar11 = CONCAT71((int7)(((ulonglong)param_5 << 6) >> 8),1);
        if (iVar6 != 0) {
          return uVar11;
        }
        uVar7 = FUN_1801976e6(param_1,iVar20,uVar1 & 0xffffffff,0);
        if (uVar7 != 0xffffffff) {
          uVar10 = FUN_180197a3b(param_1,uVar7);
          FUN_1801471b6(*(longlong *)(param_1 + 0x2b0) + 0x80,iVar19 * iVar20 * 4);
          uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + 0x88);
          FUN_18019ec88(lVar3 + 0x68,uVar4,iVar20);
          lVar5 = **(longlong **)(*(longlong *)(param_3 + 0x58) + 0x28);
          fVar21 = *(float *)(lVar5 + 0x3c);
          if ((fVar21 != 0.0) || (fVar12 = DAT_1802ac570, NAN(fVar21))) {
            fVar12 = *(float *)(param_3 + 0x14) / fVar21;
          }
          fVar21 = fVar12 * (float)*(undefined8 *)(param_2 + 0x50) + (float)DAT_1802de570;
          fVar16 = fVar12 * (float)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 0x20) +
                   DAT_1802de570._4_4_;
          fVar12 = fVar12 * 0.0 + _UNK_1802de57c;
          iVar6 = -(uint)(fVar16 < 0.0 && (float)(int)fVar16 != fVar16);
          auVar14._0_8_ = CONCAT44(iVar6,-(uint)(fVar21 < 0.0 && (float)(int)fVar21 != fVar21));
          auVar14._8_4_ = iVar6;
          auVar14._12_4_ = -(uint)(fVar12 < 0.0 && (float)(int)fVar12 != fVar12);
          auVar15._0_8_ = auVar14._0_8_ << 0x3f;
          auVar15._8_8_ = auVar14._8_8_ << 0x3f;
          uVar8 = movmskpd((int)lVar5,auVar15);
          fVar21 = (float)(int)((int)fVar21 - (uVar8 & 1));
          fVar12 = (float)(int)((int)fVar16 - (uVar8 >> 1 & 0x7f)) + *(float *)(param_3 + 0x44);
          fVar18 = DAT_1802ac570 / fVar18;
          lVar9 = *(longlong *)(lVar9 + 0x78);
          fVar16 = (float)*(int *)(lVar9 + 0x90);
          fVar17 = (float)-*(int *)(lVar9 + 0x94);
          param_6[2] = (uint)(fVar21 + fVar18 * fVar16);
          param_6[3] = (uint)(fVar12 + fVar18 * fVar17);
          param_6[4] = (uint)(fVar21 + fVar18 * ((float)iVar20 + fVar16));
          param_6[5] = (uint)(fVar12 + fVar18 * ((float)iVar19 + fVar17));
          uVar8 = *param_6;
          *param_6 = uVar8 | 2;
          *param_6 = uVar8 & 0xfffffffe | 2 | (uint)(*(char *)(lVar3 + 0x82) == '\a');
          param_6[10] = uVar7;
          FUN_18019a809(param_1,param_3,param_2,param_6,uVar10,uVar4,0,iVar20 * 4);
          return uVar11;
        }
      }
    }
  }
  return 0;
}

