/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f4caf */

int __fastcall FUN_101f4caf(int param_1,byte *param_2,byte *param_3)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  int *piVar13;
  int iVar14;
  
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(byte **)(param_1 + 4) = param_2;
  *(byte **)(param_1 + 8) = param_3;
  *(byte **)(param_1 + 0xc) = param_2;
  iVar14 = param_1;
  do {
    if (param_3 <= param_2) {
      return 0;
    }
    bVar2 = *param_2;
    uVar10 = (uint)bVar2;
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    puVar5 = *(undefined4 **)(param_1 + 0x14);
    uVar11 = (int)puVar5 - (int)puVar4 >> 2;
    if ((byte)(bVar2 - 0x1b) < 0xe4 && uVar10 != 0x1f) {
      if (*(uint *)(param_1 + 0x18) <= uVar11) {
        return 6;
      }
      *(undefined4 **)(param_1 + 0x14) = puVar5 + 1;
      *puVar5 = param_2;
      if (uVar10 == 0x1c) {
        param_2 = param_2 + 2;
      }
      else if (uVar10 == 0x1d) {
        param_2 = param_2 + 4;
      }
      else if (uVar10 == 0x1e) {
        do {
          param_2 = param_2 + 1;
          if (param_3 <= param_2) {
            return 0;
          }
        } while (((~*param_2 & 0xf0) != 0) && ((*param_2 & 0xf) != 0xf));
      }
      else {
        param_2 = param_2 + (0xf6 < bVar2);
      }
    }
    else {
      if (*(uint *)(param_1 + 0x18) <= uVar11) {
        return 6;
      }
      *puVar5 = param_2;
      if (uVar10 == 0xc) {
        param_2 = param_2 + 1;
        if (param_3 <= param_2) {
          return 6;
        }
        uVar10 = *param_2 | 0x100;
      }
      uVar10 = uVar10 | *(uint *)(param_1 + 0x1c);
      param_1 = iVar14;
      if (uVar10 == 0x1000) {
        puVar9 = &DAT_1030f968;
        iVar6 = 4;
      }
      else {
        puVar12 = &DAT_1030f968;
        do {
          iVar6 = *(int *)(puVar12 + 0x1c);
          if (iVar6 == 0) goto LAB_101f4f33;
          puVar9 = puVar12 + 0x1c;
          puVar1 = (uint *)(puVar12 + 0x20);
          puVar12 = puVar9;
        } while (*puVar1 != uVar10);
      }
      iVar7 = *(int *)(iVar14 + 0x20);
      piVar13 = (int *)(*(int *)(puVar9 + 8) + iVar7);
      if (iVar6 == 6) {
switchD_101f4e75_caseD_6:
        uVar10 = *(uint *)(puVar9 + 0x14);
        if (uVar11 < *(uint *)(puVar9 + 0x14)) {
          uVar10 = uVar11;
        }
        *(char *)(iVar7 + *(int *)(puVar9 + 0x18)) = (char)uVar10;
        if (uVar10 != 0) {
          iVar7 = 0;
          do {
            iVar8 = FUN_101f4f90();
            iVar7 = iVar8 + iVar7;
            uVar11 = (uint)(byte)puVar9[0xc];
            if (uVar11 == 4) {
              *piVar13 = iVar7;
            }
            else if (uVar11 == 2) {
              *(short *)piVar13 = (short)iVar7;
            }
            else if (uVar11 == 1) {
              *(char *)piVar13 = (char)iVar7;
            }
            else {
              *piVar13 = iVar7;
            }
            piVar13 = (int *)((int)piVar13 + uVar11);
            uVar10 = uVar10 - 1;
            param_1 = iVar14;
          } while (uVar10 != 0);
LAB_101f4e2d:
          iVar14 = param_1;
          if (iVar6 == 9) goto LAB_101f4f44;
        }
      }
      else {
        if (puVar5 == puVar4 && iVar6 != 7) {
          return 6;
        }
        switch(iVar6) {
        case 1:
        case 4:
        case 5:
          iVar6 = FUN_101f4f90();
          break;
        case 2:
          iVar6 = FUN_101f4fdf();
          break;
        case 3:
          iVar6 = FUN_101f4fea();
          break;
        case 6:
          goto switchD_101f4e75_caseD_6;
        case 7:
          iVar6 = *(int *)(iVar14 + 0x10);
          uVar10 = *(uint *)(puVar9 + 0x14);
          if (uVar11 < *(uint *)(puVar9 + 0x14)) {
            uVar10 = uVar11;
          }
          *(char *)(iVar7 + *(int *)(puVar9 + 0x18)) = (char)uVar10;
          if (uVar10 != 0) {
            iVar7 = 0;
            do {
              iVar6 = iVar6 + 4;
              iVar8 = FUN_101f4fdf(iVar14,iVar6);
              iVar7 = iVar7 + iVar8;
              *piVar13 = iVar7;
              piVar13 = (int *)((uint)(byte)puVar9[0xc] + (int)piVar13);
              uVar10 = uVar10 - 1;
              param_1 = iVar14;
            } while (uVar10 != 0);
          }
          goto LAB_101f4f33;
        default:
          iVar7 = (**(code **)(puVar9 + 0x10))(iVar14);
          param_1 = iVar14;
          if (iVar7 != 0) {
            return iVar7;
          }
          goto LAB_101f4e2d;
        }
        cVar3 = puVar9[0xc];
        param_1 = iVar14;
        if (cVar3 == '\x04') {
LAB_101f4f2c:
          *piVar13 = iVar6;
        }
        else if (cVar3 == '\x02') {
          *(short *)piVar13 = (short)iVar6;
        }
        else {
          if (cVar3 != '\x01') goto LAB_101f4f2c;
          *(char *)piVar13 = (char)iVar6;
        }
      }
LAB_101f4f33:
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
      iVar14 = param_1;
    }
LAB_101f4f44:
    param_2 = param_2 + 1;
  } while( true );
}

