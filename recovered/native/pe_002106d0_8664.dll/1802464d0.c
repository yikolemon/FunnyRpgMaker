/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802464d0 */

void FUN_1802464d0(byte *param_1,longlong param_2,int *param_3)

{
  char *pcVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  byte *pbVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  byte bVar11;
  ulonglong uVar12;
  byte unaff_R14B;
  
  pbVar9 = param_1;
  if (((longlong)*param_3 & 4U) != 0) {
    pbVar9 = (byte *)((ulonglong)(param_1 + param_3[1]) & (longlong)-param_3[2]);
  }
  pbVar8 = (byte *)(*(longlong *)(param_2 + 8) +
                   (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8));
  bVar2 = pbVar8[3];
  if ((*pbVar8 & 7) < 3) {
    if ((bVar2 & 0xf) != 0) {
LAB_180246641:
      uVar12 = (ulonglong)bVar2 & 0xfffffffffffffff0;
      goto LAB_180246645;
    }
  }
  else {
    uVar10 = bVar2 & 0x1f;
    if ((bVar2 & 0x1f) != 0) {
      if ((*pbVar8 & 0x40) == 0) {
        lVar6 = (ulonglong)uVar10 + 4;
      }
      else {
        lVar6 = (ulonglong)uVar10 * 2 + 5;
      }
      pbVar8 = pbVar8 + lVar6;
      uVar12 = 0;
      uVar7 = uVar12;
      pbVar5 = pbVar8;
      if (bVar2 >> 5 != 0) {
        do {
          pbVar8 = pbVar5 + 3;
          uVar4 = (uint)(*pbVar5 >> 3);
          if (uVar4 != 0) {
            if ((*pbVar5 & 2) == 0) {
              pbVar8 = pbVar5 + (ulonglong)uVar4 + 6;
            }
            else {
              pbVar8 = pbVar8 + (ulonglong)uVar4 * 2 + 4;
            }
          }
          uVar4 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar4;
          pbVar5 = pbVar8;
        } while (uVar4 < bVar2 >> 5);
      }
      uVar7 = uVar12;
      if ((bVar2 & 0x1f) != 0) {
        do {
          bVar2 = *pbVar8;
          bVar11 = bVar2;
          if (((bVar2 < 4) || (bVar11 = bVar2 & 0xf, (byte)(bVar11 - 8) < 3)) ||
             (bVar11 = bVar2 & 7, (byte)(bVar11 - 4) < 4)) {
            if (bVar11 == 0) {
              bVar2 = pbVar8[1];
              goto LAB_180246641;
            }
            if (0x20 < bVar11) goto switchD_18024660f_caseD_4;
          }
          else {
            if ((bVar2 & 0x3f) != 0x20) goto switchD_18024660f_caseD_4;
            bVar11 = 0x20;
          }
          pbVar5 = (byte *)(ulonglong)*(byte *)((longlong)&UINT_180246688 + (ulonglong)bVar11);
          uVar4 = (&switchD_18024660f::switchdataD_180246674)[(longlong)pbVar5];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(byte *)((longlong)&UINT_180246688 + (ulonglong)bVar11)) {
          case 0:
            lVar6 = 2;
            break;
          case 1:
            lVar6 = 5;
            break;
          case 2:
            lVar6 = 3;
            break;
          case 3:
            lVar6 = 1;
            break;
          case 4:
switchD_18024660f_caseD_4:
            FUN_1802464c0();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          case 5:
            pcVar1 = (char *)((ulonglong)uVar4 + 0x171284408);
            *pcVar1 = *pcVar1 + (char)((ulonglong)pbVar8 >> 8);
            *pbVar5 = (byte)(0xff >> ((byte)uVar4 & 0x1f)) & *pbVar9 |
                      (*pbVar5 >> (unaff_R14B & 0x1f)) << (unaff_R14B & 0x1f);
            return;
          }
          pbVar8 = pbVar8 + lVar6;
          uVar4 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar4;
        } while (uVar4 < uVar10);
      }
      goto LAB_180246645;
    }
  }
  uVar12 = 0;
LAB_180246645:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0((ulonglong)(param_1 + uVar12) ^
                *(ulonglong *)(pbVar9 + ((longlong)*param_3 & 0xfffffffffffffff8)));
}

