/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021cc7f */

void __fastcall FUN_1021cc7f(int *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  size_t _Size;
  int iVar9;
  uint uVar10;
  int *piVar11;
  
  iVar7 = param_1[1];
  uVar1 = param_1[0x10];
  uVar8 = 0x100;
  if ((uVar1 & 2) == 0) {
    uVar8 = 0x80000000;
  }
  if (iVar7 < param_1[3]) {
    do {
      piVar11 = *(int **)(param_1[9] + (iVar7 - param_1[1]) * 4);
      if (piVar11 != (int *)param_1[6]) {
        iVar9 = param_1[0x11] - param_1[0x12] * iVar7;
        iVar3 = *param_1;
        iVar5 = 0;
        do {
          if ((iVar5 != 0) && (_Size = *piVar11 - iVar3, _Size != 0 && iVar3 <= *piVar11)) {
            uVar10 = -(uint)((iVar5 >> 9 & uVar8) != 0) ^ iVar5 >> 9;
            uVar6 = uVar10;
            if ((uVar1 & 2) == 0) {
              uVar6 = 0xff;
            }
            if ((int)uVar10 < 0x100) {
              uVar6 = uVar10;
            }
            puVar2 = (undefined1 *)(iVar3 + iVar9);
            uVar4 = (undefined1)uVar6;
            switch(_Size) {
            case 0:
              break;
            case 7:
              *puVar2 = uVar4;
              puVar2 = puVar2 + 1;
            case 6:
              *puVar2 = uVar4;
              puVar2 = puVar2 + 1;
            case 5:
              *puVar2 = uVar4;
              puVar2 = puVar2 + 1;
            case 4:
              *puVar2 = uVar4;
              puVar2 = puVar2 + 1;
            case 3:
              *puVar2 = uVar4;
              puVar2 = puVar2 + 1;
            case 2:
              *puVar2 = uVar4;
              puVar2 = puVar2 + 1;
            case 1:
              *puVar2 = uVar4;
              break;
            default:
              _memset(puVar2,uVar6,_Size);
            }
          }
          iVar3 = *piVar11;
          iVar5 = piVar11[1] * 0x200 + iVar5;
          if ((iVar5 - piVar11[2] != 0) && (*param_1 <= iVar3)) {
            uVar10 = iVar5 - piVar11[2] >> 9;
            uVar10 = -(uint)((uVar10 & uVar8) != 0) ^ uVar10;
            uVar6 = (uint)(byte)(-((uVar1 & 2) == 0) | (byte)uVar10);
            if ((int)uVar10 < 0x100) {
              uVar6 = uVar10;
            }
            *(char *)(iVar9 + iVar3) = (char)uVar6;
            iVar3 = *piVar11;
          }
          iVar3 = iVar3 + 1;
          piVar11 = (int *)piVar11[3];
        } while (piVar11 != (int *)param_1[6]);
        if (iVar5 != 0) {
          uVar10 = -(uint)((iVar5 >> 9 & uVar8) != 0) ^ iVar5 >> 9;
          uVar6 = uVar10;
          if ((uVar1 & 2) == 0) {
            uVar6 = 0xff;
          }
          if ((int)uVar10 < 0x100) {
            uVar6 = uVar10;
          }
          puVar2 = (undefined1 *)(iVar9 + iVar3);
          uVar4 = (undefined1)uVar6;
          switch(param_1[2] - iVar3) {
          case 0:
            break;
          case 7:
            *puVar2 = uVar4;
            puVar2 = puVar2 + 1;
          case 6:
            *puVar2 = uVar4;
            puVar2 = puVar2 + 1;
          case 5:
            *puVar2 = uVar4;
            puVar2 = puVar2 + 1;
          case 4:
            *puVar2 = uVar4;
            puVar2 = puVar2 + 1;
          case 3:
            *puVar2 = uVar4;
            puVar2 = puVar2 + 1;
          case 2:
            *puVar2 = uVar4;
            puVar2 = puVar2 + 1;
          case 1:
            *puVar2 = uVar4;
            break;
          default:
            _memset(puVar2,uVar6,param_1[2] - iVar3);
          }
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_1[3]);
  }
  return;
}

