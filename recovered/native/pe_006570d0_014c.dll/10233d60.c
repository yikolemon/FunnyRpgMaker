/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10233d60 */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_10233d60(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 *******pppppppuVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 *******pppppppuVar11;
  uint local_4c;
  undefined1 *local_40;
  int local_3c;
  int local_38;
  undefined1 local_34 [2];
  undefined1 local_32 [2];
  int *local_30;
  undefined4 *******local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10288edd;
  local_10 = ExceptionList;
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar4 = **(uint **)(param_1 + 0x1c);
  local_3c = param_1;
  if ((uVar4 == 0) || (piVar8 = *(int **)(param_1 + 0x2c), uVar4 + *piVar8 * 2 <= uVar4)) {
    if (*(int *)(param_1 + 0x4c) != 0) {
      if (**(int **)(param_1 + 0xc) == param_1 + 0x3c) {
        iVar10 = *(int *)(param_1 + 0x54);
        iVar1 = *(int *)(param_1 + 0x50);
        **(int **)(param_1 + 0xc) = iVar1;
        **(int **)(param_1 + 0x1c) = iVar1;
        **(int **)(param_1 + 0x2c) = iVar10 - iVar1 >> 1;
      }
      if (*(int *)(param_1 + 0x38) == 0) {
        _fgetwc(*(FILE **)(param_1 + 0x4c));
      }
      else {
        local_1c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        local_18 = 0xf;
        local_2c = (undefined4 *******)0x0;
        local_8 = 0;
        local_30 = (int *)FUN_1026d9fa(*(FILE **)(param_1 + 0x4c),local_14);
        if (local_30 != (int *)0xffffffff) {
          iVar10 = param_1 + 0x40;
LAB_10233e50:
          uVar4 = local_1c;
          local_4c = (uint)local_30 & 0xff;
          if (local_1c < local_18) {
            uVar9 = local_1c + 1;
            FUN_1022d270(local_1c,uVar9);
            pppppppuVar5 = &local_2c;
            if (0xf < local_18) {
              pppppppuVar5 = local_2c;
            }
            local_1c = uVar9;
            *(undefined1 *)((int)pppppppuVar5 + uVar4) = (char)local_30;
            ((undefined1 *)((int)pppppppuVar5 + uVar4))[1] = 0;
          }
          else {
            FUN_10232b40(1,local_40,local_4c);
          }
          local_30 = *(int **)(param_1 + 0x38);
          pppppppuVar5 = &local_2c;
          if (0xf < local_18) {
            pppppppuVar5 = local_2c;
          }
          pcVar2 = *(code **)(*local_30 + 0x18);
          pppppppuVar11 = &local_2c;
          if (0xf < local_18) {
            pppppppuVar11 = local_2c;
          }
          (*(code *)PTR_guard_check_icall_1035d810)
                    (iVar10,pppppppuVar11,(int)pppppppuVar5 + local_1c,&local_38,local_34,local_32,
                     &local_40);
          iVar3 = (*pcVar2)();
          uVar4 = local_1c;
          iVar1 = local_3c;
          if ((iVar3 == 0) || (iVar3 == 1)) {
            if (local_40 == local_34) goto code_r0x10233ef7;
            pppppppuVar5 = &local_2c;
            if (0xf < local_18) {
              pppppppuVar5 = local_2c;
            }
            for (iVar10 = (local_1c - local_38) + (int)pppppppuVar5; 0 < iVar10;
                iVar10 = iVar10 + -1) {
              _ungetc((int)*(char *)(iVar10 + -1 + local_38),*(FILE **)(iVar1 + 0x4c));
            }
          }
        }
LAB_10233f9e:
        FUN_10001fee();
      }
    }
  }
  else {
    *piVar8 = *piVar8 + -1;
    **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + 2;
  }
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
code_r0x10233ef7:
  pppppppuVar5 = &local_2c;
  if (0xf < local_18) {
    pppppppuVar5 = local_2c;
  }
  uVar9 = local_38 - (int)pppppppuVar5;
  if (local_1c < (uint)(local_38 - (int)pppppppuVar5)) {
    uVar9 = local_1c;
  }
  pppppppuVar5 = &local_2c;
  if (0xf < local_18) {
    pppppppuVar5 = local_2c;
  }
  piVar8 = (int *)(local_1c - uVar9);
  local_30 = piVar8;
  FUN_1025b2d0(pppppppuVar5,(int)pppppppuVar5 + uVar9,(int)piVar8 + 1);
  if ((((int *)uVar4 != piVar8) && (0xf < local_18)) && (DAT_103235d4 != '\0')) {
    uVar7 = local_18 + 8 + (int)local_2c & 0xfffffff8;
    uVar6 = uVar4 + 1 + (int)local_2c;
    uVar9 = (int)piVar8 + 1U + (int)local_2c;
    uVar4 = uVar7;
    if (uVar6 <= uVar7) {
      uVar4 = uVar6;
    }
    if (uVar7 < uVar9) {
      uVar9 = uVar7;
    }
    guard_check_icall(local_2c,uVar7,uVar4,uVar9);
    piVar8 = local_30;
  }
  param_1 = local_3c;
  local_1c = (uint)piVar8;
  local_30 = (int *)FUN_1026d9fa(*(undefined4 *)(local_3c + 0x4c));
  if (local_30 == (int *)0xffffffff) goto LAB_10233f9e;
  goto LAB_10233e50;
}

