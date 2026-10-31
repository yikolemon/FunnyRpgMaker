/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016523d */

int FUN_14016523d(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int *local_a0;
  uint local_94;
  undefined8 local_90;
  int local_88 [2];
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_c8;
  piVar1 = (int *)param_1[1];
  lVar2 = param_1[2];
  iVar3 = FUN_140164719(param_1,&local_94);
  if ((-1 < (int)local_94 && iVar3 == 0) &&
     (*(uint *)(lVar2 + 0x38) = local_94, local_94 <= (uint)(piVar1[4] - *piVar1) / 10)) {
    if (local_94 != 0) {
      local_a0 = local_88;
      local_a8 = 0;
      uVar5 = FUN_14012b8aa(*param_1,0x10,0);
      *(undefined8 *)(lVar2 + 0x30) = uVar5;
      iVar3 = local_88[0];
      if (local_88[0] != 0) goto LAB_1401652ac;
    }
    lVar6 = FUN_14016463e(param_1,&local_90);
    if (lVar6 != 0) {
      iVar11 = -1;
      do {
        iVar3 = FUN_140164696(lVar6,local_90);
        uVar7 = (ulonglong)(iVar3 - 0x14U);
        if (0x37 < iVar3 - 0x14U) break;
        if ((0x34000UL >> (uVar7 & 0x3f) & 1) == 0) {
          if (uVar7 != 0x37) {
            iVar3 = 0xa0;
            if ((7UL >> (uVar7 & 0x3f) & 1) != 0) {
              iVar11 = iVar11 + 1;
              if (iVar11 != *(int *)(lVar2 + 0x38)) {
                *(int *)(lVar2 + 0x38) = iVar11;
              }
              FUN_1401a7460(*(undefined8 *)(lVar2 + 0x30),iVar11,0x10,&LAB_14014c066);
              iVar3 = 0;
            }
            goto LAB_1401652ac;
          }
        }
        else {
          iVar11 = iVar11 + 1;
          if (*(int *)(lVar2 + 0x38) <= iVar11) break;
          puVar10 = (undefined4 *)((longlong)iVar11 * 0x10 + *(longlong *)(lVar2 + 0x30));
          local_88[0] = 5;
          local_78 = 5;
          local_68 = 3;
          local_58 = 3;
          iVar4 = FUN_140164782(param_1);
          if (iVar4 < 3) break;
          *puVar10 = local_80;
          puVar10[1] = local_70;
          uVar8 = local_60;
          uVar9 = 0;
          if ((iVar3 != 0x25) && (uVar8 = 0, uVar9 = local_60, iVar4 == 4 && iVar3 == 0x22)) {
            uVar8 = local_50;
          }
          puVar10[2] = uVar9;
          puVar10[3] = uVar8;
        }
        lVar6 = FUN_14016463e(param_1,&local_90);
      } while (lVar6 != 0);
    }
  }
  iVar3 = 0xa0;
LAB_1401652ac:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_c8);
  }
  return iVar3;
}

