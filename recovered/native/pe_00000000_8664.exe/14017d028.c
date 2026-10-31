/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017d028 */

void FUN_14017d028(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  
  iVar8 = param_1[1];
  uVar1 = param_1[0x1a];
  uVar12 = 0x100;
  if ((uVar1 & 2) == 0) {
    uVar12 = 0x80000000;
  }
  if (iVar8 < param_1[3]) {
    do {
      piVar11 = *(int **)(*(longlong *)(param_1 + 0xe) +
                         ((longlong)iVar8 - (longlong)param_1[1]) * 8);
      if (piVar11 != *(int **)(param_1 + 8)) {
        lVar9 = *(longlong *)(param_1 + 0x1c) - (longlong)param_1[0x1e] * (longlong)iVar8;
        iVar4 = *param_1;
        iVar3 = 0;
        do {
          if ((iVar3 != 0) && (iVar2 = *piVar11 - iVar4, iVar2 != 0 && iVar4 <= *piVar11)) {
            uVar10 = -(uint)((iVar3 >> 9 & uVar12) != 0) ^ iVar3 >> 9;
            uVar7 = uVar10;
            if ((uVar1 & 2) == 0) {
              uVar7 = 0xff;
            }
            if ((int)uVar10 < 0x100) {
              uVar7 = uVar10;
            }
            puVar5 = (undefined1 *)(iVar4 + lVar9);
            uVar6 = (undefined1)uVar7;
            switch(iVar2) {
            case 0:
              break;
            case 7:
              *puVar5 = uVar6;
              puVar5 = puVar5 + 1;
            case 6:
              *puVar5 = uVar6;
              puVar5 = puVar5 + 1;
            case 5:
              *puVar5 = uVar6;
              puVar5 = puVar5 + 1;
            case 4:
              *puVar5 = uVar6;
              puVar5 = puVar5 + 1;
            case 3:
              *puVar5 = uVar6;
              puVar5 = puVar5 + 1;
            case 2:
              *puVar5 = uVar6;
              puVar5 = puVar5 + 1;
            case 1:
              *puVar5 = uVar6;
              break;
            default:
              FUN_1401c5830(puVar5,uVar7,(longlong)iVar2);
            }
          }
          iVar4 = *piVar11;
          iVar3 = piVar11[1] * 0x200 + iVar3;
          if ((iVar3 - piVar11[2] != 0) && (*param_1 <= iVar4)) {
            uVar10 = iVar3 - piVar11[2] >> 9;
            uVar10 = -(uint)((uVar10 & uVar12) != 0) ^ uVar10;
            uVar7 = (uint)(byte)(-((uVar1 & 2) == 0) | (byte)uVar10);
            if ((int)uVar10 < 0x100) {
              uVar7 = uVar10;
            }
            *(char *)(lVar9 + iVar4) = (char)uVar7;
            iVar4 = *piVar11;
          }
          iVar4 = iVar4 + 1;
          piVar11 = *(int **)(piVar11 + 4);
        } while (piVar11 != *(int **)(param_1 + 8));
        if (iVar3 != 0) {
          uVar10 = -(uint)((iVar3 >> 9 & uVar12) != 0) ^ iVar3 >> 9;
          uVar7 = uVar10;
          if ((uVar1 & 2) == 0) {
            uVar7 = 0xff;
          }
          if ((int)uVar10 < 0x100) {
            uVar7 = uVar10;
          }
          puVar5 = (undefined1 *)(lVar9 + iVar4);
          uVar6 = (undefined1)uVar7;
          switch(param_1[2] - iVar4) {
          case 0:
            break;
          case 7:
            *puVar5 = uVar6;
            puVar5 = puVar5 + 1;
          case 6:
            *puVar5 = uVar6;
            puVar5 = puVar5 + 1;
          case 5:
            *puVar5 = uVar6;
            puVar5 = puVar5 + 1;
          case 4:
            *puVar5 = uVar6;
            puVar5 = puVar5 + 1;
          case 3:
            *puVar5 = uVar6;
            puVar5 = puVar5 + 1;
          case 2:
            *puVar5 = uVar6;
            puVar5 = puVar5 + 1;
          case 1:
            *puVar5 = uVar6;
            break;
          default:
            FUN_1401c5830(puVar5);
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_1[3]);
  }
  return;
}

