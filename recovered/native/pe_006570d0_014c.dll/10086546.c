/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10086546 */

undefined1 * __thiscall
FUN_10086546(undefined4 *param_1,undefined1 *param_2,byte *param_3,char param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  uint *puStack_44;
  undefined1 *local_40;
  undefined4 *local_3c;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_40;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c3260;
  local_20 = ExceptionList;
  uVar5 = param_1[7];
  uVar6 = uVar5 & 0x1f;
  local_40 = (undefined1 *)0x80000000;
  if (uVar6 != 0) {
    local_40 = (undefined1 *)(1 << ((char)uVar6 - 1U & 0x1f));
  }
  iVar8 = (uVar5 >> 5) * 4 + param_1[4];
  uVar5 = (int)uVar5 >> 0x1f & 0xe0000000;
  puVar7 = (uint *)(iVar8 + uVar5 + (uVar6 - 1 >> 5) * 4);
  if (uVar6 == 0) {
    puVar7 = (uint *)((uVar5 - 4) + iVar8);
  }
  if ((*puVar7 & (uint)local_40) == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    return param_2;
  }
  puStack_44 = (uint *)(uint)*param_3;
  uStack_48 = 0x100865e4;
  ExceptionList = &local_20;
  local_3c = param_1;
  FUN_10080e50();
  local_18 = 2;
  if (param_4 == '\0') {
    iStack_4c = (int)(local_3c[2] - local_3c[1]) >> 2;
    uStack_48 = 5;
    local_50 = 0x1008660a;
    puStack_44 = &local_38;
    cVar4 = FUN_100510b2();
    if (cVar4 == '\0') {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 4) = 0;
      goto code_r0x100867c0;
    }
  }
  puVar3 = local_3c;
  puStack_44 = &local_38;
  if (local_3c[1] == local_3c[2]) {
    local_24 = (undefined1 *)&local_50;
    local_40 = (undefined1 *)&local_50;
    local_50 = local_38;
    iStack_4c = iStack_34;
    uStack_48 = uStack_30;
    puStack_44 = (uint *)uStack_2c;
    local_38 = local_38 & 0xffffff00;
    uStack_2c = 0;
    uStack_30 = 0;
    local_18 = 0xffffffff;
    FUN_10084774();
    uVar2 = *puVar3;
    *param_2 = 1;
    *(undefined4 *)(param_2 + 4) = uVar2;
    local_24 = (undefined1 *)&local_40;
  }
  else {
    pcVar1 = *(char **)(local_3c[2] + -4);
    if (pcVar1 == (char *)0x0) {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 4) = 0;
    }
    else if (*pcVar1 == '\x02') {
      uStack_48 = 0x10086641;
      FUN_1008012c();
      iVar8 = *(int *)(*(int *)(*(int *)(local_3c[2] + -4) + 8) + 4);
      *param_2 = 1;
      *(int *)(param_2 + 4) = iVar8 + -0x10;
    }
    else {
      uVar5 = local_3c[0xb];
      uVar6 = uVar5 & 0x1f;
      local_40 = (undefined1 *)0x80000000;
      if (uVar6 != 0) {
        local_40 = (undefined1 *)(1 << ((char)uVar6 - 1U & 0x1f));
      }
      iVar8 = (uVar5 >> 5) * 4 + local_3c[8];
      uVar5 = (int)uVar5 >> 0x1f & 0xe0000000;
      puVar7 = (uint *)(iVar8 + uVar5 + (uVar6 - 1 >> 5) * 4);
      if (uVar6 == 0) {
        puVar7 = (uint *)((uVar5 - 4) + iVar8);
      }
      uVar5 = *puVar7;
      puStack_44 = (uint *)0x10086750;
      FUN_1005103c();
      puVar3 = local_3c;
      if (((uint)local_40 & uVar5) == 0) {
        *param_2 = 0;
        *(undefined4 *)(param_2 + 4) = 0;
      }
      else {
        local_24 = (undefined1 *)&local_50;
        local_40 = (undefined1 *)&local_50;
        local_50 = local_38;
        iStack_4c = iStack_34;
        uStack_48 = uStack_30;
        puStack_44 = (uint *)uStack_2c;
        local_38 = local_38 & 0xffffff00;
        uStack_2c = 0;
        uStack_30 = 0;
        local_18 = 0xffffffff;
        FUN_10084774();
        *param_2 = 1;
        *(undefined4 *)(param_2 + 4) = puVar3[0xc];
        local_24 = (undefined1 *)&local_40;
      }
    }
  }
code_r0x100867c0:
  local_18 = 0xffffffff;
  puStack_44 = (uint *)0x100867cf;
  FUN_1007f222();
  ExceptionList = local_20;
  return param_2;
}

