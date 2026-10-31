/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c6401 */

char __fastcall
FUN_101c6401(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 extraout_EDX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_b8 [3];
  char local_b5;
  int local_b4;
  uint local_b0;
  undefined4 *local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0 [3];
  int local_94;
  int local_80 [9];
  undefined4 local_5c [9];
  int local_38 [9];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_b8;
  local_a8 = *param_1;
  local_ac = param_1;
  FUN_101c4a0d(param_1,param_2,*(undefined4 *)(param_5 + 0xc),local_38,local_5c,local_80);
  local_b0 = 0;
  local_b4 = 2;
  iVar5 = 0;
  do {
    cVar2 = FUN_101c69bd();
    if (cVar2 == '\0') {
LAB_101c647b:
      uVar4 = local_b0;
      if (local_80[iVar5] == 0) {
        local_a0[0] = 4;
        local_94 = local_38[iVar5];
        if (local_94 == 0) {
          local_94 = *(int *)(param_5 + 0xc);
        }
        local_b5 = cVar2;
        local_b4 = FUN_101c091d(local_ac,local_a0,&local_a4);
        uVar1 = local_a4;
        uVar6 = local_b0 & 0xff;
        uVar4 = uVar6;
        if ((char)local_b4 == 'Q') {
          uVar4 = 1;
        }
        if (local_b5 == '\0') {
          uVar4 = uVar6;
        }
        if (local_b4 == 0) {
          iVar3 = FUN_101c62b2(local_5c[iVar5],param_3,param_4);
          FUN_101c0a65(uVar1,0);
          if (iVar3 == 0) {
            local_b4 = 0;
            break;
          }
          uVar4 = uVar6;
          local_b4 = iVar3;
          if (local_b5 != '\0') {
            uVar4 = 1;
          }
        }
      }
    }
    else {
      uVar4 = CONCAT31((int3)((uint)extraout_EDX >> 8),1);
      if ((char)local_b0 == '\0') goto LAB_101c647b;
    }
    iVar5 = iVar5 + 1;
    local_b0 = uVar4;
  } while (iVar5 != 9);
  uVar1 = local_a8;
  iVar5 = 0;
  do {
    if (local_38[iVar5] != 0) {
      FUN_101c0017(uVar1,local_38[iVar5]);
      local_38[iVar5] = 0;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 9);
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return (local_b4 != 0) * '\x02';
}

