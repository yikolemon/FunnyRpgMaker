/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006318d */

int FUN_14006318d(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte *pbVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStackY_c8 [32];
  uint local_94;
  size_t local_90;
  int local_88 [2];
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_c8;
  piVar1 = (int *)param_1[1];
  lVar2 = param_1[2];
  uVar4 = FUN_140062669(param_1,&local_94);
  if ((-1 < (int)local_94 && (int)uVar4 == 0) &&
     (*(uint *)(lVar2 + 0x38) = local_94, local_94 <= (uint)(piVar1[4] - *piVar1) / 10)) {
    if (local_94 != 0) {
      lVar5 = FUN_14001f231(*param_1,0x10,0,local_94,0,local_88);
      *(longlong *)(lVar2 + 0x30) = lVar5;
      iVar3 = local_88[0];
      if (local_88[0] != 0) goto LAB_1400631fc;
    }
    pbVar6 = FUN_14006258e((longlong)param_1,(longlong *)&local_90);
    if (pbVar6 != (byte *)0x0) {
      iVar11 = -1;
      do {
        iVar3 = FUN_1400625e6((char *)pbVar6,local_90);
        uVar7 = (ulonglong)(iVar3 - 0x14U);
        if (0x37 < iVar3 - 0x14U) break;
        if ((0x34000UL >> (uVar7 & 0x3f) & 1) == 0) {
          if (uVar7 != 0x37) {
            iVar3 = 0xa0;
            if ((7UL >> (uVar7 & 0x3f) & 1) != 0) {
              uVar12 = iVar11 + 1;
              if (uVar12 != *(uint *)(lVar2 + 0x38)) {
                *(uint *)(lVar2 + 0x38) = uVar12;
              }
              FUN_14009aaf0(*(undefined1 **)(lVar2 + 0x30),(ulonglong)uVar12,0x10,&LAB_140049fb4);
              iVar3 = 0;
            }
            goto LAB_1400631fc;
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
          uVar7 = FUN_1400626d2(param_1,(longlong)local_88,4);
          if ((int)uVar7 < 3) break;
          *puVar10 = local_80;
          puVar10[1] = local_70;
          uVar8 = local_60;
          uVar9 = 0;
          if ((iVar3 != 0x25) && (uVar8 = 0, uVar9 = local_60, (int)uVar7 == 4 && iVar3 == 0x22)) {
            uVar8 = local_50;
          }
          puVar10[2] = uVar9;
          puVar10[3] = uVar8;
        }
        pbVar6 = FUN_14006258e((longlong)param_1,(longlong *)&local_90);
      } while (pbVar6 != (byte *)0x0);
    }
  }
  iVar3 = 0xa0;
LAB_1400631fc:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_c8);
  }
  return iVar3;
}

