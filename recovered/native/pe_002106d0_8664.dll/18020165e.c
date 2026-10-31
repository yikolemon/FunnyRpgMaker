/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020165e */

int FUN_18020165e(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int *local_90;
  uint local_7c;
  int *local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_b8;
  local_4c = 0;
  if (param_3 == 0 || param_4 != (int *)0x0) {
    lVar12 = *(longlong *)(param_1 + 8);
    uVar8 = *(undefined8 *)(lVar12 + 0x10);
    *param_1 = 0;
    if (((param_3 == 0) || (param_3 == *(ushort *)(lVar12 + 0x1120))) &&
       (param_2 < *(uint *)(lVar12 + 0x1110))) {
      local_70 = *(longlong *)(lVar12 + 0x1118);
      uVar14 = *(int *)(local_70 + (ulonglong)param_2 * 0x10) + 1;
      local_98 = *(undefined8 *)(param_1 + 0x28);
      local_90 = &local_4c;
      local_60 = lVar12;
      uVar7 = FUN_1801cc8d6(uVar8,4,*(undefined4 *)(param_1 + 0x20),uVar14);
      *(undefined8 *)(param_1 + 0x28) = uVar7;
      iVar10 = local_4c;
      if (local_4c == 0) {
        *(uint *)(param_1 + 0x20) = uVar14;
        local_7c = param_2;
        local_78 = param_4;
        local_68 = uVar8;
        if (uVar14 != 0) {
          local_70 = local_70 + (ulonglong)param_2 * 0x10;
          local_58 = (ulonglong)uVar14;
          uVar13 = 0;
          do {
            if (uVar13 == 0) {
              **(undefined4 **)(param_1 + 0x28) = 0x10000;
            }
            else {
              uVar14 = *(uint *)(*(longlong *)(local_70 + 8) + -4 + uVar13 * 4);
              if (*(uint *)(local_60 + 0x1124) <= uVar14) goto LAB_180201895;
              lVar12 = *(longlong *)(param_1 + 0x28);
              if (param_3 == 0) {
LAB_18020181f:
                *(undefined4 *)(lVar12 + uVar13 * 4) = 0;
              }
              else {
                lVar4 = *(longlong *)(local_60 + 0x1128);
                *(undefined4 *)(lVar12 + uVar13 * 4) = 0x10000;
                lVar12 = 0;
                piVar9 = local_78;
                do {
                  lVar5 = *(longlong *)(lVar4 + (ulonglong)uVar14 * 8);
                  iVar10 = *(int *)(lVar5 + 4 + lVar12);
                  if ((iVar10 != 0) && (iVar1 = *piVar9, iVar10 != iVar1)) {
                    iVar2 = *(int *)(lVar5 + lVar12);
                    if (iVar1 - iVar2 != 0 && iVar2 <= iVar1) {
                      iVar3 = *(int *)(lVar5 + 8 + lVar12);
                      iVar11 = iVar3 - iVar1;
                      if (iVar11 != 0 && iVar1 <= iVar3) {
                        if (iVar1 < iVar10) {
                          iVar10 = iVar10 - iVar2;
                          iVar11 = iVar1 - iVar2;
                        }
                        else {
                          iVar10 = iVar3 - iVar10;
                        }
                        uVar6 = FUN_1801cb4a4(*(undefined4 *)
                                               (*(longlong *)(param_1 + 0x28) + uVar13 * 4),iVar11,
                                              iVar10);
                        *(undefined4 *)(*(longlong *)(param_1 + 0x28) + uVar13 * 4) = uVar6;
                        goto LAB_180201800;
                      }
                    }
                    lVar12 = *(longlong *)(param_1 + 0x28);
                    goto LAB_18020181f;
                  }
LAB_180201800:
                  lVar12 = lVar12 + 0xc;
                  piVar9 = piVar9 + 1;
                } while ((ulonglong)param_3 * 0xc != lVar12);
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 != local_58);
        }
        *(uint *)(param_1 + 0x10) = local_7c;
        if (param_3 != 0) {
          local_98 = *(undefined8 *)(param_1 + 0x18);
          local_90 = &local_4c;
          uVar8 = FUN_1801cc8d6(local_68,4,*(undefined4 *)(param_1 + 0x14),param_3);
          *(undefined8 *)(param_1 + 0x18) = uVar8;
          iVar10 = local_4c;
          if (local_4c != 0) goto LAB_18020189a;
          FUN_1802a82f0(uVar8,local_78,(ulonglong)param_3 << 2);
        }
        *(uint *)(param_1 + 0x14) = param_3;
        *param_1 = 1;
        iVar10 = local_4c;
      }
      goto LAB_18020189a;
    }
  }
LAB_180201895:
  iVar10 = 3;
LAB_18020189a:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_b8);
  }
  return iVar10;
}

