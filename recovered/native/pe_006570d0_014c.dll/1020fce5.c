/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020fce5 */

void __fastcall FUN_1020fce5(char param_1,uint param_2,short *param_3,int *param_4,int *param_5)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_1c;
  
  local_1c = *param_4;
  iVar10 = *param_5;
  if (1 < param_2) {
    cVar4 = '\x01';
    do {
      piVar7 = param_5;
      iVar5 = iVar10;
      psVar2 = param_3 + 1;
      psVar3 = param_3;
      if (cVar4 == '\0') {
        piVar7 = param_4;
        iVar5 = local_1c;
        psVar2 = param_3;
        psVar3 = param_3 + 1;
      }
      iVar9 = (int)*psVar2;
      iVar11 = *psVar3 - iVar9;
      piVar7 = piVar7 + 1;
      piVar8 = piVar7;
      if (iVar5 != 0) {
        iVar6 = iVar5 * 0x20;
        piVar8 = piVar7 + iVar5 * 8;
        do {
          iVar1 = *piVar7;
          if (iVar1 != iVar9 && iVar9 <= iVar1) {
            FUN_1025b2d0(piVar7 + 8,piVar7,iVar6);
            piVar8 = piVar7;
            break;
          }
          if (iVar1 == iVar9) {
            if (iVar11 < 0) {
              if (piVar7[1] <= iVar11) goto LAB_1020fda9;
            }
            else if (iVar11 <= piVar7[1]) goto LAB_1020fda9;
            piVar7[1] = iVar11;
            goto LAB_1020fda9;
          }
          piVar7 = piVar7 + 8;
          iVar6 = iVar6 + -0x20;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *piVar8 = iVar9;
      piVar8[1] = iVar11;
      if (cVar4 == '\0') {
        local_1c = local_1c + 1;
      }
      else {
        iVar10 = iVar10 + 1;
      }
LAB_1020fda9:
      param_3 = param_3 + 2;
      param_2 = param_2 - 2;
      cVar4 = param_1;
    } while (1 < param_2);
  }
  *param_4 = local_1c;
  *param_5 = iVar10;
  return;
}

