/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007462c */

uint __fastcall FUN_1007462c(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char ******ppppppcVar5;
  char *pcVar6;
  uint uVar7;
  byte *local_50;
  char *****local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint local_3c;
  uint local_38;
  int local_34;
  char *local_30;
  int local_2c;
  uint local_28;
  byte local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_50;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2a60;
  local_1c = ExceptionList;
  if (**(int **)(param_1 + 0x1c) != 0) {
    iVar3 = **(int **)(param_1 + 0x2c);
    if (0 < iVar3) {
      **(int **)(param_1 + 0x2c) = iVar3 + -1;
      pbVar1 = (byte *)**(int **)(param_1 + 0x1c);
      **(int **)(param_1 + 0x1c) = (int)(pbVar1 + 1);
      return (uint)*pbVar1;
    }
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    ExceptionList = &local_1c;
    if (**(int **)(param_1 + 0xc) == param_1 + 0x3c) {
      iVar3 = *(int *)(param_1 + 0x50);
      iVar2 = *(int *)(param_1 + 0x54);
      **(int **)(param_1 + 0xc) = iVar3;
      **(int **)(param_1 + 0x1c) = iVar3;
      **(int **)(param_1 + 0x2c) = iVar2 - iVar3;
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      local_3c = 0;
      local_4c = (char *****)0x0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      local_38 = 0xf;
      local_14 = 0;
      local_30 = (char *)(param_1 + 0x40);
      local_28 = 0xffffffff;
      local_2c = param_1;
      local_20 = (undefined1 *)&local_50;
      while( true ) {
        iVar3 = FUN_1026d9fa(*(undefined4 *)(local_2c + 0x4c));
        if (iVar3 == -1) goto code_r0x10074807;
        FUN_10003d9a((int)(char)iVar3);
        ppppppcVar5 = &local_4c;
        if (0xf < local_38) {
          ppppppcVar5 = (char ******)local_4c;
        }
        uVar4 = (**(code **)(**(int **)(local_2c + 0x38) + 0x18))
                          (local_30,ppppppcVar5,(char *)((int)ppppppcVar5 + local_3c),&local_34,
                           &local_21,&local_20,&local_50);
        if (1 < uVar4) {
          if (uVar4 == 3) {
            ppppppcVar5 = (char ******)local_4c;
            if (local_38 < 0x10) {
              ppppppcVar5 = &local_4c;
            }
            local_28 = (uint)*(char *)ppppppcVar5;
          }
          else {
            local_28 = 0xffffffff;
          }
          goto code_r0x10074807;
        }
        if (local_50 != &local_21) break;
        ppppppcVar5 = &local_4c;
        if (0xf < local_38) {
          ppppppcVar5 = (char ******)local_4c;
        }
        uVar4 = local_34 - (int)ppppppcVar5;
        if (local_3c < (uint)(local_34 - (int)ppppppcVar5)) {
          uVar4 = local_3c;
        }
        uVar7 = local_3c - uVar4;
        FUN_1025b2d0(ppppppcVar5,(char *)((int)ppppppcVar5 + uVar4),uVar7 + 1);
        local_3c = uVar7;
      }
      ppppppcVar5 = (char ******)local_4c;
      if (local_38 < 0x10) {
        ppppppcVar5 = &local_4c;
      }
      pcVar6 = (char *)((int)ppppppcVar5 + (local_3c - local_34));
      while (0 < (int)pcVar6) {
        local_30 = pcVar6 + -1;
        _ungetc((int)pcVar6[local_34 + -1],*(FILE **)(local_2c + 0x4c));
        pcVar6 = local_30;
      }
      local_28 = (uint)local_21;
code_r0x10074807:
      local_14 = 0xffffffff;
      FUN_10001fee();
      ExceptionList = local_1c;
      return local_28;
    }
    uVar7 = FUN_1026d9fa(*(undefined4 *)(param_1 + 0x4c));
    uVar4 = uVar7 & 0xff;
    if (uVar7 == 0xffffffff) {
      uVar4 = 0xffffffff;
    }
  }
  ExceptionList = local_1c;
  return uVar4;
}

