/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021cf4d */

void __fastcall FUN_1021cf4d(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_48;
  int local_28;
  int local_24;
  
  uVar6 = *(uint *)(param_1 + 0x2c);
  iVar4 = (int)uVar6 >> 8;
  iVar11 = (int)param_3 >> 8;
  if ((iVar4 < *(int *)(param_1 + 0xc) || iVar11 < *(int *)(param_1 + 0xc)) &&
     (*(int *)(param_1 + 4) <= iVar4 || *(int *)(param_1 + 4) <= iVar11)) {
    uVar7 = *(uint *)(param_1 + 0x28);
    iVar12 = (int)uVar7 >> 8;
    local_50 = uVar7 & 0xff;
    local_54 = uVar6 & 0xff;
    if ((int)(uVar6 ^ param_3) >> 8 != 0 || (int)(uVar7 ^ param_2) >> 8 != 0) {
      if (param_3 == uVar6) {
        FUN_1021ced2(iVar11);
        goto LAB_1021d019;
      }
      iVar13 = param_3 - uVar6;
      if (param_2 == uVar7) {
        if (iVar13 < 1) {
          do {
            iVar4 = iVar4 + -1;
            piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 4);
            *piVar1 = *piVar1 - local_54;
            piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 8);
            *piVar1 = *piVar1 + local_54 * local_50 * -2;
            FUN_1021ced2(iVar4);
            local_54 = 0x100;
          } while (iVar4 != iVar11);
          local_54 = 0x100;
        }
        else {
          iVar12 = 0x100 - local_54;
          do {
            iVar4 = iVar4 + 1;
            piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 4);
            *piVar1 = *piVar1 + iVar12;
            piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 8);
            *piVar1 = *piVar1 + iVar12 * local_50 * 2;
            FUN_1021ced2(iVar4);
            iVar12 = 0x100;
          } while (iVar4 != iVar11);
          local_54 = 0;
        }
      }
      else {
        iVar5 = param_2 - uVar7;
        uVar2 = (longlong)iVar5 * (longlong)(int)local_54 -
                (longlong)(int)local_50 * (longlong)iVar13;
        uVar14 = 0;
        if (iVar12 != (int)param_2 >> 8) {
          uVar14 = __alldiv(0xffffffff,0,iVar5,iVar5 >> 0x1f);
        }
        local_28 = (int)(uVar14 >> 0x20);
        local_24 = (int)uVar14;
        lVar15 = 0;
        if (iVar4 != iVar11) {
          lVar15 = __alldiv(0xffffffff,0,iVar13,iVar13 >> 0x1f);
        }
        uVar6 = iVar13 * 0x100;
        do {
          local_58 = (int)(uVar2 >> 0x20);
          local_48 = (uint)uVar2;
          uVar3 = uVar2 - (longlong)(iVar5 * 0x100);
          iVar10 = (int)(uVar3 >> 0x20);
          if ((SBORROW4(0,local_58) != SBORROW4(-local_58,(uint)(local_48 != 0))) ==
              (int)(-local_58 - (uint)(local_48 != 0)) < 0 && (int)(uint)((int)uVar3 == 0) <= iVar10
             ) {
            uVar7 = local_58 * local_24 +
                    local_48 * local_28 +
                    (int)((uVar2 & 0xffffffff) * (uVar14 & 0xffffffff) >> 0x20);
            iVar10 = uVar7 - local_54;
            piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 4);
            *piVar1 = *piVar1 + iVar10;
            piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 8);
            *piVar1 = *piVar1 + iVar10 * local_50;
            iVar12 = iVar12 + -1;
            local_50 = 0x100;
            local_54 = uVar7;
            uVar2 = CONCAT44((local_58 - ((int)uVar6 >> 0x1f)) - (uint)(local_48 < uVar6),
                             local_48 + iVar13 * -0x100);
          }
          else {
            iVar8 = (int)(uVar3 + (longlong)(int)uVar6);
            iVar9 = (int)(uVar3 + (longlong)(int)uVar6 >> 0x20);
            uVar7 = (uint)((int)uVar3 != 0);
            if (((SBORROW4(0,iVar10) != SBORROW4(-iVar10,uVar7)) == (int)(-iVar10 - uVar7) < 0) &&
               ((int)(uint)(iVar8 == 0) <= iVar9)) {
              uVar7 = -(uint)((int)(uVar3 * lVar15) != 0) - (int)(uVar3 * lVar15 >> 0x20);
              piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 4);
              *piVar1 = *piVar1 + (0x100 - local_54);
              piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 8);
              *piVar1 = *piVar1 + (local_50 + uVar7) * (0x100 - local_54);
              iVar4 = iVar4 + 1;
              local_54 = 0;
              local_50 = uVar7;
              uVar2 = uVar3;
            }
            else {
              uVar3 = uVar2 + (longlong)(int)uVar6;
              if (((longlong)uVar3 < 0) ||
                 (uVar7 = (uint)(iVar8 != 0),
                 (SBORROW4(0,iVar9) != SBORROW4(-iVar9,uVar7)) != (int)(-iVar9 - uVar7) < 0)) {
                uVar7 = -(uint)((int)(uVar2 * lVar15) != 0) - (int)(uVar2 * lVar15 >> 0x20);
                piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 4);
                *piVar1 = *piVar1 - local_54;
                piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 8);
                *piVar1 = *piVar1 - (local_50 + uVar7) * local_54;
                iVar4 = iVar4 + -1;
                local_54 = 0x100;
                local_50 = uVar7;
                uVar2 = uVar2 + (longlong)(iVar5 * 0x100);
              }
              else {
                uVar7 = (int)(uVar3 >> 0x20) * local_24 +
                        (int)uVar3 * local_28 +
                        (int)((uVar3 & 0xffffffff) * (uVar14 & 0xffffffff) >> 0x20);
                iVar10 = uVar7 - local_54;
                piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 4);
                *piVar1 = *piVar1 + iVar10;
                piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 8);
                *piVar1 = *piVar1 + (local_50 + 0x100) * iVar10;
                iVar12 = iVar12 + 1;
                local_50 = 0;
                local_54 = uVar7;
                uVar2 = uVar3;
              }
            }
          }
          FUN_1021ced2(iVar4);
        } while ((iVar12 != (int)param_2 >> 8) || (iVar4 != iVar11));
      }
    }
    iVar4 = (param_3 & 0xff) - local_54;
    piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 4);
    *piVar1 = *piVar1 + iVar4;
    piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 8);
    *piVar1 = *piVar1 + iVar4 * ((param_2 & 0xff) + local_50);
  }
LAB_1021d019:
  *(uint *)(param_1 + 0x28) = param_2;
  *(uint *)(param_1 + 0x2c) = param_3;
  return;
}

