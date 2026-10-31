/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180201988 */

undefined8 FUN_180201988(longlong param_1,byte *param_2,byte *param_3)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  int *piVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  *(byte **)(param_1 + 8) = param_2;
  *(byte **)(param_1 + 0x10) = param_3;
  *(byte **)(param_1 + 0x18) = param_2;
  do {
    if (param_3 <= param_2) {
      return 0;
    }
    bVar2 = *param_2;
    uVar9 = (uint)bVar2;
    puVar4 = *(undefined8 **)(param_1 + 0x28);
    uVar14 = (ulonglong)((longlong)puVar4 - *(longlong *)(param_1 + 0x20)) >> 3;
    uVar13 = (uint)uVar14;
    if ((byte)(bVar2 - 0x1b) < 0xe4 && bVar2 != 0x1f) {
      if (*(uint *)(param_1 + 0x30) <= uVar13) {
        return 6;
      }
      *(undefined8 **)(param_1 + 0x28) = puVar4 + 1;
      *puVar4 = param_2;
      if (bVar2 == 0x1c) {
        param_2 = param_2 + 2;
      }
      else if (bVar2 == 0x1d) {
        param_2 = param_2 + 4;
      }
      else if (bVar2 == 0x1e) {
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
      if (*(uint *)(param_1 + 0x30) <= uVar13) {
        return 6;
      }
      *puVar4 = param_2;
      if (bVar2 == 0xc) {
        param_2 = param_2 + 1;
        if (param_3 <= param_2) {
          return 6;
        }
        uVar9 = *param_2 | 0x100;
      }
      uVar9 = uVar9 | *(uint *)(param_1 + 0x34);
      iVar15 = 4;
      puVar11 = &DAT_1803391d0;
      if (uVar9 != 0x1000) {
        puVar10 = &DAT_1803391d0;
        do {
          iVar15 = *(int *)(puVar10 + 0x20);
          if (iVar15 == 0) goto LAB_180201c1a;
          puVar11 = puVar10 + 0x20;
          puVar1 = (uint *)(puVar10 + 0x24);
          puVar10 = puVar11;
        } while (*puVar1 != uVar9);
      }
      lVar5 = *(longlong *)(param_1 + 0x38);
      piVar12 = (int *)((ulonglong)*(uint *)(puVar11 + 8) + lVar5);
      if (iVar15 == 6) {
switchD_180201b55_caseD_6:
        lVar16 = *(longlong *)(param_1 + 0x20);
        uVar14 = uVar14 & 0xffffffff;
        if (*(uint *)(puVar11 + 0x18) < uVar13) {
          uVar14 = (ulonglong)*(uint *)(puVar11 + 0x18);
        }
        *(char *)(lVar5 + (ulonglong)*(uint *)(puVar11 + 0x1c)) = (char)uVar14;
        if ((int)uVar14 != 0) {
          iVar7 = 0;
          do {
            iVar6 = FUN_180201c8b(param_1,lVar16);
            iVar7 = iVar6 + iVar7;
            bVar2 = puVar11[0xc];
            if (bVar2 == 4) {
LAB_180201b01:
              *piVar12 = iVar7;
            }
            else if (bVar2 == 2) {
              *(short *)piVar12 = (short)iVar7;
            }
            else {
              if (bVar2 != 1) goto LAB_180201b01;
              *(char *)piVar12 = (char)iVar7;
            }
            lVar16 = lVar16 + 8;
            piVar12 = (int *)((longlong)piVar12 + (ulonglong)bVar2);
            uVar9 = (int)uVar14 - 1;
            uVar14 = (ulonglong)uVar9;
          } while (uVar9 != 0);
LAB_180201b18:
          if (iVar15 == 9) goto LAB_180201c27;
        }
      }
      else {
        if (uVar13 == 0 && iVar15 != 7) {
          return 6;
        }
        switch(iVar15) {
        case 1:
        case 4:
        case 5:
          iVar15 = FUN_180201c8b(param_1,*(undefined8 *)(param_1 + 0x20));
          break;
        case 2:
          iVar15 = FUN_180201ce9(param_1,*(undefined8 *)(param_1 + 0x20));
          break;
        case 3:
          iVar15 = FUN_180201cf1(param_1,*(undefined8 *)(param_1 + 0x20));
          break;
        case 6:
          goto switchD_180201b55_caseD_6;
        case 7:
          lVar16 = *(longlong *)(param_1 + 0x20);
          uVar14 = uVar14 & 0xffffffff;
          if (*(uint *)(puVar11 + 0x18) < uVar13) {
            uVar14 = (ulonglong)*(uint *)(puVar11 + 0x18);
          }
          *(char *)(lVar5 + (ulonglong)*(uint *)(puVar11 + 0x1c)) = (char)uVar14;
          if ((int)uVar14 != 0) {
            iVar15 = 0;
            do {
              iVar7 = FUN_180201ce9(param_1,lVar16);
              iVar15 = iVar15 + iVar7;
              *piVar12 = iVar15;
              piVar12 = (int *)((ulonglong)(byte)puVar11[0xc] + (longlong)piVar12);
              uVar9 = (int)uVar14 - 1;
              uVar14 = (ulonglong)uVar9;
              lVar16 = lVar16 + 8;
            } while (uVar9 != 0);
          }
          goto LAB_180201c1a;
        default:
          uVar8 = (**(code **)(puVar11 + 0x10))(param_1);
          if ((int)uVar8 != 0) {
            return uVar8;
          }
          goto LAB_180201b18;
        }
        cVar3 = puVar11[0xc];
        if (cVar3 == '\x04') {
LAB_180201c0f:
          *piVar12 = iVar15;
        }
        else if (cVar3 == '\x02') {
          *(short *)piVar12 = (short)iVar15;
        }
        else {
          if (cVar3 != '\x01') goto LAB_180201c0f;
          *(char *)piVar12 = (char)iVar15;
        }
      }
LAB_180201c1a:
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
    }
LAB_180201c27:
    param_2 = param_2 + 1;
  } while( true );
}

