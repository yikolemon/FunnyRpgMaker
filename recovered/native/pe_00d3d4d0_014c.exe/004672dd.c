/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004672dd */

void __fastcall
FUN_004672dd(int param_1,uint param_2,short *param_3,uint param_4,short *param_5,int param_6,
            int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  piVar8 = (int *)(param_1 + 0x60c);
  if (param_7 == 0) {
    piVar8 = (int *)(param_1 + 0x204);
  }
  iVar9 = 0x408;
  if (param_7 == 0) {
    iVar9 = 0;
  }
  *(undefined4 *)(param_1 + iVar9) = 0;
  *piVar8 = 0;
  piVar7 = (int *)(param_1 + iVar9);
  FUN_00467465('\0',param_2,param_3,piVar7,piVar8);
  FUN_00467465('\x01',param_4,param_5,piVar7,piVar8);
  iVar9 = *(int *)(param_1 + iVar9);
  iVar1 = *piVar8;
  if (iVar9 != 0) {
    piVar4 = piVar7 + 1;
    iVar10 = iVar9;
    do {
      if (iVar10 == 1) {
        iVar5 = *piVar4;
        iVar3 = piVar4[1];
      }
      else {
        if (iVar10 == 0) break;
        iVar5 = *piVar4;
        iVar3 = piVar4[1];
        iVar2 = piVar4[8] - iVar5;
        if (iVar2 < iVar3) {
          piVar4[1] = iVar2;
          iVar3 = iVar2;
        }
      }
      piVar4[3] = iVar5;
      piVar4[2] = iVar3 + iVar5;
      iVar10 = iVar10 + -1;
      piVar4 = piVar4 + 8;
    } while( true );
  }
  if (iVar1 != 0) {
    piVar4 = piVar8 + 1;
    iVar10 = iVar1;
    do {
      if (iVar10 == 1) {
        iVar5 = *piVar4;
        iVar3 = piVar4[1];
      }
      else {
        if (iVar10 == 0) break;
        iVar5 = *piVar4;
        iVar3 = piVar4[1];
        iVar2 = iVar5 - piVar4[8];
        if (iVar3 < iVar2) {
          piVar4[1] = iVar2;
          iVar3 = iVar2;
        }
      }
      piVar4[2] = iVar5;
      piVar4[3] = iVar3 + iVar5;
      iVar10 = iVar10 + -1;
      piVar4 = piVar4 + 8;
    } while( true );
  }
  iVar10 = 1;
  do {
    if (iVar9 != 0) {
      piVar7[4] = piVar7[4] - param_6;
      iVar5 = piVar7[3];
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) {
        piVar7 = piVar7 + 1;
      }
      else {
        piVar4 = piVar7 + 0xc;
        do {
          piVar7 = piVar4;
          iVar6 = (*piVar7 - iVar5) / 2;
          iVar3 = iVar6 + iVar5;
          iVar11 = iVar5 + param_6;
          iVar2 = *piVar7 - param_6;
          if (iVar6 < param_6) {
            iVar11 = iVar3;
            iVar2 = iVar3;
          }
          iVar5 = piVar7[-1];
          *piVar7 = iVar2;
          piVar7[-9] = iVar11;
          iVar9 = iVar9 + -1;
          piVar4 = piVar7 + 8;
        } while (iVar9 != 0);
        piVar7 = piVar7 + -3;
      }
      piVar7[2] = iVar5 + param_6;
    }
    bVar12 = iVar10 != 0;
    iVar10 = iVar10 + -1;
    iVar9 = iVar1;
    piVar7 = piVar8;
  } while (bVar12);
  return;
}

