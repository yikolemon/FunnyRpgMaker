/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e4022 */

longlong FUN_1400e4022(longlong param_1,longlong param_2,float param_3,float param_4)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x2b0) + 0xc0);
  bVar3 = true;
  do {
    if ((int)uVar2 < 1) {
      lVar6 = 0;
    }
    else {
      uVar9 = 0;
      lVar6 = 0;
      lVar5 = 0;
      do {
        lVar10 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0xd0) + (uVar9 >> 5) * 8);
        lVar7 = (ulonglong)((uint)uVar9 & 0x1f) * 0x68;
        if ((*(longlong *)(lVar10 + 0x58 + lVar7) == param_2) &&
           (lVar10 = lVar10 + lVar7, (*(byte *)(lVar10 + 0x4f) & 4) == 0)) {
          if (bVar3) {
            if ((*(float *)(lVar10 + 0x18) != param_4) ||
               (NAN(*(float *)(lVar10 + 0x18)) || NAN(param_4))) goto LAB_1400e40b1;
          }
          fVar1 = *(float *)(lVar10 + 0x14);
          if ((param_3 < fVar1) && ((lVar5 == 0 || (fVar1 < *(float *)(lVar5 + 0x14))))) {
            lVar5 = lVar10;
          }
          if ((fVar1 < param_3) &&
             ((lVar6 == 0 ||
              (*(float *)(lVar6 + 0x14) <= fVar1 && fVar1 != *(float *)(lVar6 + 0x14))))) {
            lVar6 = lVar10;
          }
        }
LAB_1400e40b1:
        uVar8 = (uint)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar2 != uVar8);
      if (lVar5 != 0) {
        if (lVar6 == 0) {
          return lVar5;
        }
        if ((param_3 + param_3 <= *(float *)(lVar5 + 0x14)) &&
           (param_3 * DAT_1401c86a0 < *(float *)(lVar6 + 0x14))) {
          return lVar5;
        }
        return lVar6;
      }
      bVar3 = (bool)(lVar6 == 0 & bVar3);
    }
    bVar4 = !bVar3;
    bVar3 = false;
    if (bVar4) {
      return lVar6;
    }
  } while( true );
}

