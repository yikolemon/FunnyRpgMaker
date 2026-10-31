/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014b266 */

void __thiscall FUN_1014b266(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  if (*param_2 != 0) {
    piVar8 = (int *)param_2[2];
    piVar1 = piVar8 + *param_2 * 6;
    do {
      if (*piVar8 == 2) {
        iVar10 = piVar8[2];
        iVar5 = piVar8[4];
        iVar9 = iVar5 - iVar10;
        if ((iVar9 == 0) || (iVar4 = iVar9 + 1, iVar9 + 1 < *param_1 / 100)) {
          if (iVar10 <= iVar5) {
            do {
              iVar5 = piVar8[1];
              uVar6 = (*(code *)param_1[3])(param_1,iVar10);
              FUN_1014b226(uVar6,(char)iVar5);
              bVar3 = iVar10 < piVar8[4];
              iVar10 = iVar10 + 1;
            } while (bVar3);
          }
        }
        else {
          iVar2 = param_1[5];
          if (iVar10 <= iVar5) {
            if (-1 < *(char *)((int)piVar8 + 5)) {
              iVar9 = 0;
            }
            iVar9 = iVar9 + param_1[4];
            do {
              uVar7 = (uint)*(byte *)(piVar8 + 1);
              (*(code *)param_1[3])(param_1,iVar10,piVar8,uVar7);
              FUN_1014b44d(uVar7,iVar2,iVar9);
              iVar9 = *(char *)((int)piVar8 + 5) + iVar9;
              bVar3 = iVar10 < piVar8[4];
              iVar10 = iVar10 + 1;
            } while (bVar3);
          }
          if ((char)piVar8[1] != '\0') {
            param_1[4] = param_1[4] + iVar4;
          }
          FUN_1014b547(iVar2);
        }
      }
      else if ((*piVar8 == 1) && (FUN_1014b0b0(), (char)piVar8[1] == '\x01')) {
        iVar10 = param_2[9];
        if (param_1[6] < iVar10) {
          iVar5 = FUN_100fa1fa(iVar10 * 8);
          if (param_1[7] != 0) {
            FUN_1025b2d0(iVar5,param_1[7],param_1[5] << 3);
            FUN_100fa2cb(param_1[7]);
          }
          param_1[7] = iVar5;
          param_1[6] = iVar10;
          iVar10 = param_2[9];
        }
        iVar5 = param_1[5];
        if (0 < iVar10) {
          iVar10 = param_1[4];
          iVar9 = 0;
          do {
            iVar4 = piVar8[1];
            (*(code *)param_1[3])(param_1,iVar9);
            FUN_1014b44d((char)iVar4,iVar5,iVar10);
            iVar9 = iVar9 + 1;
            iVar10 = param_1[4] + 1;
            param_1[4] = iVar10;
          } while (iVar9 < param_2[9]);
        }
        FUN_1014b547(iVar5);
      }
      piVar8 = piVar8 + 6;
    } while (piVar8 != piVar1);
  }
  return;
}

