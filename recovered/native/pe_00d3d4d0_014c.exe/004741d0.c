/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004741d0 */

void __fastcall FUN_004741d0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *local_88;
  int local_84;
  int local_80;
  uint local_7c;
  uint local_78;
  short local_74 [48];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_88;
  local_78 = 0x100;
  if ((param_1[0x10] & 2U) == 0) {
    local_78 = 0x80000000;
  }
  iVar5 = param_1[1];
  if (iVar5 < param_1[3]) {
    local_7c = param_1[0x10] & 2;
    local_88 = param_1;
    do {
      piVar3 = *(int **)(param_1[9] + (iVar5 - param_1[1]) * 4);
      if (piVar3 != (int *)param_1[6]) {
        iVar4 = *param_1;
        iVar6 = 0;
        local_84 = 0;
        local_80 = iVar5;
        do {
          if ((iVar6 != 0) && (iVar4 < *piVar3)) {
            uVar2 = -(uint)((iVar6 >> 9 & local_78) != 0) ^ iVar6 >> 9;
            uVar1 = (uint)(byte)(-(local_7c == 0) | (byte)uVar2);
            if ((int)uVar2 < 0x100) {
              uVar1 = uVar2;
            }
            *(char *)(local_74 + local_84 * 3 + 2) = (char)uVar1;
            local_74[local_84 * 3] = (short)iVar4;
            local_74[local_84 * 3 + 1] = (short)*piVar3 - (short)iVar4;
            local_84 = local_84 + 1;
            param_1 = local_88;
            if (local_84 == 0x10) {
              (*(code *)local_88[0x13])(local_80,0x10,local_74,local_88[0x14]);
              local_84 = 0;
              param_1 = local_88;
            }
          }
          iVar6 = piVar3[1] * 0x200 + iVar6;
          if ((iVar6 - piVar3[2] != 0) && (*param_1 <= *piVar3)) {
            uVar2 = iVar6 - piVar3[2] >> 9;
            uVar2 = -(uint)((uVar2 & local_78) != 0) ^ uVar2;
            uVar1 = (uint)(byte)(-(local_7c == 0) | (byte)uVar2);
            if ((int)uVar2 < 0x100) {
              uVar1 = uVar2;
            }
            *(char *)(local_74 + local_84 * 3 + 2) = (char)uVar1;
            local_74[local_84 * 3] = (short)*piVar3;
            local_74[local_84 * 3 + 1] = 1;
            local_84 = local_84 + 1;
            param_1 = local_88;
            if (local_84 == 0x10) {
              (*(code *)local_88[0x13])(local_80,0x10,local_74,local_88[0x14]);
              local_84 = 0;
              param_1 = local_88;
            }
          }
          iVar5 = local_80;
          iVar4 = *piVar3;
          piVar3 = (int *)piVar3[3];
          iVar4 = iVar4 + 1;
        } while (piVar3 != (int *)param_1[6]);
        iVar7 = local_84;
        if (iVar6 != 0) {
          uVar2 = -(uint)((iVar6 >> 9 & local_78) != 0) ^ iVar6 >> 9;
          uVar1 = (uint)(byte)(-(local_7c == 0) | (byte)uVar2);
          if ((int)uVar2 < 0x100) {
            uVar1 = uVar2;
          }
          *(char *)(local_74 + local_84 * 3 + 2) = (char)uVar1;
          local_74[local_84 * 3] = (short)iVar4;
          local_74[local_84 * 3 + 1] = (short)local_88[2] - (short)iVar4;
          param_1 = local_88;
          iVar7 = local_84 + 1;
        }
        if (iVar7 != 0) {
          (*(code *)local_88[0x13])(local_80,iVar7,local_74,param_1[0x14]);
          param_1 = local_88;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[3]);
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_88);
  }
  return;
}

