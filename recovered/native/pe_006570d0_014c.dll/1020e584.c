/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020e584 */

void __fastcall FUN_1020e584(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  
  iVar11 = *param_1;
  if (iVar11 != 0) {
    uVar1 = *(uint *)(param_1[6] + 200 + param_2 * 0xcc);
    piVar12 = (int *)(param_1[2] + 0x28);
    do {
      piVar2 = (int *)piVar12[-3];
      if (piVar2 != (int *)0x0) {
        uVar10 = piVar12[-6];
        if ((uVar10 >> 9 & 1) == 0) {
          if ((uVar10 >> 10 & 1) != 0) {
            iVar5 = piVar2[3] + piVar2[2];
            goto LAB_1020e65c;
          }
          iVar5 = piVar12[-2] - *piVar2;
          if (iVar5 == 0 || piVar12[-2] < *piVar2) {
            iVar8 = (int)((longlong)iVar5 * (longlong)(int)uVar1 >> 0x3f);
            lVar4 = (longlong)iVar5 * (longlong)(int)uVar1 + CONCAT44(iVar8,iVar8) + 0x8000;
            *piVar12 = ((int)((ulonglong)lVar4 >> 0x20) << 0x10 | (uint)lVar4 >> 0x10) + piVar2[2];
          }
          else {
            iVar8 = piVar2[1];
            iVar3 = piVar2[2];
            if (iVar8 <= iVar5) {
              lVar4 = (ulonglong)(uint)(iVar5 - iVar8) * (ulonglong)uVar1;
              uVar6 = (uint)lVar4;
              iVar5 = (int)((ulonglong)lVar4 >> 0x20) + (iVar5 - iVar8) * ((int)uVar1 >> 0x1f);
              uVar9 = iVar5 >> 0x1f;
              uVar7 = uVar6 + uVar9;
              iVar5 = iVar3 + piVar2[3] +
                      ((uVar9 + iVar5 + (uint)CARRY4(uVar6,uVar9) + (uint)(0xffff7fff < uVar7)) *
                       0x10000 | uVar7 + 0x8000 >> 0x10);
              goto LAB_1020e65c;
            }
            iVar5 = FUN_101c16ea(iVar5,piVar2[3],iVar8);
            *piVar12 = iVar5 + iVar3;
            uVar10 = piVar12[-6];
          }
        }
        else {
          iVar5 = piVar2[2];
LAB_1020e65c:
          *piVar12 = iVar5;
        }
        piVar12[-6] = uVar10 | 0x20;
      }
      piVar12 = piVar12 + 0xb;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}

