/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004efc4 */

undefined8 FUN_14004efc4(longlong param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  uint *puVar11;
  ulonglong uVar12;
  
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  *(byte **)(param_1 + 8) = param_2;
  *(byte **)(param_1 + 0x10) = param_3;
  *(byte **)(param_1 + 0x18) = param_2;
  do {
    if (param_3 <= param_2) {
      return 0;
    }
    bVar1 = *param_2;
    uVar7 = (uint)bVar1;
    puVar9 = *(undefined8 **)(param_1 + 0x28);
    uVar12 = (ulonglong)((longlong)puVar9 - *(longlong *)(param_1 + 0x20)) >> 3;
    uVar4 = (uint)uVar12;
    if ((byte)(bVar1 - 0x1b) < 0xe4 && bVar1 != 0x1f) {
      if (*(uint *)(param_1 + 0x30) <= uVar4) {
        return 6;
      }
      *(undefined8 **)(param_1 + 0x28) = puVar9 + 1;
      *puVar9 = param_2;
      if (bVar1 == 0x1c) {
        param_2 = param_2 + 2;
      }
      else if (bVar1 == 0x1d) {
        param_2 = param_2 + 4;
      }
      else if (bVar1 == 0x1e) {
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
      if (*(uint *)(param_1 + 0x30) <= uVar4) {
        return 6;
      }
      *puVar9 = param_2;
      if (bVar1 == 0xc) {
        param_2 = param_2 + 1;
        if (param_3 <= param_2) {
          return 6;
        }
        uVar7 = *param_2 | 0x100;
      }
      uVar7 = uVar7 | *(uint *)(param_1 + 0x34);
      iVar5 = 4;
      puVar10 = &DAT_1400f62f0;
      if (uVar7 != 0x1000) {
        puVar8 = &DAT_1400f62f0;
        do {
          iVar5 = *(int *)(puVar8 + 0x20);
          if (iVar5 == 0) goto LAB_14004f256;
          puVar10 = puVar8 + 0x20;
          puVar11 = (uint *)(puVar8 + 0x24);
          puVar8 = puVar10;
        } while (*puVar11 != uVar7);
      }
      lVar3 = *(longlong *)(param_1 + 0x38);
      puVar11 = (uint *)((ulonglong)*(uint *)(puVar10 + 8) + lVar3);
      if (iVar5 == 6) {
switchD_14004f191_caseD_6:
        puVar9 = *(undefined8 **)(param_1 + 0x20);
        uVar12 = uVar12 & 0xffffffff;
        if (*(uint *)(puVar10 + 0x18) < uVar4) {
          uVar12 = (ulonglong)*(uint *)(puVar10 + 0x18);
        }
        *(char *)(lVar3 + (ulonglong)*(uint *)(puVar10 + 0x1c)) = (char)uVar12;
        if ((int)uVar12 != 0) {
          uVar7 = 0;
          do {
            uVar4 = FUN_14004f2c7(param_1,puVar9);
            uVar7 = uVar4 + uVar7;
            bVar1 = puVar10[0xc];
            if (bVar1 == 4) {
LAB_14004f13d:
              *puVar11 = uVar7;
            }
            else if (bVar1 == 2) {
              *(short *)puVar11 = (short)uVar7;
            }
            else {
              if (bVar1 != 1) goto LAB_14004f13d;
              *(char *)puVar11 = (char)uVar7;
            }
            puVar9 = puVar9 + 1;
            puVar11 = (uint *)((longlong)puVar11 + (ulonglong)bVar1);
            uVar4 = (int)uVar12 - 1;
            uVar12 = (ulonglong)uVar4;
          } while (uVar4 != 0);
LAB_14004f154:
          if (iVar5 == 9) goto LAB_14004f263;
        }
      }
      else {
        if (uVar4 == 0 && iVar5 != 7) {
          return 6;
        }
        switch(iVar5) {
        case 1:
        case 4:
        case 5:
          uVar7 = FUN_14004f2c7(param_1,*(undefined8 **)(param_1 + 0x20));
          break;
        case 2:
          uVar7 = FUN_14004f325(param_1,*(undefined8 **)(param_1 + 0x20));
          break;
        case 3:
          uVar7 = FUN_14004f32d(param_1,*(undefined8 **)(param_1 + 0x20));
          break;
        case 6:
          goto switchD_14004f191_caseD_6;
        case 7:
          puVar9 = *(undefined8 **)(param_1 + 0x20);
          uVar12 = uVar12 & 0xffffffff;
          if (*(uint *)(puVar10 + 0x18) < uVar4) {
            uVar12 = (ulonglong)*(uint *)(puVar10 + 0x18);
          }
          *(char *)(lVar3 + (ulonglong)*(uint *)(puVar10 + 0x1c)) = (char)uVar12;
          if ((int)uVar12 != 0) {
            uVar7 = 0;
            do {
              iVar5 = FUN_14004f325(param_1,puVar9);
              uVar7 = uVar7 + iVar5;
              *puVar11 = uVar7;
              puVar11 = (uint *)((ulonglong)(byte)puVar10[0xc] + (longlong)puVar11);
              uVar4 = (int)uVar12 - 1;
              uVar12 = (ulonglong)uVar4;
              puVar9 = puVar9 + 1;
            } while (uVar4 != 0);
          }
          goto LAB_14004f256;
        default:
          uVar6 = (**(code **)(puVar10 + 0x10))(param_1);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          goto LAB_14004f154;
        }
        cVar2 = puVar10[0xc];
        if (cVar2 == '\x04') {
LAB_14004f24b:
          *puVar11 = uVar7;
        }
        else if (cVar2 == '\x02') {
          *(short *)puVar11 = (short)uVar7;
        }
        else {
          if (cVar2 != '\x01') goto LAB_14004f24b;
          *(char *)puVar11 = (char)uVar7;
        }
      }
LAB_14004f256:
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
    }
LAB_14004f263:
    param_2 = param_2 + 1;
  } while( true );
}

