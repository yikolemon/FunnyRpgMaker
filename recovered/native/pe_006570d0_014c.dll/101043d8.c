/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101043d8 */

void FUN_101043d8(float *param_1,char param_2,int *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  int local_28;
  
  iVar6 = DAT_1039d74c;
  local_28 = 0;
  uVar10 = 0;
  iVar8 = 0;
  if ((param_2 == '\0') && (iVar9 = *(int *)(DAT_1039d74c + 0x14dc), iVar9 != 0)) {
    uVar10 = *(undefined4 *)(iVar9 + 0x3c);
    *(undefined4 *)(iVar9 + 0x3c) = *(undefined4 *)(DAT_1039d74c + 0x1ff0);
    iVar8 = 0;
    if ((*(byte *)(*(int *)(iVar6 + 0x14dc) + 0xd) & 2) == 0) {
      iVar8 = *(int *)(iVar6 + 0x14dc);
    }
  }
  iVar9 = iVar8;
  if (0 < *(int *)(iVar6 + 0x1484)) {
    fVar4 = *(float *)(iVar6 + 0xd34);
    fVar5 = *(float *)(iVar6 + 0xd38);
    fVar1 = *(float *)(iVar6 + 0xce4);
    fVar2 = *param_1;
    fVar3 = param_1[1];
    uVar7 = *(int *)(iVar6 + 0x1484) + 1;
    local_28 = 0;
    do {
      iVar9 = *(int *)(*(int *)(iVar6 + 0x148c) + -8 + uVar7 * 4);
      if ((((*(char *)(iVar9 + 0xfa) == '\x01') && (*(char *)(iVar9 + 0x101) == '\0')) &&
          ((*(uint *)(iVar9 + 0xc) >> 9 & 1) == 0)) &&
         (*(int *)(iVar9 + 0x3c) == *(int *)(iVar6 + 0x1ff0))) {
        fVar11 = fVar4;
        fVar12 = fVar5;
        if ((*(uint *)(iVar9 + 0xc) & 0x42) == 0) {
          fVar11 = (float)(~-(uint)(fVar1 <= fVar4) & (uint)fVar1 |
                          (uint)fVar4 & -(uint)(fVar1 <= fVar4));
          fVar12 = (float)(~-(uint)(fVar1 <= fVar5) & (uint)fVar1 |
                          (uint)fVar5 & -(uint)(fVar1 <= fVar5));
        }
        if ((((*(float *)(iVar9 + 0x23c) - fVar11 <= fVar2) &&
             (*(float *)(iVar9 + 0x240) - fVar12 <= fVar3)) &&
            ((fVar2 < fVar11 + *(float *)(iVar9 + 0x244) &&
             (fVar3 < fVar12 + *(float *)(iVar9 + 0x248))))) &&
           (((*(short *)(iVar9 + 0x2ac) == 0 ||
             (fVar12 = (float)(int)*(short *)(iVar9 + 0x2b0) + *(float *)(iVar9 + 0x50),
             fVar2 < fVar12)) ||
            ((fVar12 + (float)(int)*(short *)(iVar9 + 0x2ac) <= fVar2 ||
             ((fVar12 = (float)(int)*(short *)(iVar9 + 0x2b2) + *(float *)(iVar9 + 0x54),
              fVar3 < fVar12 || (fVar12 + (float)(int)*(short *)(iVar9 + 0x2ae) <= fVar3)))))))) {
          if (param_2 != '\0') break;
          if (iVar8 == 0) {
            iVar8 = iVar9;
          }
          if (((local_28 == 0) && (local_28 = iVar9, *(int *)(iVar6 + 0x14dc) != 0)) &&
             (*(int *)(iVar9 + 0x3b0) == *(int *)(*(int *)(iVar6 + 0x14dc) + 0x3b0))) {
            local_28 = 0;
          }
          else {
            iVar9 = iVar8;
            if (iVar8 != 0) break;
            iVar8 = 0;
          }
        }
      }
      uVar7 = uVar7 - 1;
      iVar9 = iVar8;
    } while (1 < uVar7);
  }
  *param_3 = iVar9;
  if (param_4 != (int *)0x0) {
    *param_4 = local_28;
  }
  if ((param_2 == '\0') && (*(int *)(iVar6 + 0x14dc) != 0)) {
    *(undefined4 *)(*(int *)(iVar6 + 0x14dc) + 0x3c) = uVar10;
  }
  return;
}

