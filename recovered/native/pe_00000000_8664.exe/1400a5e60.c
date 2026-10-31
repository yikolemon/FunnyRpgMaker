/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a5e60 */

longlong FUN_1400a5e60(float *param_1)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_18;
  longlong local_10;
  
  lVar5 = DAT_140f2a910;
  lVar9 = 0;
  local_18 = 0;
  local_10 = 0;
  plVar8 = &local_18;
  bVar6 = true;
  do {
    bVar7 = bVar6;
    if ((param_1[lVar9] != 0.0) || (NAN(param_1[lVar9]))) {
      lVar10 = *(longlong *)(DAT_140f2a910 + 0x1610);
      while (((*(uint *)(lVar10 + 0x14) >> 0x18 & 1) != 0 &&
             (((*(uint *)(lVar10 + 0x14) & 0x210) == 0x10 ||
              ((fVar3 = *(float *)(lVar10 + 0xdc + lVar9 * 4), fVar3 == 0.0 && (!NAN(fVar3)))))))) {
        lVar10 = *(longlong *)(lVar10 + 0x408);
      }
      *plVar8 = lVar10;
    }
    lVar9 = 1;
    plVar8 = &local_10;
    bVar6 = false;
  } while (bVar7);
  if (local_18 != 0 || local_10 != 0) {
    if (((local_10 == 0) || (local_18 == 0)) || (local_18 == local_10)) {
      if (local_10 == 0) {
        return local_18;
      }
      return local_10;
    }
    iVar4 = *(int *)(DAT_140f2a910 + 0x1640);
    piVar1 = (int *)(DAT_140f2a910 + 4);
    if (iVar4 == -1) {
      *(int *)(DAT_140f2a910 + 0x1640) = *piVar1;
    }
    if (((iVar4 != -1 && iVar4 != *piVar1) || ((*param_1 == 0.0 && (!NAN(*param_1))))) ||
       ((param_1[1] == 0.0 && (!NAN(param_1[1]))))) {
      fVar3 = *(float *)(lVar5 + 0x1654);
      pfVar2 = (float *)(lVar5 + 0x1658);
      if ((fVar3 != *pfVar2) || (NAN(fVar3) || NAN(*pfVar2))) {
        if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
          return local_18;
        }
        return local_10;
      }
    }
    *(undefined8 *)(lVar5 + 0x164c) = *(undefined8 *)param_1;
  }
  return 0;
}

