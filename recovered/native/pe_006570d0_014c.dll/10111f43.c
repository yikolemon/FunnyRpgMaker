/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111f43 */

void FUN_10111f43(float param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  
  iVar2 = DAT_1039d74c;
  iVar3 = *(int *)(DAT_1039d74c + 0x14cc);
  pfVar1 = (float *)(DAT_1039d74c + 0x122c);
  *(float *)(DAT_1039d74c + 0xcc0) = *pfVar1;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    param_1 = *pfVar1 * *(float *)(iVar2 + 0xcc4) * *(float *)(iVar2 + 0xcc8);
    if (iVar3 != 0) {
      param_1 = param_1 * *(float *)(iVar3 + 0x2d8);
    }
    param_1 = param_1 * *(float *)(iVar2 + 0xbec);
    if (*(int *)(iVar2 + 0x1220) != 0) {
      param_1 = param_1 * *(float *)(*(int *)(iVar2 + 0x1220) + 0x38);
    }
  }
  fVar4 = (float10)FUN_10112cc4((float)(int)(param_1 + DAT_102b70e0),0x3f800000,0x44000000);
  fVar5 = (float)fVar4;
  if ((*(int *)(iVar2 + 0x1220) != 0) && ((*(byte *)(iVar2 + 0x34) & 0x10) != 0)) {
    *(undefined4 *)(*(int *)(iVar2 + 0x1220) + 0xc) = *(undefined4 *)(iVar2 + 0x1234);
  }
  *(float *)(iVar2 + 0x1228) = fVar5;
  *(float *)(iVar2 + 0x1250) = fVar5;
  if (iVar3 == 0) {
LAB_10112072:
    *(undefined4 *)(iVar2 + 0x1224) = 0;
  }
  else {
    if (*(char *)(iVar3 + 0xfe) == '\x01') {
      iVar3 = *(int *)(iVar2 + 0x2308);
      if (iVar3 == 0) {
        return;
      }
      if ((*(int *)(iVar3 + 0x48) != -1) &&
         (*(char *)(*(int *)(iVar3 + 0x10) + 0x6c + *(int *)(iVar3 + 0x48) * 0x74) == '\0')) {
        return;
      }
    }
    if (*(int *)(iVar2 + 0x1220) == 0) goto LAB_10112072;
    iVar3 = FUN_10190228(fVar5,0xbf800000);
    *(int *)(iVar2 + 0x1224) = iVar3;
    if (iVar3 != 0) {
      fVar5 = *(float *)(iVar2 + 0x1228) / *(float *)(iVar3 + 0x10);
      goto LAB_1011207f;
    }
  }
  fVar5 = 0.0;
LAB_1011207f:
  *(float *)(iVar2 + 0x1230) = fVar5;
  *(float *)(iVar2 + 0x1254) = fVar5;
  return;
}

