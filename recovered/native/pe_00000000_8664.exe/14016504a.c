/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016504a */

int FUN_14016504a(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  int *local_b0;
  uint local_a4;
  undefined8 local_a0;
  int local_98 [2];
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_d8;
  piVar1 = (int *)param_1[1];
  lVar2 = param_1[2];
  iVar3 = FUN_140164719(param_1,&local_a4);
  iVar8 = 0xa0;
  if ((-1 < (int)local_a4 && iVar3 == 0) &&
     (*(uint *)(lVar2 + 0x28) = local_a4, local_a4 <= (uint)(piVar1[4] - *piVar1) / 0x14)) {
    if (local_a4 != 0) {
      local_b0 = local_98;
      local_b8 = 0;
      uVar5 = FUN_14012b8aa(*param_1,0x14,0);
      *(undefined8 *)(lVar2 + 0x20) = uVar5;
      iVar8 = local_98[0];
      if (local_98[0] != 0) goto LAB_1401651ff;
    }
    lVar6 = FUN_14016463e(param_1,&local_a0);
    iVar8 = 0xa0;
    if (lVar6 != 0) {
      iVar3 = -1;
      do {
        iVar4 = FUN_140164696(lVar6,local_a0);
        if (iVar4 < 0x4b) {
          if (iVar4 != 0x38) {
            if ((iVar4 - 0x14U < 2) || (iVar4 == 0x17)) {
              iVar8 = 0;
              if (iVar3 + 1 != *(int *)(lVar2 + 0x28)) {
                *(int *)(lVar2 + 0x28) = iVar3 + 1;
              }
            }
            goto LAB_1401651ff;
          }
          iVar3 = iVar3 + 1;
          if (*(int *)(lVar2 + 0x28) <= iVar3) goto LAB_1401651ff;
          lVar6 = *(longlong *)(lVar2 + 0x20);
          local_98[0] = 3;
          local_88 = 2;
          local_78 = 2;
          local_68 = 2;
          local_58 = 2;
          iVar4 = FUN_140164782(param_1,local_98,5);
          if (iVar4 != 5) goto LAB_1401651ff;
          lVar7 = (longlong)iVar3;
          *(undefined4 *)(lVar6 + lVar7 * 0x14) = local_90;
          *(undefined4 *)(lVar6 + 4 + lVar7 * 0x14) = local_80;
          *(undefined4 *)(lVar6 + 8 + lVar7 * 0x14) = local_70;
          *(undefined4 *)(lVar6 + 0xc + lVar7 * 0x14) = local_60;
          *(undefined4 *)(lVar6 + 0x10 + lVar7 * 0x14) = local_50;
        }
        else if (iVar4 != 0x4b) goto LAB_1401651ff;
        lVar6 = FUN_14016463e(param_1,&local_a0);
      } while (lVar6 != 0);
      iVar8 = 0xa0;
    }
  }
LAB_1401651ff:
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_d8)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_d8);
}

