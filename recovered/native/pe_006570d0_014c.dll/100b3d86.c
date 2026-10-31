/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b3d86 */

int * __thiscall FUN_100b3d86(int *param_1,char param_2)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined1 local_94 [32];
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_a0;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c48e0;
  local_1c = ExceptionList;
  local_34 = param_1 + 0x17;
  ExceptionList = &local_1c;
  FUN_100446d6();
  local_24 = param_1;
  if ((char)param_1[0x16] == '\x01') {
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0;
    local_14 = 3;
    FUN_1002218a();
    local_14 = 5;
    local_38 = local_24[1];
    iVar5 = *local_24;
    while (iVar5 != local_38) {
      local_40 = *(int *)(iVar5 + 0x1c);
      iVar4 = *(int *)(iVar5 + 0x18);
      local_3c = iVar5;
      while (iVar4 != local_40) {
        uVar3 = (*(int *)(iVar4 + 0x28) - *(int *)(iVar4 + 0x24) >> 3) * -0x55555555;
        local_44 = (*(int *)(iVar4 + 0x1c) - *(int *)(iVar4 + 0x18) >> 3) * -0x55555555;
        if (uVar3 < local_44) {
          local_44 = uVar3;
        }
        local_28 = iVar4;
        for (local_30 = 0; local_30 < local_44; local_30 = local_30 + 1) {
          iVar5 = *(int *)(local_28 + 0x18);
          if (param_2 == '\0') {
code_r0x100b3eb9:
            local_2c = local_30 * 3;
            local_14 = 5;
            FUN_1000334a(iVar5 + local_30 * 0x18);
            local_14 = 6;
            local_2c = local_2c * 8;
            FUN_1000334a(*(int *)(local_28 + 0x24) + local_2c);
            local_14 = 8;
            puVar2 = (uint *)FUN_100b51de(local_2c + *(int *)(local_28 + 0x18));
            if (puVar2 != &local_74) {
              FUN_10004e60();
              *(ulonglong *)(puVar2 + 4) = CONCAT44(uStack_60,local_64);
              *puVar2 = local_74;
              puVar2[1] = uStack_70;
              puVar2[2] = uStack_6c;
              puVar2[3] = uStack_68;
              local_64 = 0;
              uStack_60 = 0xf;
              local_74 = local_74 & 0xffffff00;
              FUN_10004e60();
              *(ulonglong *)(puVar2 + 10) = CONCAT44(uStack_48,local_4c);
              puVar2[6] = local_5c;
              puVar2[7] = uStack_58;
              puVar2[8] = uStack_54;
              puVar2[9] = uStack_50;
              local_4c = 0;
              uStack_48 = 0xf;
              local_5c = local_5c & 0xffffff00;
            }
            local_14 = 0xffffffff;
            FUN_10001fee();
            FUN_10001fee();
          }
          else {
            cVar1 = FUN_1001bb3a(local_30 * 0x18 + *(int *)(local_28 + 0x24));
            if (cVar1 == '\0') {
              iVar5 = *(int *)(local_28 + 0x18);
              goto code_r0x100b3eb9;
            }
          }
        }
        iVar4 = local_28 + 0x30;
      }
      iVar5 = local_3c + 0x44;
    }
    local_14 = 5;
    if (local_24 + 0xb != &local_a0) {
      FUN_100b589a(local_a0,(local_9c - local_a0 >> 4) * -0x55555555);
    }
    FUN_100b5be4(local_94);
    *(undefined1 *)(local_24 + 0x16) = 0;
    local_14 = 0xffffffff;
    FUN_100b526e();
  }
  local_14 = 0xffffffff;
  piVar6 = local_24 + 0xb;
  FUN_1022c200(local_34);
  ExceptionList = local_1c;
  return piVar6;
}

