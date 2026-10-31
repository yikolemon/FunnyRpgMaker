/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140098568 */

void FUN_140098568(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  byte bVar13;
  ulonglong uVar14;
  uint local_74;
  undefined4 *local_68;
  uint local_4c;
  
  lVar5 = DAT_140f2a910;
  if (param_1 == 0) {
    local_68 = (undefined4 *)0x0;
    local_74 = 0;
  }
  else {
    local_68 = (undefined4 *)FUN_140099b24(DAT_140f2a910);
    if (local_68 == (undefined4 *)0x0) {
      return;
    }
    local_74 = local_68[0x34] & 0x3f;
  }
  uVar14 = 0;
  lVar11 = 0;
  local_4c = 0;
  uVar12 = 0;
  bVar4 = 0;
  do {
    if (*(int *)(lVar5 + 0x2930) <= (int)uVar12) {
      if (param_1 != 0) {
        local_68[0x34] = local_74 | local_68[0x34] & 0xffffffc0;
      }
      lVar7 = *(longlong *)(lVar5 + 0x29a0);
      if (lVar7 != 0) {
        lVar9 = lVar7 + 4;
        do {
          if (*(int *)(lVar9 + 0x14) != 0 && 0 < (int)local_4c) {
            uVar14 = 0;
            do {
              if (**(int **)(lVar11 + uVar14 * 8) == *(int *)(lVar9 + 0x14)) {
                *(int *)(lVar9 + 0x14) = param_1;
                lVar7 = *(longlong *)(lVar5 + 0x29a0);
                break;
              }
              uVar14 = uVar14 + 1;
            } while (local_4c != uVar14);
          }
          lVar9 = lVar9 + *(int *)(lVar9 + -4);
        } while (lVar9 != *(int *)(lVar5 + 0x2998) + lVar7 + 4);
      }
      if (1 < (int)local_4c) {
        FUN_1401a7460(lVar11,(ulonglong)local_4c,8,&LAB_14009b04f);
      }
      for (uVar12 = 0; (int)uVar12 < (int)local_4c; uVar12 = uVar12 + 1) {
        FUN_14009af77(lVar5,*(undefined8 *)(lVar11 + (ulonglong)uVar12 * 8),0);
      }
      if (param_1 == 0) {
        if (*(longlong *)(lVar5 + 0x2938) != 0) {
          *(undefined8 *)(lVar5 + 0x2930) = 0;
          FUN_140077b90();
          *(undefined8 *)(lVar5 + 0x2938) = 0;
        }
        if (*(longlong *)(lVar5 + 0x2948) != 0) {
          *(undefined8 *)(lVar5 + 0x2940) = 0;
          FUN_140077b90();
          *(undefined8 *)(lVar5 + 0x2948) = 0;
        }
      }
      else if (bVar4 != 0) {
        *(undefined4 **)(local_68 + 0x28) = local_68;
        uVar12 = local_68[2];
        local_68[2] = uVar12 | 0x800;
        local_68[4] = local_68[1] | local_68[3] | uVar12 | 0x800;
      }
      if (lVar11 == 0) {
        return;
      }
      FUN_140077b90(lVar11);
      return;
    }
    piVar1 = *(int **)(*(longlong *)(lVar5 + 0x2938) + 8 + (ulonglong)uVar12 * 0x10);
    if (piVar1 != (int *)0x0) {
      if (param_1 == 0) {
        bVar13 = (*(byte *)((longlong)piVar1 + 0x11) & 8) >> 3;
LAB_1400986aa:
        bVar4 = bVar13 | bVar4;
        uVar10 = (uint)uVar14;
        lVar7 = lVar11;
        if (local_4c == uVar10) {
          if (uVar10 == 0) {
            uVar6 = 8;
          }
          else {
            uVar6 = ((int)((int)(uVar14 >> 0x1f) + uVar10) >> 1) + uVar10;
          }
          uVar3 = uVar10 + 1;
          if ((int)(uVar10 + 1) < (int)uVar6) {
            uVar3 = uVar6;
          }
          uVar14 = (ulonglong)uVar3;
          lVar7 = FUN_140077ab4((longlong)(int)uVar3 << 3);
          if (lVar11 != 0) {
            FUN_1401c5180(lVar7,lVar11);
            FUN_140077b90(lVar11);
          }
        }
        lVar11 = lVar7;
        *(int **)(lVar11 + (longlong)(int)local_4c * 8) = piVar1;
        local_4c = local_4c + 1;
      }
      else {
        piVar2 = piVar1;
        if (*piVar1 != param_1) {
          do {
            piVar8 = piVar2;
            piVar2 = *(int **)(piVar8 + 6);
          } while (piVar2 != (int *)0x0);
          if (*piVar8 == param_1) {
            uVar10 = piVar1[4];
            FUN_14009b01c(lVar5,piVar1);
            FUN_14009a0a2(local_68,piVar1);
            FUN_14009a17d(*piVar1,*local_68);
            bVar13 = (byte)(uVar10 >> 0xb) & 1;
            goto LAB_1400986aa;
          }
        }
      }
    }
    uVar12 = uVar12 + 1;
  } while( true );
}

