/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001e82a */

void __thiscall FUN_1001e82a(int param_1,byte param_2,byte param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  undefined1 local_7c [24];
  undefined1 local_64 [24];
  undefined1 local_4c [24];
  int local_34;
  undefined4 *local_30;
  int local_2c;
  uint *local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  bVar2 = param_3;
  bVar7 = param_2;
  local_20 = local_7c;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059500;
  local_1c = ExceptionList;
  local_2c = *(int *)(param_1 + 4);
  ExceptionList = &local_1c;
  if ((*(byte *)(param_1 + 9) & 8) == 0) {
    if (param_2 <= param_3) {
      if (*(int *)(local_2c + 0x18) == 0) {
        local_20 = local_7c;
        puVar3 = (undefined4 *)FUN_10228350(0x20);
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(undefined4 **)(local_2c + 0x18) = puVar3;
      }
      uVar4 = (uint)bVar7;
      do {
        pbVar1 = (byte *)(*(int *)(local_2c + 0x18) + (uVar4 >> 3));
        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar4 & 7));
        uVar4 = uVar4 + 1;
      } while (bVar2 + 1 != uVar4);
      ExceptionList = local_1c;
      return;
    }
    local_20 = local_7c;
                    /* WARNING: Subroutine does not return */
    FUN_10228760(8);
  }
  FUN_1001ba52(local_7c,&param_2,&stack0x00000005);
  local_14 = 0;
  local_34 = param_1;
  FUN_1001ba52(local_64,&param_3,&stack0x00000009);
  local_14 = 1;
  iVar5 = FUN_1001baf4(local_64);
  if (0 < iVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_10228760(8);
  }
  puVar6 = (uint *)0x0;
  while (puVar6 < (uint *)0x100) {
    local_21 = SUB41(puVar6,0);
    local_14 = 1;
    local_28 = puVar6;
    FUN_1001ba52(local_4c,&local_21,&local_20);
    local_14 = 2;
    iVar5 = FUN_1001baf4(local_4c);
    if ((iVar5 < 1) && (iVar5 = FUN_1001baf4(local_64), iVar5 < 1)) {
      puVar3 = *(undefined4 **)(local_2c + 0x18);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)FUN_10228350(0x20);
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(undefined4 **)(local_2c + 0x18) = puVar3;
        local_30 = puVar3;
      }
      pbVar1 = (byte *)((int)puVar3 + ((uint)local_28 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << ((byte)local_28 & 7));
    }
    local_14 = 0xffffffff;
    FUN_10001fee();
    puVar6 = (uint *)((int)local_28 + 1);
  }
  local_14 = 0xffffffff;
  FUN_10001fee();
  FUN_10001fee();
  puVar6 = *(uint **)(local_2c + 0x20);
  if (puVar6 == (uint *)0x0) {
    puVar6 = (uint *)FUN_10228350(0xc);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    local_14 = 0xffffffff;
    *(uint **)(local_2c + 0x20) = puVar6;
    local_28 = puVar6;
  }
  else {
    uVar4 = puVar6[1];
    bVar7 = param_2;
    if (uVar4 < *puVar6) goto code_r0x1001ea6c;
  }
  bVar7 = param_2;
  FUN_1001f242(1);
  uVar4 = puVar6[1];
code_r0x1001ea6c:
  bVar2 = param_3;
  puVar6[1] = uVar4 + 1;
  *(byte *)(puVar6[2] + uVar4) = bVar7;
  puVar6 = *(uint **)(local_2c + 0x20);
  uVar4 = puVar6[1];
  if (*puVar6 <= uVar4) {
    FUN_1001f242(1);
    uVar4 = puVar6[1];
  }
  puVar6[1] = uVar4 + 1;
  *(byte *)(puVar6[2] + uVar4) = bVar2;
  ExceptionList = local_1c;
  return;
}

