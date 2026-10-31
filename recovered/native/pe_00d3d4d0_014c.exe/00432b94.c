/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00432b94 */

void __fastcall FUN_00432b94(int param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  short sVar17;
  int local_1c;
  
  iVar3 = param_2 * 0x544 + param_1;
  uVar9 = *(uint *)(iVar3 + 0x3c);
  if (uVar9 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(int *)(iVar3 + 0x34) * 0x2c + uVar9;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0xac4) + 0x2c);
  iVar13 = iVar4 + 0xff;
  if (-1 < iVar4) {
    iVar13 = iVar4;
  }
  iVar3 = *(int *)(iVar3 + 0x4c);
  iVar4 = FUN_0041eaa0(0xc0,*(uint *)(param_1 + 4 + (uint)(param_2 != 0) * 8));
  if (uVar9 < uVar10) {
    local_1c = 0;
    uVar8 = uVar9;
    do {
      iVar6 = local_1c;
      uVar16 = uVar9;
      if (iVar3 == *(char *)(uVar8 + 1)) {
        do {
          if (((iVar6 != 0) && ((int)*(char *)(uVar16 + 1) + (int)*(char *)(uVar8 + 1) == 0)) &&
             (iVar11 = (int)*(short *)(uVar16 + 2) - (int)*(short *)(uVar8 + 2), -1 < iVar11)) {
            sVar17 = *(short *)(uVar16 + 6);
            if (*(short *)(uVar16 + 6) < *(short *)(uVar8 + 6)) {
              sVar17 = *(short *)(uVar8 + 6);
            }
            sVar12 = (short)*(undefined4 *)(uVar8 + 8);
            sVar2 = (short)*(undefined4 *)(uVar16 + 8);
            if (sVar12 < sVar2) {
              sVar2 = sVar12;
            }
            iVar14 = (int)sVar2 - (int)sVar17;
            if (iVar13 >> 8 <= iVar14) {
              if ((iVar11 * 8 < *(int *)(uVar8 + 0x1c) * 9) &&
                 ((iVar11 * 8 < *(int *)(uVar8 + 0x1c) * 7 || (*(int *)(uVar8 + 0x20) < iVar14)))) {
                *(int *)(uVar8 + 0x1c) = iVar11;
                *(int *)(uVar8 + 0x20) = iVar14;
                *(uint *)(uVar8 + 0x14) = uVar16;
              }
              if ((iVar11 * 8 < *(int *)(uVar16 + 0x1c) * 9) &&
                 ((iVar11 * 8 < *(int *)(uVar16 + 0x1c) * 7 || (*(int *)(uVar16 + 0x20) < iVar14))))
              {
                *(int *)(uVar16 + 0x1c) = iVar11;
                *(int *)(uVar16 + 0x20) = iVar14;
                *(uint *)(uVar16 + 0x14) = uVar8;
              }
            }
          }
          uVar16 = uVar16 + 0x2c;
          iVar6 = iVar6 + -0x2c;
        } while (uVar16 < uVar10);
      }
      uVar8 = uVar8 + 0x2c;
      local_1c = local_1c + 0x2c;
      uVar16 = uVar9;
    } while (uVar8 < uVar10);
    do {
      uVar8 = *(uint *)(uVar16 + 0x14);
      if ((((uVar8 != 0) && (*(uint *)(uVar8 + 0x14) == uVar16)) &&
          (*(short *)(uVar16 + 2) < *(short *)(uVar8 + 2))) &&
         (uVar15 = uVar9, *(int *)(uVar16 + 0x1c) < iVar4)) {
        do {
          if (((uVar16 != uVar15 && *(short *)(uVar15 + 2) <= *(short *)(uVar16 + 2)) &&
              (uVar1 = *(uint *)(uVar15 + 0x14), uVar1 != 0)) && (*(uint *)(uVar1 + 0x14) == uVar15)
             ) {
            if ((*(short *)(uVar8 + 2) <= *(short *)(uVar1 + 2)) &&
               ((*(short *)(uVar16 + 2) != *(short *)(uVar15 + 2) ||
                (*(short *)(uVar8 + 2) != *(short *)(uVar1 + 2))))) {
              if ((*(int *)(uVar16 + 0x1c) < *(int *)(uVar15 + 0x1c)) &&
                 (*(int *)(uVar15 + 0x1c) < *(int *)(uVar16 + 0x1c) * 4)) {
                uVar5 = uVar9;
                if (*(int *)(uVar16 + 0x20) < *(int *)(uVar15 + 0x20) * 3) {
                  *(undefined4 *)(uVar8 + 0x14) = 0;
                  *(undefined4 *)(uVar16 + 0x14) = 0;
                  break;
                }
                do {
                  uVar7 = uVar8;
                  if ((*(uint *)(uVar5 + 0x14) == uVar15) ||
                     (uVar7 = uVar16, *(uint *)(uVar5 + 0x14) == uVar1)) {
                    *(undefined4 *)(uVar5 + 0x14) = 0;
                    *(uint *)(uVar5 + 0x18) = uVar7;
                  }
                  uVar5 = uVar5 + 0x2c;
                } while (uVar5 < uVar10);
              }
            }
          }
          uVar15 = uVar15 + 0x2c;
        } while (uVar15 < uVar10);
      }
      uVar16 = uVar16 + 0x2c;
    } while (uVar16 < uVar10);
    do {
      iVar3 = *(int *)(uVar9 + 0x14);
      if ((iVar3 != 0) && (uVar9 != *(uint *)(iVar3 + 0x14))) {
        *(undefined4 *)(uVar9 + 0x14) = 0;
        if ((*(int *)(iVar3 + 0x1c) < iVar4) ||
           (*(int *)(uVar9 + 0x1c) < *(int *)(iVar3 + 0x1c) * 4)) {
          *(undefined4 *)(uVar9 + 0x18) = *(undefined4 *)(iVar3 + 0x14);
        }
      }
      uVar9 = uVar9 + 0x2c;
    } while (uVar9 < uVar10);
  }
  return;
}

