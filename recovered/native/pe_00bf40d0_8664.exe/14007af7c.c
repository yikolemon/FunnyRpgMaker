/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007af7c */

void FUN_14007af7c(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 (*pauVar5) [32];
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  
  uVar9 = param_1[1];
  uVar1 = param_1[0x1a];
  uVar13 = 0x100;
  if ((uVar1 & 2) == 0) {
    uVar13 = 0x80000000;
  }
  if ((int)uVar9 < (int)param_1[3]) {
    do {
      piVar12 = *(int **)(*(longlong *)(param_1 + 0xe) +
                         ((longlong)(int)uVar9 - (longlong)(int)param_1[1]) * 8);
      if (piVar12 != *(int **)(param_1 + 8)) {
        lVar10 = *(longlong *)(param_1 + 0x1c) - (longlong)(int)param_1[0x1e] * (longlong)(int)uVar9
        ;
        uVar6 = (ulonglong)*param_1;
        iVar3 = 0;
        do {
          if (iVar3 != 0) {
            iVar4 = (int)uVar6;
            iVar2 = *piVar12 - iVar4;
            if (iVar2 != 0 && iVar4 <= *piVar12) {
              uVar11 = -(uint)((iVar3 >> 9 & uVar13) != 0) ^ iVar3 >> 9;
              uVar8 = uVar11;
              if ((uVar1 & 2) == 0) {
                uVar8 = 0xff;
              }
              if ((int)uVar11 < 0x100) {
                uVar8 = uVar11;
              }
              pauVar5 = (undefined1 (*) [32])(iVar4 + lVar10);
              bVar7 = (byte)uVar8;
              switch(iVar2) {
              case 0:
                break;
              case 7:
                (*pauVar5)[0] = bVar7;
                pauVar5 = (undefined1 (*) [32])(*pauVar5 + 1);
              case 6:
                (*pauVar5)[0] = bVar7;
                pauVar5 = (undefined1 (*) [32])(*pauVar5 + 1);
              case 5:
                (*pauVar5)[0] = bVar7;
                pauVar5 = (undefined1 (*) [32])(*pauVar5 + 1);
              case 4:
                (*pauVar5)[0] = bVar7;
                pauVar5 = (undefined1 (*) [32])(*pauVar5 + 1);
              case 3:
                (*pauVar5)[0] = bVar7;
                pauVar5 = (undefined1 (*) [32])(*pauVar5 + 1);
              case 2:
                (*pauVar5)[0] = bVar7;
                pauVar5 = (undefined1 (*) [32])(*pauVar5 + 1);
              case 1:
                (*pauVar5)[0] = bVar7;
                break;
              default:
                FUN_1400b3c00(pauVar5,bVar7,(longlong)iVar2);
              }
            }
          }
          iVar2 = *piVar12;
          iVar3 = piVar12[1] * 0x200 + iVar3;
          if ((iVar3 - piVar12[2] != 0) && ((int)*param_1 <= iVar2)) {
            uVar11 = iVar3 - piVar12[2] >> 9;
            uVar11 = -(uint)((uVar11 & uVar13) != 0) ^ uVar11;
            uVar8 = (uint)(byte)(-((uVar1 & 2) == 0) | (byte)uVar11);
            if ((int)uVar11 < 0x100) {
              uVar8 = uVar11;
            }
            *(char *)(lVar10 + iVar2) = (char)uVar8;
            iVar2 = *piVar12;
          }
          uVar6 = (longlong)iVar2 + 1;
          piVar12 = *(int **)(piVar12 + 4);
        } while (piVar12 != *(int **)(param_1 + 8));
        if (iVar3 != 0) {
          uVar11 = -(uint)((iVar3 >> 9 & uVar13) != 0) ^ iVar3 >> 9;
          uVar8 = uVar11;
          if ((uVar1 & 2) == 0) {
            uVar8 = 0xff;
          }
          if ((int)uVar11 < 0x100) {
            uVar8 = uVar11;
          }
          pauVar5 = (undefined1 (*) [32])(lVar10 + (int)uVar6);
          bVar7 = (byte)uVar8;
          switch((longlong)(int)param_1[2] - uVar6 & 0xffffffff) {
          case 0:
            break;
          case 7:
            (*pauVar5)[0] = bVar7;
            pauVar5 = (undefined1 (*) [32])(*pauVar5 + 1);
          case 6:
            (*pauVar5)[0] = bVar7;
            pauVar5 = (undefined1 (*) [32])(*pauVar5 + 1);
          case 5:
            (*pauVar5)[0] = bVar7;
            pauVar5 = (undefined1 (*) [32])(*pauVar5 + 1);
          case 4:
            (*pauVar5)[0] = bVar7;
            pauVar5 = (undefined1 (*) [32])(*pauVar5 + 1);
          case 3:
            (*pauVar5)[0] = bVar7;
            pauVar5 = (undefined1 (*) [32])(*pauVar5 + 1);
          case 2:
            (*pauVar5)[0] = bVar7;
            pauVar5 = (undefined1 (*) [32])(*pauVar5 + 1);
          case 1:
            (*pauVar5)[0] = bVar7;
            break;
          default:
            FUN_1400b3c00(pauVar5,bVar7,(longlong)(int)param_1[2] - uVar6);
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)param_1[3]);
  }
  return;
}

