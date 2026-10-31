/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10126f94 */

int __fastcall FUN_10126f94(float *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int *piVar8;
  int local_18;
  int local_14;
  
  iVar3 = DAT_1039d74c;
  piVar8 = &local_14;
  local_14 = 0;
  local_18 = 0;
  iVar6 = 0;
  bVar4 = true;
  do {
    bVar7 = bVar4;
    if ((param_1[iVar6] != 0.0) || (NAN(param_1[iVar6]))) {
      iVar5 = *(int *)(DAT_1039d74c + 0x14d0);
      while (((*(uint *)(iVar5 + 0xc) >> 0x18 & 1) != 0 &&
             (((*(uint *)(iVar5 + 0xc) & 0x210) == 0x10 ||
              ((fVar2 = *(float *)(iVar5 + 0xcc + iVar6 * 4), fVar2 == 0.0 && (!NAN(fVar2)))))))) {
        iVar5 = *(int *)(iVar5 + 0x3a0);
      }
      *piVar8 = iVar5;
    }
    piVar8 = &local_18;
    iVar6 = 1;
    bVar4 = false;
  } while (bVar7);
  iVar6 = 0;
  if (local_14 != 0 || local_18 != 0) {
    if (((local_18 == 0) || (local_14 == 0)) || (local_14 == local_18)) {
      iVar6 = local_14;
      if (local_18 != 0) {
        iVar6 = local_18;
      }
    }
    else {
      iVar5 = *(int *)(DAT_1039d74c + 0x14ec);
      piVar8 = (int *)(DAT_1039d74c + 4);
      if (iVar5 == -1) {
        *(int *)(DAT_1039d74c + 0x14ec) = *piVar8;
      }
      if (((iVar5 != -1 && iVar5 != *piVar8) || ((*param_1 == 0.0 && (!NAN(*param_1))))) ||
         ((param_1[1] == 0.0 && (!NAN(param_1[1]))))) {
        fVar2 = *(float *)(iVar3 + 0x1500);
        pfVar1 = (float *)(iVar3 + 0x1504);
        if ((fVar2 != *pfVar1) || (NAN(fVar2) || NAN(*pfVar1))) {
          if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
            return local_18;
          }
          return local_14;
        }
      }
      *(undefined8 *)(iVar3 + 0x14f8) = *(undefined8 *)param_1;
    }
  }
  return iVar6;
}

