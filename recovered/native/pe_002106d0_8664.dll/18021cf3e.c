/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021cf3e */

int FUN_18021cf3e(undefined8 param_1,longlong param_2,uint param_3,code *param_4,code *param_5,
                 undefined8 param_6)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_108 [32];
  longlong local_e8;
  int *local_e0;
  int local_cc;
  code *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  int local_ac;
  uint local_a8 [12];
  int local_78 [12];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_108;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  iVar7 = param_3 + 10;
  local_e0 = &local_ac;
  local_e8 = 0;
  puVar4 = (uint *)FUN_1801cc8d6(0,8,0,iVar7);
  *(uint **)(param_2 + 0x20) = puVar4;
  iVar3 = local_ac;
  if (local_ac == 0) {
    local_cc = iVar7;
    local_c0 = param_1;
    local_b8 = param_2;
    if (param_3 != 0) {
      uVar9 = 0;
      local_c8 = param_4;
      do {
        pcVar5 = (char *)(*param_4)(param_6,uVar9);
        if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
          FUN_18021d40c(pcVar5,uVar9,local_a8,local_78);
          uVar2 = FUN_18021ce18(pcVar5);
          if ((uVar2 & 0x7fffffff) != 0) {
            FUN_18021d479(uVar2,local_78);
            *puVar4 = uVar2;
            puVar4[1] = uVar9;
            puVar4 = puVar4 + 2;
          }
          param_4 = local_c8;
          if (param_5 != (code *)0x0) {
            (*param_5)(param_6,pcVar5);
            param_4 = local_c8;
          }
        }
        uVar9 = uVar9 + 1;
      } while (param_3 != uVar9);
    }
    lVar1 = local_b8;
    lVar6 = 0;
    do {
      if (*(int *)((longlong)local_78 + lVar6) == 1) {
        *puVar4 = *(uint *)((longlong)&DAT_18034c3e0 + lVar6);
        puVar4[1] = *(uint *)((longlong)local_a8 + lVar6);
        puVar4 = puVar4 + 2;
      }
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0x28);
    lVar6 = *(longlong *)(local_b8 + 0x20);
    uVar8 = (ulonglong)((longlong)puVar4 - lVar6) >> 3;
    uVar9 = (uint)uVar8;
    if (uVar9 == 0) {
      FUN_1801c9b65(local_c0,lVar6,local_cc);
      *(undefined8 *)(lVar1 + 0x20) = 0;
      iVar3 = 0xa3;
      if (local_ac != 0) {
        iVar3 = local_ac;
      }
    }
    else {
      if (uVar9 < param_3 >> 1) {
        local_e8 = lVar6;
        local_e0 = &local_ac;
        lVar6 = FUN_1801cc8d6(local_c0,8,local_cc,uVar8 & 0xffffffff);
        *(longlong *)(lVar1 + 0x20) = lVar6;
        local_ac = 0;
      }
      FUN_180289570(lVar6,uVar8 & 0xffffffff,8,&LAB_18021d49b);
      iVar3 = local_ac;
    }
    *(uint *)(lVar1 + 0x18) = uVar9;
  }
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_108)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_108);
  }
  return iVar3;
}

