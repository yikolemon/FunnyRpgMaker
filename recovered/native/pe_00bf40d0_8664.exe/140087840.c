/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140087840 */

/* WARNING: Type propagation algorithm not settling */

void FUN_140087840(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *******pppppppuVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 **local_80;
  undefined1 local_68 [2];
  undefined1 local_66 [2];
  byte local_64;
  longlong local_60;
  undefined1 *local_58;
  undefined8 *******local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_b8;
  uVar3 = **(ulonglong **)(param_1 + 0x38);
  if (uVar3 != 0) {
    iVar2 = **(int **)(param_1 + 0x50);
    if (uVar3 < uVar3 + (longlong)iVar2 * 2) {
      **(int **)(param_1 + 0x50) = iVar2 + -1;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + 2;
      goto LAB_140087b0f;
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      lVar6 = *(longlong *)(param_1 + 0x90);
      lVar1 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar1;
      **(longlong **)(param_1 + 0x38) = lVar1;
      **(undefined4 **)(param_1 + 0x50) = (int)(lVar6 - lVar1 >> 1);
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
      uStack_48 = 0;
      local_40 = 0;
      local_38 = 0xf;
      local_50 = (undefined8 *******)0x0;
      uVar3 = FUN_140097fdc(&(*(FILE **)(param_1 + 0x80))->_ptr);
      iVar2 = (int)uVar3;
      uVar4 = local_40;
      while( true ) {
        local_40 = uVar4;
        if (iVar2 == -1) goto LAB_140087b03;
        if (uVar4 < local_38) {
          if (((uVar4 != uVar4 + 1) && (0xf < local_38)) && (DAT_14010b500 != '\0')) {
            _guard_check_icall();
          }
          pppppppuVar5 = &local_50;
          if (0xf < local_38) {
            pppppppuVar5 = local_50;
          }
          local_40 = uVar4 + 1;
          *(char *)((longlong)pppppppuVar5 + uVar4) = (char)uVar3;
          *(undefined1 *)((longlong)pppppppuVar5 + uVar4 + 1) = 0;
        }
        else {
          FUN_140088530(&local_50,1,(ulonglong)local_64,(char)uVar3);
        }
        pppppppuVar5 = local_50;
        if (local_38 < 0x10) {
          pppppppuVar5 = &local_50;
        }
        local_80 = &local_58;
        local_88 = local_66;
        local_90 = local_68;
        local_98 = &local_60;
        iVar2 = (*(code *)PTR__guard_dispatch_icall_1401200f0)
                          (*(undefined8 *)(param_1 + 0x68),param_1 + 0x74,pppppppuVar5,
                           local_40 + (longlong)pppppppuVar5);
        uVar3 = local_40;
        if ((iVar2 != 0) && (iVar2 != 1)) goto LAB_140087b03;
        if (local_58 != local_68) break;
        pppppppuVar5 = local_50;
        if (local_38 < 0x10) {
          pppppppuVar5 = &local_50;
        }
        uVar4 = local_60 - (longlong)pppppppuVar5;
        if (local_40 < (ulonglong)(local_60 - (longlong)pppppppuVar5)) {
          uVar4 = local_40;
        }
        uVar7 = local_40 - uVar4;
        FUN_1400b3550(pppppppuVar5,(undefined8 *)(uVar4 + (longlong)pppppppuVar5),uVar7 + 1);
        if (((uVar3 != uVar7) && (0xf < local_38)) && (DAT_14010b500 != '\0')) {
          _guard_check_icall();
        }
        local_40 = uVar7;
        uVar3 = FUN_140097fdc(*(undefined8 **)(param_1 + 0x80));
        iVar2 = (int)uVar3;
        uVar4 = local_40;
      }
      pppppppuVar5 = &local_50;
      if (0xf < local_38) {
        pppppppuVar5 = local_50;
      }
      lVar6 = (local_40 - local_60) + (longlong)pppppppuVar5;
      while (0 < lVar6) {
        lVar6 = lVar6 + -1;
        ungetc((int)*(char *)(lVar6 + local_60),*(FILE **)(param_1 + 0x80));
      }
LAB_140087b03:
      FUN_1400021ea((longlong *)&local_50);
      goto LAB_140087b0f;
    }
    fgetwc(*(FILE **)(param_1 + 0x80));
  }
LAB_140087b0f:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_b8);
}

