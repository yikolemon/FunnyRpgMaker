/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00482880 */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00482880(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  uint *******pppppppuVar6;
  int *piVar7;
  int iVar8;
  uint *******pppppppuVar9;
  uint uVar10;
  undefined1 *local_40;
  int local_3c;
  int local_38;
  int *local_34;
  undefined1 local_2d;
  uint *******local_2c;
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
  puStack_c = &DAT_004a71cd;
  local_10 = ExceptionList;
  uVar4 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar1 = **(uint **)(param_1 + 0x1c);
  local_3c = param_1;
  local_14 = uVar4;
  if ((uVar1 == 0) || (piVar7 = *(int **)(param_1 + 0x2c), *piVar7 + uVar1 <= uVar1)) {
    if (*(int *)(param_1 + 0x4c) != 0) {
      if (**(int **)(param_1 + 0xc) == param_1 + 0x3c) {
        iVar8 = *(int *)(param_1 + 0x54);
        iVar2 = *(int *)(param_1 + 0x50);
        **(int **)(param_1 + 0xc) = iVar2;
        **(int **)(param_1 + 0x1c) = iVar2;
        **(int **)(param_1 + 0x2c) = iVar8 - iVar2;
      }
      if (*(int *)(param_1 + 0x38) == 0) {
        FUN_00490b0a(*(FILE **)(param_1 + 0x4c));
      }
      else {
        local_1c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        local_18 = 0xf;
        local_2c = (uint *******)0x0;
        local_8 = 0;
        local_34 = (int *)FUN_00490b0a(*(FILE **)(param_1 + 0x4c));
        if (local_34 != (int *)0xffffffff) {
          iVar8 = param_1 + 0x40;
LAB_00482960:
          uVar1 = local_1c;
          if (local_1c < local_18) {
            uVar10 = local_1c + 1;
            FUN_0047fb40(&local_2c,local_1c,uVar10);
            pppppppuVar6 = (uint *******)&local_2c;
            if (0xf < local_18) {
              pppppppuVar6 = local_2c;
            }
            local_1c = uVar10;
            *(undefined1 *)((int)pppppppuVar6 + uVar1) = (char)local_34;
            ((undefined1 *)((int)pppppppuVar6 + uVar1))[1] = 0;
          }
          else {
            FUN_00480e10(&local_2c,1,local_40,(char)local_34);
          }
          local_34 = *(int **)(param_1 + 0x38);
          pppppppuVar6 = (uint *******)&local_2c;
          if (0xf < local_18) {
            pppppppuVar6 = local_2c;
          }
          pcVar3 = *(code **)(*local_34 + 0x18);
          pppppppuVar9 = (uint *******)&local_2c;
          if (0xf < local_18) {
            pppppppuVar9 = local_2c;
          }
          (*(code *)PTR_guard_check_icall_00508898)
                    (iVar8,pppppppuVar9,(int)pppppppuVar6 + local_1c,&local_38,&local_2d,&local_2c,
                     &local_40,uVar4);
          iVar5 = (*pcVar3)();
          uVar1 = local_1c;
          iVar2 = local_3c;
          if ((iVar5 == 0) || (iVar5 == 1)) {
            if (local_40 == &local_2d) goto code_r0x00482a07;
            pppppppuVar6 = (uint *******)&local_2c;
            if (0xf < local_18) {
              pppppppuVar6 = local_2c;
            }
            for (iVar8 = (local_1c - local_38) + (int)pppppppuVar6; 0 < iVar8; iVar8 = iVar8 + -1) {
              _ungetc((int)*(char *)(iVar8 + -1 + local_38),*(FILE **)(iVar2 + 0x4c));
            }
          }
        }
LAB_00482aa6:
        FUN_0040230a((int *)&local_2c);
      }
    }
  }
  else {
    *piVar7 = *piVar7 + -1;
    **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + 1;
  }
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&stack0xfffffffc);
code_r0x00482a07:
  pppppppuVar6 = (uint *******)&local_2c;
  if (0xf < local_18) {
    pppppppuVar6 = local_2c;
  }
  uVar10 = local_38 - (int)pppppppuVar6;
  if (local_1c < (uint)(local_38 - (int)pppppppuVar6)) {
    uVar10 = local_1c;
  }
  pppppppuVar6 = (uint *******)&local_2c;
  if (0xf < local_18) {
    pppppppuVar6 = local_2c;
  }
  piVar7 = (int *)(local_1c - uVar10);
  local_34 = piVar7;
  FUN_004878c0((uint *)pppppppuVar6,(uint *)((int)pppppppuVar6 + uVar10),(int)piVar7 + 1);
  if ((((int *)uVar1 != piVar7) && (0xf < local_18)) && (DAT_004f7b40 != '\0')) {
    guard_check_icall();
    piVar7 = local_34;
  }
  param_1 = local_3c;
  local_1c = (uint)piVar7;
  local_34 = (int *)FUN_00490b0a(*(FILE **)(local_3c + 0x4c));
  if (local_34 == (int *)0xffffffff) goto LAB_00482aa6;
  goto LAB_00482960;
}

