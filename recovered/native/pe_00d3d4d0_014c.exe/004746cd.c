/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004746cd */

void __fastcall FUN_004746cd(int *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_48;
  longlong local_34;
  int local_28;
  int local_24;
  
  uVar13 = param_1[0xb];
  iVar3 = (int)uVar13 >> 8;
  iVar11 = (int)param_3 >> 8;
  if ((iVar3 < param_1[3] || iVar11 < param_1[3]) && (param_1[1] <= iVar3 || param_1[1] <= iVar11))
  {
    uVar4 = param_1[10];
    iVar12 = (int)uVar4 >> 8;
    iVar8 = (int)param_2 >> 8;
    local_50 = uVar4 & 0xff;
    local_54 = uVar13 & 0xff;
    if ((int)(uVar13 ^ param_3) >> 8 != 0 || (int)(uVar4 ^ param_2) >> 8 != 0) {
      if (param_3 == uVar13) {
        FUN_00474652(param_1,iVar8,iVar11);
        goto LAB_00474799;
      }
      uVar13 = param_3 - uVar13;
      if (param_2 == uVar4) {
        if ((int)uVar13 < 1) {
          do {
            iVar3 = iVar3 + -1;
            *(int *)(param_1[7] + 4) = *(int *)(param_1[7] + 4) - local_54;
            *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + local_54 * local_50 * -2;
            FUN_00474652(param_1,iVar12,iVar3);
            local_54 = 0x100;
          } while (iVar3 != iVar11);
          local_54 = 0x100;
        }
        else {
          iVar8 = 0x100 - local_54;
          do {
            iVar3 = iVar3 + 1;
            *(int *)(param_1[7] + 4) = *(int *)(param_1[7] + 4) + iVar8;
            *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + iVar8 * local_50 * 2;
            FUN_00474652(param_1,iVar12,iVar3);
            iVar8 = 0x100;
          } while (iVar3 != iVar11);
          local_54 = 0;
        }
      }
      else {
        uVar4 = param_2 - uVar4;
        uVar1 = (longlong)(int)uVar4 * (longlong)(int)local_54 -
                (longlong)(int)local_50 * (longlong)(int)uVar13;
        uVar14 = 0;
        if (iVar12 != iVar8) {
          uVar14 = __alldiv(0xffffffff,0,uVar4,(int)uVar4 >> 0x1f);
        }
        local_34 = 0;
        if (iVar3 != iVar11) {
          local_34 = __alldiv(0xffffffff,0,uVar13,(int)uVar13 >> 0x1f);
        }
        uVar5 = uVar13 * 0x100;
        do {
          local_28 = (int)(uVar14 >> 0x20);
          local_24 = (int)uVar14;
          local_58 = (int)(uVar1 >> 0x20);
          local_48 = (uint)uVar1;
          uVar2 = uVar1 - (longlong)(int)(uVar4 * 0x100);
          iVar10 = (int)(uVar2 >> 0x20);
          if ((SBORROW4(0,local_58) != SBORROW4(-local_58,(uint)(local_48 != 0))) ==
              (int)(-local_58 - (uint)(local_48 != 0)) < 0 && (int)(uint)((int)uVar2 == 0) <= iVar10
             ) {
            uVar6 = local_58 * local_24 +
                    local_48 * local_28 +
                    (int)((uVar1 & 0xffffffff) * (uVar14 & 0xffffffff) >> 0x20);
            iVar10 = uVar6 - local_54;
            *(int *)(param_1[7] + 4) = *(int *)(param_1[7] + 4) + iVar10;
            *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + iVar10 * local_50;
            iVar12 = iVar12 + -1;
            local_50 = 0x100;
            local_54 = uVar6;
            uVar1 = CONCAT44((local_58 - ((int)uVar5 >> 0x1f)) - (uint)(local_48 < uVar5),
                             local_48 + uVar13 * -0x100);
          }
          else {
            iVar7 = (int)(uVar2 + (longlong)(int)uVar5);
            iVar9 = (int)(uVar2 + (longlong)(int)uVar5 >> 0x20);
            uVar6 = (uint)((int)uVar2 != 0);
            if (((SBORROW4(0,iVar10) != SBORROW4(-iVar10,uVar6)) == (int)(-iVar10 - uVar6) < 0) &&
               ((int)(uint)(iVar7 == 0) <= iVar9)) {
              uVar6 = -(uint)((int)(uVar2 * local_34) != 0) - (int)(uVar2 * local_34 >> 0x20);
              *(int *)(param_1[7] + 4) = *(int *)(param_1[7] + 4) + (0x100 - local_54);
              *(int *)(param_1[7] + 8) =
                   *(int *)(param_1[7] + 8) + (local_50 + uVar6) * (0x100 - local_54);
              iVar3 = iVar3 + 1;
              local_54 = 0;
              local_50 = uVar6;
              uVar1 = uVar2;
            }
            else {
              uVar2 = uVar1 + (longlong)(int)uVar5;
              if (((longlong)uVar2 < 0) ||
                 (uVar6 = (uint)(iVar7 != 0),
                 (SBORROW4(0,iVar9) != SBORROW4(-iVar9,uVar6)) != (int)(-iVar9 - uVar6) < 0)) {
                uVar6 = -(uint)((int)(local_34 * uVar1) != 0) - (int)(local_34 * uVar1 >> 0x20);
                *(int *)(param_1[7] + 4) = *(int *)(param_1[7] + 4) - local_54;
                *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) - (local_50 + uVar6) * local_54;
                iVar3 = iVar3 + -1;
                local_54 = 0x100;
                local_50 = uVar6;
                uVar1 = uVar1 + (longlong)(int)(uVar4 * 0x100);
              }
              else {
                uVar6 = (int)(uVar2 >> 0x20) * local_24 +
                        (int)uVar2 * local_28 +
                        (int)((uVar2 & 0xffffffff) * (uVar14 & 0xffffffff) >> 0x20);
                iVar10 = uVar6 - local_54;
                *(int *)(param_1[7] + 4) = *(int *)(param_1[7] + 4) + iVar10;
                *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (local_50 + 0x100) * iVar10;
                iVar12 = iVar12 + 1;
                local_50 = 0;
                local_54 = uVar6;
                uVar1 = uVar2;
              }
            }
          }
          FUN_00474652(param_1,iVar12,iVar3);
        } while ((iVar12 != iVar8) || (iVar3 != iVar11));
      }
    }
    iVar3 = (param_3 & 0xff) - local_54;
    *(int *)(param_1[7] + 4) = *(int *)(param_1[7] + 4) + iVar3;
    *(int *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + iVar3 * ((param_2 & 0xff) + local_50);
  }
LAB_00474799:
  param_1[10] = param_2;
  param_1[0xb] = param_3;
  return;
}

