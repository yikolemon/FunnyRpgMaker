/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140062f9a */

int FUN_140062f9a(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte *pbVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined1 auStackY_d8 [32];
  uint local_a4;
  size_t local_a0;
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
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_d8;
  piVar1 = (int *)param_1[1];
  lVar2 = param_1[2];
  uVar4 = FUN_140062669(param_1,&local_a4);
  iVar10 = 0xa0;
  if ((-1 < (int)local_a4 && (int)uVar4 == 0) &&
     (*(uint *)(lVar2 + 0x28) = local_a4, local_a4 <= (uint)(piVar1[4] - *piVar1) / 0x14)) {
    if (local_a4 != 0) {
      lVar5 = FUN_14001f231(*param_1,0x14,0,local_a4,0,local_98);
      *(longlong *)(lVar2 + 0x20) = lVar5;
      iVar10 = local_98[0];
      if (local_98[0] != 0) goto LAB_14006314f;
    }
    pbVar6 = FUN_14006258e((longlong)param_1,(longlong *)&local_a0);
    iVar10 = 0xa0;
    if (pbVar6 != (byte *)0x0) {
      iVar9 = -1;
      do {
        iVar3 = FUN_1400625e6((char *)pbVar6,local_a0);
        if (iVar3 < 0x4b) {
          if (iVar3 != 0x38) {
            if ((iVar3 - 0x14U < 2) || (iVar3 == 0x17)) {
              iVar10 = 0;
              if (iVar9 + 1 != *(int *)(lVar2 + 0x28)) {
                *(int *)(lVar2 + 0x28) = iVar9 + 1;
              }
            }
            goto LAB_14006314f;
          }
          iVar9 = iVar9 + 1;
          if (*(int *)(lVar2 + 0x28) <= iVar9) goto LAB_14006314f;
          lVar5 = *(longlong *)(lVar2 + 0x20);
          local_98[0] = 3;
          local_88 = 2;
          local_78 = 2;
          local_68 = 2;
          local_58 = 2;
          uVar7 = FUN_1400626d2(param_1,(longlong)local_98,5);
          if ((int)uVar7 != 5) goto LAB_14006314f;
          lVar8 = (longlong)iVar9;
          *(undefined4 *)(lVar5 + lVar8 * 0x14) = local_90;
          *(undefined4 *)(lVar5 + 4 + lVar8 * 0x14) = local_80;
          *(undefined4 *)(lVar5 + 8 + lVar8 * 0x14) = local_70;
          *(undefined4 *)(lVar5 + 0xc + lVar8 * 0x14) = local_60;
          *(undefined4 *)(lVar5 + 0x10 + lVar8 * 0x14) = local_50;
        }
        else if (iVar3 != 0x4b) goto LAB_14006314f;
        pbVar6 = FUN_14006258e((longlong)param_1,(longlong *)&local_a0);
      } while (pbVar6 != (byte *)0x0);
      iVar10 = 0xa0;
    }
  }
LAB_14006314f:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_d8)) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_d8);
}

