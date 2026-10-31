/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018e600 */

void FUN_14018e600(ulonglong param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  uint uVar9;
  byte bVar10;
  ulonglong uVar11;
  
  uVar8 = param_1;
  if (((longlong)*param_3 & 4U) != 0) {
    uVar8 = (longlong)param_3[1] + param_1 & (longlong)-param_3[2];
  }
  pbVar6 = (byte *)(*(longlong *)(param_2 + 8) +
                   (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8));
  bVar1 = pbVar6[3];
  if ((*pbVar6 & 7) < 3) {
    if ((bVar1 & 0xf) != 0) {
LAB_14018e771:
      uVar11 = (ulonglong)bVar1 & 0xfffffffffffffff0;
      goto LAB_14018e775;
    }
  }
  else {
    uVar9 = bVar1 & 0x1f;
    if ((bVar1 & 0x1f) != 0) {
      if ((*pbVar6 & 0x40) == 0) {
        lVar4 = (ulonglong)uVar9 + 4;
      }
      else {
        lVar4 = (ulonglong)uVar9 * 2 + 5;
      }
      pbVar6 = pbVar6 + lVar4;
      uVar11 = 0;
      uVar5 = uVar11;
      pbVar7 = pbVar6;
      if (bVar1 >> 5 != 0) {
        do {
          pbVar6 = pbVar7 + 3;
          uVar3 = (uint)(*pbVar7 >> 3);
          if (uVar3 != 0) {
            if ((*pbVar7 & 2) == 0) {
              pbVar6 = pbVar7 + (ulonglong)uVar3 + 6;
            }
            else {
              pbVar6 = pbVar6 + (ulonglong)uVar3 * 2 + 4;
            }
          }
          uVar3 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar3;
          pbVar7 = pbVar6;
        } while (uVar3 < bVar1 >> 5);
      }
      uVar5 = uVar11;
      if ((bVar1 & 0x1f) != 0) {
        do {
          bVar1 = *pbVar6;
          bVar10 = bVar1;
          if (((bVar1 < 4) || (bVar10 = bVar1 & 0xf, (byte)(bVar10 - 8) < 3)) ||
             (bVar10 = bVar1 & 7, (byte)(bVar10 - 4) < 4)) {
            if (bVar10 == 0) {
              bVar1 = pbVar6[1];
              goto LAB_14018e771;
            }
            if (0x20 < bVar10) goto switchD_14018e73f_caseD_4;
          }
          else {
            if ((bVar1 & 0x3f) != 0x20) goto switchD_14018e73f_caseD_4;
            bVar10 = 0x20;
          }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)((longlong)&UINT_14018e7b8 + (ulonglong)bVar10)) {
          case 0:
            lVar4 = 2;
            break;
          case 1:
            lVar4 = 5;
            break;
          case 2:
            lVar4 = 3;
            break;
          case 3:
            lVar4 = 1;
            break;
          case 4:
switchD_14018e73f_caseD_4:
            FUN_14018e0b0();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          case 5:
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pbVar6 = pbVar6 + lVar4;
          uVar3 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar3;
        } while (uVar3 < uVar9);
      }
      goto LAB_14018e775;
    }
  }
  uVar11 = 0;
LAB_14018e775:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(uVar11 + param_1 ^
                *(ulonglong *)(((longlong)*param_3 & 0xfffffffffffffff8U) + uVar8));
}

