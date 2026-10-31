/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10149f33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10149f33(int param_1,int param_2,int param_3)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar4 = DAT_1039d74c;
  iVar6 = 0;
  bVar2 = true;
  do {
    fVar8 = *(float *)(iVar4 + 0xe4 + iVar6 * 4);
    fVar7 = *(float *)(param_3 + 8 + iVar6 * 4);
    if ((fVar7 < fVar8) || (fVar7 = *(float *)(param_3 + iVar6 * 4), fVar8 < fVar7)) {
      fVar8 = fVar8 - fVar7;
      if (((fVar8 != 0.0) || (NAN(fVar8))) &&
         ((fVar7 = *(float *)(param_2 + 0xc4 + iVar6 * 4), 0.0 <= fVar8 || (0.0 <= fVar7)))) {
        fVar9 = 0.0;
        if (0.0 < fVar8) {
          fVar9 = DAT_1028b430;
          if (*(float *)(param_2 + 0xcc + iVar6 * 4) <= fVar7) goto LAB_1014a0d3;
        }
        fVar1 = *(float *)(iVar4 + 0x1228);
        fVar10 = ((float)((uint)fVar8 & _DAT_1028b410) - fVar1) / (fVar1 * DAT_102b7100 - fVar1);
        fVar11 = DAT_1028b430;
        if (fVar10 <= DAT_1028b430) {
          fVar11 = fVar10;
        }
        fVar8 = (float)(~-(uint)(fVar8 < 0.0) & (uint)fVar9 | -(uint)(fVar8 < 0.0) & DAT_102b8a50) *
                fVar1 * DAT_102b8ebc *
                (float)(-(uint)(fVar10 < 0.0) & (uint)DAT_1028b430 |
                       ~-(uint)(fVar10 < 0.0) & (uint)(fVar11 * DAT_102b6c58 + DAT_1028b430)) *
                *(float *)(iVar4 + 0x48) + *(float *)(param_1 + 0x20 + iVar6 * 4);
        *(float *)(param_1 + 0x20 + iVar6 * 4) = fVar8;
        iVar5 = (int)fVar8 - (uint)(fVar8 < 0.0 && (float)(int)fVar8 != fVar8);
        if (iVar5 != 0) {
          fVar8 = (float)iVar5;
          fVar7 = fVar7 + fVar8;
          if (bVar2) {
            FUN_10115911(param_2,fVar7);
          }
          else {
            FUN_10115932(param_2,fVar7);
          }
          *(float *)(param_1 + 0x20 + iVar6 * 4) = *(float *)(param_1 + 0x20 + iVar6 * 4) - fVar8;
        }
      }
    }
LAB_1014a0d3:
    iVar6 = 1;
    bVar3 = !bVar2;
    bVar2 = false;
    if (bVar3) {
      return;
    }
  } while( true );
}

