/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180074dd4 */

uint FUN_180074dd4(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *******pppppppcVar6;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong uVar9;
  byte *local_88;
  longlong local_80;
  char ******local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  byte local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (**(longlong **)(param_1 + 0x38) != 0) {
    iVar3 = **(int **)(param_1 + 0x50);
    if (0 < iVar3) {
      **(int **)(param_1 + 0x50) = iVar3 + -1;
      pbVar1 = (byte *)**(longlong **)(param_1 + 0x38);
      **(longlong **)(param_1 + 0x38) = (longlong)(pbVar1 + 1);
      return (uint)*pbVar1;
    }
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      iVar3 = *(int *)(param_1 + 0x90);
      lVar2 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar2;
      **(longlong **)(param_1 + 0x38) = lVar2;
      **(int **)(param_1 + 0x50) = iVar3 - (int)lVar2;
    }
    if (*(longlong *)(param_1 + 0x68) == 0) {
      uVar5 = FUN_180284d5c(*(undefined8 *)(param_1 + 0x80));
      uVar4 = uVar5 & 0xff;
      if (uVar5 == 0xffffffff) {
        uVar4 = 0xffffffff;
      }
    }
    else {
      local_78 = (char ******)0x0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0xf;
code_r0x000180074e9f:
      iVar3 = FUN_180284d5c(*(undefined8 *)(param_1 + 0x80));
      if (iVar3 == -1) {
        uVar4 = 0xffffffff;
      }
      else {
        FUN_180003bf2(&local_78,iVar3);
        pppppppcVar6 = &local_78;
        if (0xf < local_60) {
          pppppppcVar6 = (char *******)local_78;
        }
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                          (*(longlong **)(param_1 + 0x68),param_1 + 0x74,pppppppcVar6,
                           (char *)((longlong)pppppppcVar6 + local_68),&local_80,&local_49,&local_48
                           ,&local_88);
        if (uVar4 < 2) {
          if (local_88 == &local_49) goto code_r0x000180074f0d;
          pppppppcVar6 = (char *******)local_78;
          if (local_60 < 0x10) {
            pppppppcVar6 = &local_78;
          }
          for (pcVar8 = (char *)((longlong)pppppppcVar6 + (local_68 - local_80));
              0 < (longlong)pcVar8; pcVar8 = pcVar8 + -1) {
            ungetc((int)pcVar8[local_80 + -1],*(FILE **)(param_1 + 0x80));
          }
          uVar4 = (uint)local_49;
        }
        else if (uVar4 == 3) {
          pppppppcVar6 = (char *******)local_78;
          if (local_60 < 0x10) {
            pppppppcVar6 = &local_78;
          }
          uVar4 = (uint)*(char *)pppppppcVar6;
        }
        else {
          uVar4 = 0xffffffff;
        }
      }
      FUN_180001ef2(&local_78);
    }
  }
  return uVar4;
code_r0x000180074f0d:
  pppppppcVar6 = &local_78;
  if (0xf < local_60) {
    pppppppcVar6 = (char *******)local_78;
  }
  uVar7 = local_80 - (longlong)pppppppcVar6;
  if (local_68 < (ulonglong)(local_80 - (longlong)pppppppcVar6)) {
    uVar7 = local_68;
  }
  uVar9 = local_68 - uVar7;
  FUN_1802a82f0(pppppppcVar6,(char *)((longlong)pppppppcVar6 + uVar7),uVar9 + 1);
  local_68 = uVar9;
  goto code_r0x000180074e9f;
}

