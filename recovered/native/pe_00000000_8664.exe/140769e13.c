/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769e13 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140769e13(void)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  ulonglong uVar5;
  float10 in_ST0;
  float fVar6;
  
  pfVar4 = (float *)(ulonglong)((int)&stack0xfffffffffffffff0 - 0x10);
  fVar6 = pfVar4[7];
  uVar5 = (ulonglong)_DAT_150b07570;
  uVar1 = *(uint *)(uVar5 + 0x14cc);
  *(float *)(uVar5 + 0xcc0) = *(float *)(uVar5 + 0x122c);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if ((fVar6 == 0.0) && (!NAN(fVar6))) {
    fVar6 = *(float *)(uVar5 + 0x122c) * *(float *)(uVar5 + 0xcc4) * *(float *)(uVar5 + 0xcc8);
    if (uVar1 != 0) {
      fVar6 = fVar6 * *(float *)((ulonglong)uVar1 + 0x2d8);
    }
    fVar6 = fVar6 * *(float *)(uVar5 + 0xbec);
    if (*(uint *)(uVar5 + 0x1220) != 0) {
      fVar6 = fVar6 * *(float *)((ulonglong)*(uint *)(uVar5 + 0x1220) + 0x38);
    }
  }
  *pfVar4 = (float)(int)(fVar6 + _DAT_150a20f66);
  pfVar4[2] = 512.0;
  pfVar4[1] = 1.0;
  pfVar4[-2] = 3.8534334;
  pfVar4[-1] = 1.4013e-45;
  FUN_14076ab94();
  pfVar4[3] = (float)in_ST0;
  fVar6 = pfVar4[3];
  if ((*(uint *)(uVar5 + 0x1220) != 0) && ((*(byte *)(uVar5 + 0x34) & 0x10) != 0)) {
    *(undefined4 *)((ulonglong)*(uint *)(uVar5 + 0x1220) + 0xc) = *(undefined4 *)(uVar5 + 0x1234);
  }
  *(float *)(uVar5 + 0x1228) = fVar6;
  *(float *)(uVar5 + 0x1250) = fVar6;
  if (uVar1 == 0) {
LAB_140769f42:
    *(undefined4 *)(uVar5 + 0x1224) = 0;
  }
  else {
    if (*(char *)((ulonglong)uVar1 + 0xfe) == '\x01') {
      uVar1 = *(uint *)(uVar5 + 0x2308);
      if (uVar1 == 0) {
        return;
      }
      iVar2 = *(int *)((ulonglong)uVar1 + 0x48);
      if ((iVar2 != -1) &&
         (*(char *)((ulonglong)*(uint *)((ulonglong)uVar1 + 0x10) + 0x6c +
                   (ulonglong)(uint)(iVar2 * 0x74)) == '\0')) {
        return;
      }
    }
    if (*(int *)(uVar5 + 0x1220) == 0) goto LAB_140769f42;
    *pfVar4 = fVar6;
    pfVar4[1] = -1.0;
    pfVar4[-2] = 3.8534636;
    pfVar4[-1] = 1.4013e-45;
    lVar3 = FUN_1407e80f8();
    *(int *)(uVar5 + 0x1224) = (int)lVar3;
    if ((int)lVar3 != 0) {
      fVar6 = *(float *)(uVar5 + 0x1228) / *(float *)(lVar3 + 0x10);
      goto LAB_140769f4f;
    }
  }
  fVar6 = 0.0;
LAB_140769f4f:
  *(float *)(uVar5 + 0x1230) = fVar6;
  *(float *)(uVar5 + 0x1254) = fVar6;
  return;
}

