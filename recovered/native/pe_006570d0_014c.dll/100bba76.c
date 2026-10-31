/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bba76 */

void FUN_100bba76(void)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 ****ppppuVar4;
  int iVar5;
  undefined4 ***pppuVar6;
  uint uVar7;
  int local_70 [2];
  DWORD local_68;
  undefined4 ***local_64 [4];
  undefined4 local_54;
  uint local_50;
  undefined4 ***local_4c [5];
  uint local_38;
  int local_34 [2];
  uint local_2c;
  uint local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_70;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1d60;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10024328();
  local_14 = 0;
  for (local_28 = 0; local_28 < 2; local_28 = local_28 + 1) {
    if (DAT_1039ca04 != DAT_1039ca00) {
      if (*(int *)(**(int **)(local_24 + 4) + 0x10 + local_28 * 0x18) != 0) {
        piVar3 = (int *)(**(int **)(local_24 + 4) + local_28 * 0x18);
        if (0xf < (uint)piVar3[5]) {
          piVar3 = (int *)*piVar3;
        }
        local_14 = 0;
        local_2c = local_28 * 3;
        FUN_10001f66(piVar3);
        local_14 = 2;
        ppppuVar4 = local_4c;
        if (0xf < local_38) {
          ppppuVar4 = (undefined4 ****)local_4c[0];
        }
        FUN_1005bef2(local_64,ppppuVar4);
        local_14 = 3;
        FUN_10062474();
        cVar2 = FUN_1001bb3a(local_64);
        if (cVar2 == '\0') {
          FUN_100bbdea(local_70,local_64,local_4c);
          ppppuVar4 = local_64;
          if (0xf < local_50) {
            ppppuVar4 = (undefined4 ****)local_64[0];
          }
          FUN_100b85e2(ppppuVar4,local_54);
          local_68 = GetCurrentThreadId();
          FUN_100bbf90(local_70,&local_68);
          *(undefined1 *)(local_70[0] + 0xc) = 1;
        }
        local_14 = 0xffffffff;
        FUN_10001fee();
        FUN_10001fee();
      }
    }
  }
  puVar1 = *(undefined4 **)(*(int *)(local_24 + 8) + 0x14);
  FUN_100bc1a3(*puVar1,puVar1[1]);
  local_14 = 0;
  local_64[0] = (undefined4 ***)GetCurrentThreadId();
  FUN_100bbf90(local_4c,local_64);
  *(undefined1 *)(local_4c[0] + 3) = 0;
  uVar7 = 0;
  while (uVar7 < 2) {
    iVar5 = **(int **)(local_24 + 4);
    local_28 = uVar7 * 3;
    if (*(uint *)(iVar5 + 0x14 + uVar7 * 0x18) < 0x10) {
      local_4c[0] = (undefined4 ***)(iVar5 + uVar7 * 0x18);
    }
    else {
      local_4c[0] = *(undefined4 ****)(iVar5 + uVar7 * 0x18);
    }
    local_14 = 0;
    local_2c = uVar7;
    cVar2 = FUN_100bbd8e(local_4c);
    if (cVar2 != '\0') {
      iVar5 = **(int **)(local_24 + 4);
      if (*(uint *)(iVar5 + 0x14 + local_28 * 8) < 0x10) {
        iVar5 = iVar5 + local_28 * 8;
      }
      else {
        iVar5 = *(int *)(iVar5 + local_28 * 8);
      }
      FUN_10001f66(iVar5);
      local_14 = 1;
      FUN_100bc216(local_64,local_4c);
      if (local_64[0][0xf] < (undefined4 **)0x10) {
        pppuVar6 = local_64[0] + 10;
      }
      else {
        pppuVar6 = (undefined4 ***)local_64[0][10];
      }
      FUN_100b85e2(pppuVar6,local_64[0][0xe]);
      local_14 = 0xffffffff;
      FUN_10001fee();
    }
    uVar7 = local_2c + 1;
  }
  local_14 = 0xffffffff;
  FUN_100243fc(local_34,*(undefined4 *)(local_34[0] + 4));
  FUN_102283a0(local_34[0],0x40);
  ExceptionList = local_1c;
  return;
}

