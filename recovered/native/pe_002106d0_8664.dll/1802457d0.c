/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802457d0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1802457d0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *******pppppppuVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 **local_80;
  undefined1 local_68 [2];
  undefined1 local_66 [2];
  undefined1 local_64;
  longlong local_60;
  undefined1 *local_58;
  undefined8 *******local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_b8;
  uVar9 = **(ulonglong **)(param_1 + 0x38);
  if (uVar9 != 0) {
    iVar3 = **(int **)(param_1 + 0x50);
    if (uVar9 < uVar9 + (longlong)iVar3 * 2) {
      **(int **)(param_1 + 0x50) = iVar3 + -1;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + 2;
      goto LAB_180245a9f;
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      lVar8 = *(longlong *)(param_1 + 0x90);
      lVar1 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar1;
      **(longlong **)(param_1 + 0x38) = lVar1;
      **(undefined4 **)(param_1 + 0x50) = (int)(lVar8 - lVar1 >> 1);
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
      uStack_48 = 0;
      local_40 = 0;
      local_38 = 0xf;
      local_50 = (undefined8 *******)0x0;
      uVar2 = FUN_180284d5c();
      uVar9 = local_40;
      while( true ) {
        local_40 = uVar9;
        if (uVar2 == 0xffffffff) goto LAB_180245a93;
        if (uVar9 < local_38) {
          if (((uVar9 != uVar9 + 1) && (0xf < local_38)) && (DAT_18034e408 != '\0')) {
            uVar10 = (longlong)local_50 + uVar9 + 1;
            uVar4 = (longlong)local_50 + uVar9 + 2;
            uVar7 = local_38 + 8 + (longlong)local_50 & 0xfffffffffffffff8;
            uVar5 = uVar7;
            if (uVar4 <= uVar7) {
              uVar5 = uVar4;
            }
            uVar4 = uVar7;
            if (uVar10 <= uVar7) {
              uVar4 = uVar10;
            }
            _guard_check_icall(local_50,uVar7,uVar4,uVar5);
          }
          pppppppuVar6 = &local_50;
          if (0xf < local_38) {
            pppppppuVar6 = local_50;
          }
          local_40 = uVar9 + 1;
          *(char *)((longlong)pppppppuVar6 + uVar9) = (char)uVar2;
          *(undefined1 *)((longlong)pppppppuVar6 + uVar9 + 1) = 0;
        }
        else {
          FUN_1802442b0(&local_50,1,local_64,uVar2 & 0xff);
        }
        pppppppuVar6 = local_50;
        if (local_38 < 0x10) {
          pppppppuVar6 = &local_50;
        }
        local_80 = &local_58;
        local_88 = local_66;
        local_90 = local_68;
        local_98 = &local_60;
        iVar3 = (*(code *)PTR__guard_dispatch_icall_18038bc80)
                          (*(undefined8 *)(param_1 + 0x68),param_1 + 0x74,pppppppuVar6,
                           local_40 + (longlong)pppppppuVar6);
        uVar9 = local_40;
        if ((iVar3 != 0) && (iVar3 != 1)) goto LAB_180245a93;
        if (local_58 != local_68) break;
        pppppppuVar6 = local_50;
        if (local_38 < 0x10) {
          pppppppuVar6 = &local_50;
        }
        uVar5 = local_60 - (longlong)pppppppuVar6;
        if (local_40 < (ulonglong)(local_60 - (longlong)pppppppuVar6)) {
          uVar5 = local_40;
        }
        uVar4 = local_40 - uVar5;
        FUN_1802a82f0(pppppppuVar6,uVar5 + (longlong)pppppppuVar6,uVar4 + 1);
        if (((uVar9 != uVar4) && (0xf < local_38)) && (DAT_18034e408 != '\0')) {
          uVar10 = (longlong)local_50 + uVar9 + 1;
          uVar5 = (longlong)local_50 + uVar4 + 1;
          uVar7 = local_38 + 8 + (longlong)local_50 & 0xfffffffffffffff8;
          uVar9 = uVar7;
          if (uVar5 <= uVar7) {
            uVar9 = uVar5;
          }
          uVar5 = uVar7;
          if (uVar10 <= uVar7) {
            uVar5 = uVar10;
          }
          _guard_check_icall(local_50,uVar7,uVar5,uVar9);
        }
        local_40 = uVar4;
        uVar2 = FUN_180284d5c(*(undefined8 *)(param_1 + 0x80));
        uVar9 = local_40;
      }
      pppppppuVar6 = &local_50;
      if (0xf < local_38) {
        pppppppuVar6 = local_50;
      }
      lVar8 = (local_40 - local_60) + (longlong)pppppppuVar6;
      while (0 < lVar8) {
        lVar8 = lVar8 + -1;
        ungetc((int)*(char *)(lVar8 + local_60),*(FILE **)(param_1 + 0x80));
      }
LAB_180245a93:
      FUN_180001ef2(&local_50);
      goto LAB_180245a9f;
    }
    fgetwc(*(FILE **)(param_1 + 0x80));
  }
LAB_180245a9f:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_b8);
}

