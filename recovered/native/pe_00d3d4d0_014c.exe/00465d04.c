/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00465d04 */

void __fastcall FUN_00465d04(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  
  iVar10 = *param_1;
  if (iVar10 != 0) {
    uVar1 = *(uint *)(param_1[6] + 200 + param_2 * 0xcc);
    piVar11 = (int *)(param_1[2] + 0x28);
    do {
      piVar2 = (int *)piVar11[-3];
      if (piVar2 != (int *)0x0) {
        uVar9 = piVar11[-6];
        if ((uVar9 >> 9 & 1) == 0) {
          if ((uVar9 >> 10 & 1) != 0) {
            iVar7 = piVar2[3] + piVar2[2];
            goto LAB_00465ddc;
          }
          uVar4 = piVar11[-2] - *piVar2;
          if (uVar4 == 0 || piVar11[-2] < *piVar2) {
            iVar7 = (int)((longlong)(int)uVar4 * (longlong)(int)uVar1 >> 0x3f);
            lVar3 = (longlong)(int)uVar4 * (longlong)(int)uVar1 + CONCAT44(iVar7,iVar7) + 0x8000;
            *piVar11 = ((int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10) + piVar2[2];
          }
          else {
            uVar8 = piVar2[1];
            iVar7 = piVar2[2];
            if ((int)uVar8 <= (int)uVar4) {
              lVar3 = (ulonglong)(uVar4 - uVar8) * (ulonglong)uVar1;
              uVar6 = (uint)lVar3;
              iVar5 = (int)((ulonglong)lVar3 >> 0x20) + (uVar4 - uVar8) * ((int)uVar1 >> 0x1f);
              uVar8 = iVar5 >> 0x1f;
              uVar4 = uVar6 + uVar8;
              iVar7 = iVar7 + piVar2[3] +
                      ((uVar8 + iVar5 + (uint)CARRY4(uVar6,uVar8) + (uint)(0xffff7fff < uVar4)) *
                       0x10000 | uVar4 + 0x8000 >> 0x10);
              goto LAB_00465ddc;
            }
            iVar5 = FUN_0041dcda(uVar4,piVar2[3],uVar8);
            *piVar11 = iVar5 + iVar7;
            uVar9 = piVar11[-6];
          }
        }
        else {
          iVar7 = piVar2[2];
LAB_00465ddc:
          *piVar11 = iVar7;
        }
        piVar11[-6] = uVar9 | 0x20;
      }
      piVar11 = piVar11 + 0xb;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}

