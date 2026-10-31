/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a6d42 */

void FUN_1400a6d42(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_58 [32];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  ulonglong local_20;
  
  lVar5 = DAT_140f2a910;
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  if ((*(uint *)(DAT_140f2a910 + 0x30) & 2) == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = *(byte *)(DAT_140f2a910 + 0x34) & 1;
  }
  if ((((*(uint *)(DAT_140f2a910 + 0x30) & 1) == 0) ||
      (cVar6 = FUN_140091ea2(0x20e,0,0xffffffff), cVar6 == '\0')) &&
     ((bVar7 == 0 ||
      (cVar6 = FUN_140091ea2((uint)*(byte *)(lVar5 + 0x79) * 2 + 0x27b,0,0xffffffff), cVar6 == '\0')
      ))) goto LAB_1400a6f65;
  if ((*(byte *)(lVar5 + 0x2acc) & 0x10) != 0) {
    FUN_1400772a6("[nav] NavUpdateCancelRequest()\n");
  }
  if (*(int *)(lVar5 + 0x167c) != 0) {
    if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
      FUN_14008076e();
      return;
    }
    goto LAB_1400a6f81;
  }
  if (*(int *)(lVar5 + 0x220c) == 0) {
    lVar2 = *(longlong *)(lVar5 + 0x2200);
    if ((((lVar2 == 0) || (lVar2 == *(longlong *)(lVar2 + 0x418))) ||
        (lVar3 = *(longlong *)(lVar2 + 0x438), (*(byte *)(lVar3 + 0x17) & 4) != 0)) ||
       (lVar4 = *(longlong *)(lVar3 + 0x408), lVar4 == 0)) {
      iVar1 = *(int *)(lVar5 + 0x2148);
      if (((0 < (longlong)iVar1) &&
          (lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x2150) + -0x30 + (longlong)iVar1 * 0x38),
          lVar3 != 0)) && ((*(byte *)(lVar3 + 0x17) & 8) == 0)) {
        if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
          FUN_140094394(iVar1 + -1,1);
          return;
        }
        goto LAB_1400a6f81;
      }
      cVar6 = *(char *)(lVar5 + 0x7c);
      if (cVar6 == '\0') {
        if ((lVar2 != 0) && (*(char *)(lVar5 + 0x7d) != '\0')) goto LAB_1400a6f07;
LAB_1400a6f31:
        if (*(char *)(lVar5 + 0x7d) == '\x01') {
          *(undefined4 *)(lVar5 + 0x21f8) = 0;
          goto LAB_1400a6f41;
        }
      }
      else {
        if (lVar2 != 0) {
LAB_1400a6f07:
          if ((*(byte *)(lVar2 + 0x17) & 4) != 0) {
            *(undefined4 *)(lVar2 + 0x450) = 0;
            cVar6 = *(char *)(lVar5 + 0x7c);
          }
          if (cVar6 == '\0') goto LAB_1400a6f31;
        }
        *(undefined4 *)(lVar5 + 0x21f8) = 0;
        if (*(char *)(lVar5 + 0x7d) == '\x01') {
LAB_1400a6f41:
          if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
            FUN_140081404(0,0);
            return;
          }
          goto LAB_1400a6f81;
        }
      }
LAB_1400a6f65:
      if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
        return;
      }
      goto LAB_1400a6f81;
    }
    FUN_140081404(lVar4,0);
    fVar8 = (float)*(undefined8 *)(lVar3 + 0x60);
    fVar9 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x60) >> 0x20);
    fStack_30 = (float)*(undefined8 *)(lVar4 + 0x168);
    local_38 = fVar8 - fStack_30;
    fStack_2c = (float)((ulonglong)*(undefined8 *)(lVar4 + 0x168) >> 0x20);
    fStack_34 = fVar9 - fStack_2c;
    fStack_30 = ((float)*(undefined8 *)(lVar3 + 0x68) + fVar8) - fStack_30;
    fStack_2c = ((float)((ulonglong)*(undefined8 *)(lVar3 + 0x68) >> 0x20) + fVar9) - fStack_2c;
    FUN_1400952ab(*(undefined4 *)(lVar3 + 0xcc),0,0);
  }
  else {
    FUN_1400a79ac(0);
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
    FUN_140095213();
    return;
  }
LAB_1400a6f81:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
}

