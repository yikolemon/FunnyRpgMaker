/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00422489 */

char __fastcall FUN_00422489(int *param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_b8 [3];
  char local_b5;
  int local_b4;
  uint local_b0;
  int *local_ac;
  int local_a8;
  int *local_a4;
  uint local_a0 [3];
  int local_94;
  int local_80 [9];
  uint local_5c [9];
  int local_38 [9];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)auStack_b8;
  local_a8 = *param_1;
  local_ac = param_1;
  FUN_00420a85(param_1,param_2,*(undefined4 *)(param_5 + 0xc),(int)local_38,(int)local_5c,
               (int)local_80);
  local_b0 = 0;
  local_b4 = 2;
  iVar4 = 0;
  do {
    uVar2 = FUN_00422a45(iVar4);
    if ((char)uVar2 == '\0') {
LAB_00422503:
      uVar3 = local_b0;
      if (local_80[iVar4] == 0) {
        local_a0[0] = 4;
        local_94 = local_38[iVar4];
        if (local_94 == 0) {
          local_94 = *(int *)(param_5 + 0xc);
        }
        local_b5 = (char)uVar2;
        local_b4 = FUN_0041cf0d(local_ac,local_a0,(uint *)&local_a4);
        piVar1 = local_a4;
        uVar5 = local_b0 & 0xff;
        uVar3 = uVar5;
        if ((char)local_b4 == 'Q') {
          uVar3 = 1;
        }
        if (local_b5 == '\0') {
          uVar3 = uVar5;
        }
        if (local_b4 == 0) {
          iVar6 = FUN_0042233a(local_ac,local_a4,local_5c[iVar4],param_3,param_4);
          FUN_0041d055((int)piVar1,0);
          if (iVar6 == 0) {
            local_b4 = 0;
            break;
          }
          uVar3 = uVar5;
          local_b4 = iVar6;
          if (local_b5 != '\0') {
            uVar3 = 1;
          }
        }
      }
    }
    else {
      uVar3 = CONCAT31((int3)((uint)extraout_EDX >> 8),1);
      if ((char)local_b0 == '\0') goto LAB_00422503;
    }
    iVar4 = iVar4 + 1;
    local_b0 = uVar3;
  } while (iVar4 != 9);
  iVar4 = local_a8;
  iVar6 = 0;
  do {
    if (local_38[iVar6] != 0) {
      FUN_0041c607(iVar4,local_38[iVar6]);
      local_38[iVar6] = 0;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 9);
  if (DAT_0050e8c0 != (local_14 ^ (uint)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)auStack_b8);
  }
  return (local_b4 != 0) * '\x02';
}

