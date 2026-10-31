/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180109090 */

void FUN_180109090(float *param_1,char param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  
  lVar5 = DAT_180419160;
  if ((param_2 == '\0') && (lVar10 = *(longlong *)(DAT_180419160 + 0x1628), lVar10 != 0)) {
    uVar9 = *(undefined8 *)(lVar10 + 0x48);
    *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(DAT_180419160 + 0x2190);
    lVar10 = 0;
    if ((*(byte *)(*(longlong *)(lVar5 + 0x1628) + 0x15) & 2) == 0) {
      lVar10 = *(longlong *)(lVar5 + 0x1628);
    }
  }
  else {
    uVar9 = 0;
    lVar10 = 0;
  }
  if ((longlong)*(int *)(lVar5 + 0x15a8) < 1) {
    lVar6 = 0;
    lVar11 = lVar10;
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 0xe1c);
    fVar7 = (float)((ulonglong)uVar4 >> 0x20);
    fVar1 = *(float *)(lVar5 + 0xdcc);
    uVar13 = -(uint)(fVar1 <= (float)uVar4);
    uVar14 = -(uint)(fVar1 <= fVar7);
    fVar2 = *param_1;
    fVar3 = param_1[1];
    uVar8 = (longlong)*(int *)(lVar5 + 0x15a8) + 1;
    lVar6 = 0;
    do {
      lVar11 = *(longlong *)(*(longlong *)(lVar5 + 0x15b0) + -0x10 + uVar8 * 8);
      if ((((*(char *)(lVar11 + 0x10a) == '\x01') && (*(char *)(lVar11 + 0x111) == '\0')) &&
          ((*(uint *)(lVar11 + 0x14) >> 9 & 1) == 0)) &&
         (*(longlong *)(lVar11 + 0x48) == *(longlong *)(lVar5 + 0x2190))) {
        uVar12 = uVar4;
        if ((*(uint *)(lVar11 + 0x14) & 0x42) == 0) {
          uVar12 = CONCAT44(~uVar14 & (uint)fVar1 | (uint)fVar7 & uVar14,
                            ~uVar13 & (uint)fVar1 | (uint)(float)uVar4 & uVar13);
        }
        if ((((*(float *)(lVar11 + 0x268) - (float)uVar12 <= fVar2) &&
             (fVar15 = (float)((ulonglong)uVar12 >> 0x20),
             *(float *)(lVar11 + 0x26c) - fVar15 <= fVar3)) &&
            ((fVar2 < (float)uVar12 + *(float *)(lVar11 + 0x270) &&
             (fVar3 < fVar15 + *(float *)(lVar11 + 0x274))))) &&
           (((*(short *)(lVar11 + 0x2d8) == 0 ||
             (fVar15 = (float)(int)*(short *)(lVar11 + 0x2dc) + *(float *)(lVar11 + 0x60),
             fVar2 < fVar15)) ||
            ((fVar15 + (float)(int)*(short *)(lVar11 + 0x2d8) <= fVar2 ||
             ((fVar15 = (float)(int)*(short *)(lVar11 + 0x2de) + *(float *)(lVar11 + 100),
              fVar3 < fVar15 || (fVar15 + (float)(int)*(short *)(lVar11 + 0x2da) <= fVar3)))))))) {
          if (param_2 != '\0') break;
          if (lVar10 == 0) {
            lVar10 = lVar11;
          }
          if (((lVar6 == 0) && (lVar6 = lVar11, *(longlong *)(lVar5 + 0x1628) != 0)) &&
             (*(longlong *)(lVar11 + 0x428) == *(longlong *)(*(longlong *)(lVar5 + 0x1628) + 0x428))
             ) {
            lVar6 = 0;
          }
          else {
            lVar11 = lVar10;
            if (lVar10 != 0) break;
            lVar10 = 0;
          }
        }
      }
      uVar8 = uVar8 - 1;
      lVar11 = lVar10;
    } while (1 < uVar8);
  }
  *param_3 = lVar11;
  if (param_4 != (longlong *)0x0) {
    *param_4 = lVar6;
  }
  if ((param_2 == '\0') && (*(longlong *)(lVar5 + 0x1628) != 0)) {
    *(undefined8 *)(*(longlong *)(lVar5 + 0x1628) + 0x48) = uVar9;
  }
  return;
}

