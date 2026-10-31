/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017cdea */

void FUN_14017cdea(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined1 auStack_c8 [32];
  short local_a8 [48];
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_c8;
  uVar9 = 0x100;
  if ((param_1[0x1a] & 2U) == 0) {
    uVar9 = 0x80000000;
  }
  iVar6 = param_1[1];
  if (iVar6 < param_1[3]) {
    uVar5 = param_1[0x1a] & 2;
    do {
      piVar10 = *(int **)(*(longlong *)(param_1 + 0xe) +
                         ((longlong)iVar6 - (longlong)param_1[1]) * 8);
      if (piVar10 != *(int **)(param_1 + 8)) {
        iVar1 = *param_1;
        iVar8 = 0;
        iVar3 = 0;
        do {
          if ((iVar8 != 0) && (iVar1 < *piVar10)) {
            uVar7 = -(uint)((iVar8 >> 9 & uVar9) != 0) ^ iVar8 >> 9;
            uVar2 = (uint)(byte)(-(uVar5 == 0) | (byte)uVar7);
            if ((int)uVar7 < 0x100) {
              uVar2 = uVar7;
            }
            lVar4 = (longlong)iVar3;
            *(char *)(local_a8 + lVar4 * 3 + 2) = (char)uVar2;
            local_a8[lVar4 * 3] = (short)iVar1;
            local_a8[lVar4 * 3 + 1] = (short)*piVar10 - (short)iVar1;
            iVar3 = iVar3 + 1;
            if (iVar3 == 0x10) {
              (**(code **)(param_1 + 0x20))(iVar6,0x10,local_a8,*(undefined8 *)(param_1 + 0x22));
              iVar3 = 0;
            }
          }
          iVar8 = piVar10[1] * 0x200 + iVar8;
          if ((iVar8 - piVar10[2] != 0) && (*param_1 <= *piVar10)) {
            uVar7 = iVar8 - piVar10[2] >> 9;
            uVar7 = -(uint)((uVar7 & uVar9) != 0) ^ uVar7;
            uVar2 = (uint)(byte)(-(uVar5 == 0) | (byte)uVar7);
            if ((int)uVar7 < 0x100) {
              uVar2 = uVar7;
            }
            lVar4 = (longlong)iVar3;
            *(char *)(local_a8 + lVar4 * 3 + 2) = (char)uVar2;
            local_a8[lVar4 * 3] = (short)*piVar10;
            local_a8[lVar4 * 3 + 1] = 1;
            iVar3 = iVar3 + 1;
            if (iVar3 == 0x10) {
              (**(code **)(param_1 + 0x20))(iVar6,0x10,local_a8,*(undefined8 *)(param_1 + 0x22));
              iVar3 = 0;
            }
          }
          iVar1 = *piVar10 + 1;
          piVar10 = *(int **)(piVar10 + 4);
        } while (piVar10 != *(int **)(param_1 + 8));
        if (iVar8 != 0) {
          uVar7 = -(uint)((iVar8 >> 9 & uVar9) != 0) ^ iVar8 >> 9;
          uVar2 = (uint)(byte)(-(uVar5 == 0) | (byte)uVar7);
          if ((int)uVar7 < 0x100) {
            uVar2 = uVar7;
          }
          lVar4 = (longlong)iVar3;
          *(char *)(local_a8 + lVar4 * 3 + 2) = (char)uVar2;
          local_a8[lVar4 * 3] = (short)iVar1;
          local_a8[lVar4 * 3 + 1] = (short)param_1[2] - (short)iVar1;
          iVar3 = iVar3 + 1;
        }
        if (iVar3 != 0) {
          (**(code **)(param_1 + 0x20))(iVar6,iVar3,local_a8,*(undefined8 *)(param_1 + 0x22));
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1[3]);
  }
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_c8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_c8);
}

