/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016ec40 */

void FUN_14016ec40(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  piVar6 = param_1 + 0x102;
  piVar2 = param_1 + 0x183;
  if (param_7 == 0) {
    piVar6 = param_1;
    piVar2 = param_1 + 0x81;
  }
  *piVar6 = 0;
  *piVar2 = 0;
  FUN_14016edf1(0,param_2,param_3,piVar6,piVar2);
  FUN_14016edf1(1,param_4,param_5,piVar6,piVar2);
  iVar3 = *piVar6;
  iVar1 = *piVar2;
  if (iVar3 != 0) {
    piVar4 = piVar6 + 1;
    iVar8 = iVar3;
    do {
      if (iVar8 == 1) {
        iVar9 = *piVar4;
        iVar11 = piVar4[1];
      }
      else {
        if (iVar8 == 0) break;
        iVar9 = *piVar4;
        iVar11 = piVar4[1];
        iVar10 = piVar4[8] - iVar9;
        if (iVar10 < iVar11) {
          piVar4[1] = iVar10;
          iVar11 = iVar10;
        }
      }
      piVar4[3] = iVar9;
      piVar4[2] = iVar11 + iVar9;
      iVar8 = iVar8 + -1;
      piVar4 = piVar4 + 8;
    } while( true );
  }
  if (iVar1 != 0) {
    piVar4 = piVar2 + 1;
    iVar8 = iVar1;
    do {
      if (iVar8 == 1) {
        iVar9 = *piVar4;
        iVar11 = piVar4[1];
      }
      else {
        if (iVar8 == 0) break;
        iVar9 = *piVar4;
        iVar11 = piVar4[1];
        iVar10 = iVar9 - piVar4[8];
        if (iVar11 < iVar10) {
          piVar4[1] = iVar10;
          iVar11 = iVar10;
        }
      }
      piVar4[2] = iVar9;
      piVar4[3] = iVar11 + iVar9;
      iVar8 = iVar8 + -1;
      piVar4 = piVar4 + 8;
    } while( true );
  }
  iVar8 = 1;
  do {
    if (iVar3 != 0) {
      piVar6[4] = piVar6[4] - param_6;
      iVar9 = piVar6[3];
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        piVar6 = piVar6 + 1;
      }
      else {
        piVar4 = piVar6 + 0xc;
        iVar11 = iVar9;
        do {
          piVar6 = piVar4;
          iVar9 = piVar6[-1];
          iVar5 = (*piVar6 - iVar11) / 2;
          iVar7 = iVar5 + iVar11;
          iVar11 = iVar11 + param_6;
          iVar10 = *piVar6 - param_6;
          if (iVar5 < param_6) {
            iVar11 = iVar7;
            iVar10 = iVar7;
          }
          *piVar6 = iVar10;
          piVar6[-9] = iVar11;
          iVar3 = iVar3 + -1;
          piVar4 = piVar6 + 8;
          iVar11 = iVar9;
        } while (iVar3 != 0);
        piVar6 = piVar6 + -3;
      }
      piVar6[2] = iVar9 + param_6;
    }
    bVar12 = iVar8 != 0;
    iVar8 = iVar8 + -1;
    piVar6 = piVar2;
    iVar3 = iVar1;
  } while (bVar12);
  return;
}

