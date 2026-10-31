/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a7dd7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400a7dd7(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  lVar1 = DAT_140f2a910;
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if (DAT_140211880 < *(float *)(DAT_140f2a910 + 0x2400) ||
      DAT_140211880 == *(float *)(DAT_140f2a910 + 0x2400)) {
    lVar3 = FUN_140088c06();
    local_38 = DAT_140211280;
    local_40 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar3 + 0x10) >> 0x20) * _UNK_140211894,
                        (float)*(undefined8 *)(lVar3 + 0x10) * _DAT_140211890);
    FUN_14008fdd9(&local_40,&local_38,0,0);
    local_38 = DAT_1401c8640;
    local_40 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar3 + 0x10) >> 0x20) *
                        DAT_1401c8640._4_4_ + (float)((ulonglong)*(undefined8 *)(lVar3 + 8) >> 0x20)
                        ,(float)*(undefined8 *)(lVar3 + 0x10) * (float)DAT_1401c8640 +
                         (float)*(undefined8 *)(lVar3 + 8));
    FUN_14008fda3(&local_40,1,&local_38);
    fVar7 = (float)*(undefined8 *)(lVar1 + 0xdbc);
    fVar8 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0xdbc) >> 0x20);
    local_38 = CONCAT44(fVar8 + fVar8,fVar7 + fVar7);
    FUN_14007ae77(2,&local_38);
    FUN_140085d7e("##NavWindowingOverlay",0,0x31347);
    *(undefined8 *)(lVar1 + 0x23f8) = *(undefined8 *)(lVar1 + 0x1608);
    if (*(char *)(lVar1 + 0x20) != '\0') {
      FUN_1400b1021(lVar1 + 0x20);
    }
    if (0 < (longlong)*(int *)(lVar1 + 0x15b8)) {
      uVar6 = (longlong)*(int *)(lVar1 + 0x15b8) + 1;
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x15c0) + -0x10 + uVar6 * 8);
        cVar2 = FUN_140095b18(lVar3);
        if (cVar2 != '\0') {
          lVar5 = *(longlong *)(lVar3 + 8);
          lVar4 = FUN_14007b050(lVar5,0);
          if (lVar5 == lVar4) {
            lVar5 = FUN_1400a8149(lVar3);
          }
          local_38 = 0;
          FUN_1400b2126(lVar5,*(longlong *)(lVar1 + 0x23e8) == lVar3,0,&local_38);
        }
        uVar6 = uVar6 - 1;
      } while (1 < uVar6);
    }
    FUN_140088c18();
    FUN_14007af87(1);
  }
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
}

