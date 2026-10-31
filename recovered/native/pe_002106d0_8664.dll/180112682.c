/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180112682 */

void FUN_180112682(longlong param_1,undefined1 *param_2)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  lVar2 = DAT_180419160;
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + 0x112) == '\x01') && (*(char *)(param_1 + 0x10a) == '\0')) {
LAB_1801128bb:
    if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
      FUN_18012213f(param_1);
      return;
    }
    goto LAB_180112926;
  }
  cVar3 = FUN_180112655(param_1);
  if (cVar3 == '\0') {
    uVar6 = *(uint *)(param_1 + 0x14) >> 0x13 & 1;
    if (((*(byte *)(lVar2 + 0x2030) & 1) != 0) &&
       ((*(uint *)(lVar2 + 0x2034) & (int)*(char *)(param_1 + 0x131)) != 0)) {
      uVar6 = uVar6 | *(byte *)(lVar2 + 0x2074);
    }
    if (uVar6 == 0) {
      iVar5 = *(int *)(param_1 + 0x4d0);
      goto LAB_18011271b;
    }
LAB_1801127ae:
    if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
      FUN_18011dc42(lVar2,param_1,1);
      return;
    }
    goto LAB_180112926;
  }
  iVar5 = *(int *)(param_1 + 0x4d0);
  if (iVar5 == 0) {
    iVar5 = FUN_180120874(lVar2);
    *(int *)(param_1 + 0x4d0) = iVar5;
  }
LAB_18011271b:
  lVar9 = *(longlong *)(param_1 + 0x4c0);
  if ((lVar9 != 0 || iVar5 == 0) || (lVar9 = FUN_180122155(lVar2,param_1), lVar9 != 0)) {
    if (*(int *)(lVar9 + 0xb4) < *(int *)(lVar2 + 4)) {
      do {
        lVar10 = lVar9;
        lVar9 = *(longlong *)(lVar10 + 0x18);
      } while (lVar9 != 0);
      if (*(int *)(lVar10 + 0xb4) < *(int *)(lVar2 + 4)) goto LAB_1801127ae;
      *(byte *)(param_1 + 0x495) = *(byte *)(param_1 + 0x495) | 1;
    }
    else {
      FUN_18012223d(param_1);
      if (*(longlong *)(lVar9 + 0x90) == 0) {
        if (*(int *)(lVar9 + 0x14) == 2) {
          *(byte *)(param_1 + 0x495) = *(byte *)(param_1 + 0x495) | 1;
        }
        if ((1 < *(int *)(lVar9 + 0x30)) && (*(char *)(param_1 + 0x110) == '\x01'))
        goto LAB_1801128bb;
      }
      else {
        *(undefined4 *)(lVar9 + 0x14) = 3;
        if (((*(byte *)(lVar9 + 0x10) & 1) == 0) &&
           (*(short *)(param_1 + 0x11e) < *(short *)(*(longlong *)(lVar9 + 0x90) + 0x11e)))
        goto LAB_1801127ae;
        local_30 = 0;
        FUN_180116a8b(lVar9 + 0x48,0);
        FUN_18010ca41(lVar9 + 0x50,0);
        *(undefined1 *)(lVar2 + 0x2074) = 0;
        bVar1 = *(byte *)(param_1 + 0x495);
        *(byte *)(param_1 + 0x495) = bVar1 & 0xf8 | 3;
        if ((*(byte *)(lVar9 + 0x10) & 1) == 0) {
          if (*(longlong *)(lVar9 + 0x98) == param_1) {
            *(byte *)(param_1 + 0x495) = bVar1 | 7;
          }
          uVar6 = *(uint *)(param_1 + 0x14);
          *(uint *)(param_1 + 0x14) = uVar6 | 0x1000002;
          *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 2;
          uVar7 = uVar6 | 0x1000003;
          if ((*(uint *)(lVar9 + 0x10) & 0x3000) == 0) {
            uVar7 = uVar6 & 0xfffffffe | 0x1000002;
          }
          *(uint *)(param_1 + 0x14) = uVar7;
          if ((*(longlong *)(lVar9 + 0x40) != 0) && (*(char *)(param_1 + 0x10a) == '\x01')) {
            uVar4 = FUN_180122289(param_1);
            *(undefined2 *)(param_1 + 0x496) = uVar4;
          }
          if ((*(byte *)(lVar9 + 0xd4) & 0x40) == 0) {
            if ((param_2 != (undefined1 *)0x0) && (*(int *)(lVar9 + 200) == *(int *)(param_1 + 200))
               ) {
LAB_1801128e5:
              *param_2 = 0;
            }
          }
          else if (param_2 != (undefined1 *)0x0) goto LAB_1801128e5;
          uVar8 = FUN_180106d4e(*(undefined8 *)(*(longlong *)(param_1 + 0x4c0) + 0x90),
                                *(undefined8 *)(param_1 + 8),0);
          *(undefined4 *)(param_1 + 0xcc) = uVar8;
        }
      }
    }
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
LAB_180112926:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}

