/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044c427 */

int __fastcall FUN_0044c427(int param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  uint *puVar12;
  
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(byte **)(param_1 + 4) = param_2;
  *(byte **)(param_1 + 8) = param_3;
  *(byte **)(param_1 + 0xc) = param_2;
  do {
    if (param_3 <= param_2) {
      return 0;
    }
    bVar1 = *param_2;
    uVar9 = (uint)bVar1;
    puVar8 = *(undefined4 **)(param_1 + 0x10);
    puVar3 = *(undefined4 **)(param_1 + 0x14);
    uVar10 = (int)puVar3 - (int)puVar8 >> 2;
    if ((byte)(bVar1 - 0x1b) < 0xe4 && uVar9 != 0x1f) {
      if (*(uint *)(param_1 + 0x18) <= uVar10) {
        return 6;
      }
      *(undefined4 **)(param_1 + 0x14) = puVar3 + 1;
      *puVar3 = param_2;
      if (uVar9 == 0x1c) {
        param_2 = param_2 + 2;
      }
      else if (uVar9 == 0x1d) {
        param_2 = param_2 + 4;
      }
      else if (uVar9 == 0x1e) {
        do {
          param_2 = param_2 + 1;
          if (param_3 <= param_2) {
            return 0;
          }
        } while (((~*param_2 & 0xf0) != 0) && ((*param_2 & 0xf) != 0xf));
      }
      else {
        param_2 = param_2 + (0xf6 < bVar1);
      }
    }
    else {
      if (*(uint *)(param_1 + 0x18) <= uVar10) {
        return 6;
      }
      *puVar3 = param_2;
      if (uVar9 == 0xc) {
        param_2 = param_2 + 1;
        if (param_3 <= param_2) {
          return 6;
        }
        uVar9 = *param_2 | 0x100;
      }
      uVar9 = uVar9 | *(uint *)(param_1 + 0x1c);
      if (uVar9 == 0x1000) {
        puVar7 = &DAT_004e3f08;
        iVar4 = 4;
      }
      else {
        puVar11 = &DAT_004e3f08;
        do {
          iVar4 = *(int *)(puVar11 + 0x1c);
          if (iVar4 == 0) goto LAB_0044c6ab;
          puVar7 = puVar11 + 0x1c;
          puVar12 = (uint *)(puVar11 + 0x20);
          puVar11 = puVar7;
        } while (*puVar12 != uVar9);
      }
      iVar6 = *(int *)(param_1 + 0x20);
      puVar12 = (uint *)(*(int *)(puVar7 + 8) + iVar6);
      if (iVar4 == 6) {
switchD_0044c5ed_caseD_6:
        puVar8 = *(undefined4 **)(param_1 + 0x10);
        uVar9 = *(uint *)(puVar7 + 0x14);
        if (uVar10 < *(uint *)(puVar7 + 0x14)) {
          uVar9 = uVar10;
        }
        *(char *)(iVar6 + *(int *)(puVar7 + 0x18)) = (char)uVar9;
        if (uVar9 != 0) {
          uVar10 = 0;
          do {
            uVar5 = FUN_0044c708(param_1,puVar8);
            uVar10 = uVar5 + uVar10;
            uVar5 = (uint)(byte)puVar7[0xc];
            if (uVar5 == 4) {
              *puVar12 = uVar10;
            }
            else if (uVar5 == 2) {
              *(short *)puVar12 = (short)uVar10;
            }
            else if (uVar5 == 1) {
              *(char *)puVar12 = (char)uVar10;
            }
            else {
              *puVar12 = uVar10;
            }
            puVar8 = puVar8 + 1;
            puVar12 = (uint *)((int)puVar12 + uVar5);
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
LAB_0044c5a5:
          if (iVar4 == 9) goto LAB_0044c6bc;
        }
      }
      else {
        if (puVar3 == puVar8 && iVar4 != 7) {
          return 6;
        }
        switch(iVar4) {
        case 1:
        case 4:
        case 5:
          uVar9 = FUN_0044c708(param_1,*(undefined4 **)(param_1 + 0x10));
          break;
        case 2:
          uVar9 = FUN_0044c757(param_1,*(undefined4 **)(param_1 + 0x10));
          break;
        case 3:
          uVar9 = FUN_0044c762(param_1,*(undefined4 **)(param_1 + 0x10));
          break;
        case 6:
          goto switchD_0044c5ed_caseD_6;
        case 7:
          puVar8 = *(undefined4 **)(param_1 + 0x10);
          uVar9 = *(uint *)(puVar7 + 0x14);
          if (uVar10 < *(uint *)(puVar7 + 0x14)) {
            uVar9 = uVar10;
          }
          *(char *)(iVar6 + *(int *)(puVar7 + 0x18)) = (char)uVar9;
          if (uVar9 != 0) {
            uVar10 = 0;
            do {
              iVar4 = FUN_0044c757(param_1,puVar8);
              uVar10 = uVar10 + iVar4;
              *puVar12 = uVar10;
              puVar12 = (uint *)((uint)(byte)puVar7[0xc] + (int)puVar12);
              uVar9 = uVar9 - 1;
              puVar8 = puVar8 + 1;
            } while (uVar9 != 0);
          }
          goto LAB_0044c6ab;
        default:
          iVar6 = (**(code **)(puVar7 + 0x10))(param_1);
          if (iVar6 != 0) {
            return iVar6;
          }
          goto LAB_0044c5a5;
        }
        cVar2 = puVar7[0xc];
        if (cVar2 == '\x04') {
LAB_0044c6a4:
          *puVar12 = uVar9;
        }
        else if (cVar2 == '\x02') {
          *(short *)puVar12 = (short)uVar9;
        }
        else {
          if (cVar2 != '\x01') goto LAB_0044c6a4;
          *(char *)puVar12 = (char)uVar9;
        }
      }
LAB_0044c6ab:
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
    }
LAB_0044c6bc:
    param_2 = param_2 + 1;
  } while( true );
}

