/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100be00e */

void FUN_100be00e(void)

{
  char cVar1;
  undefined4 ****ppppuVar2;
  int iVar3;
  undefined4 ***pppuVar4;
  uint uVar5;
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
  local_18 = &LAB_100c1dc0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10024328();
  for (local_28 = 0; local_28 < 2; local_28 = local_28 + 1) {
    if ((DAT_1039ca04 != DAT_1039ca00) &&
       (*(int *)(**(int **)(local_24 + 4) + 0x14 + local_28 * 0x1c) != 0)) {
      local_14 = 0;
      local_2c = local_28 * 0x1c;
      FUN_10001f66();
      local_14 = 2;
      ppppuVar2 = local_4c;
      if (0xf < local_38) {
        ppppuVar2 = (undefined4 ****)local_4c[0];
      }
      FUN_1005bef2(local_64,ppppuVar2);
      local_14 = 3;
      FUN_10062474();
      cVar1 = FUN_1001bb3a();
      if (cVar1 == '\0') {
        FUN_100bbdea();
        ppppuVar2 = local_64;
        if (0xf < local_50) {
          ppppuVar2 = (undefined4 ****)local_64[0];
        }
        FUN_100b9f36(ppppuVar2,local_54);
        local_68 = GetCurrentThreadId();
        FUN_100bbf90(local_70,&local_68);
        *(undefined1 *)(local_70[0] + 0xc) = 1;
      }
      local_14 = 0xffffffff;
      FUN_10001fee();
      FUN_10001fee();
    }
  }
  iVar3 = *(int *)(local_24 + 8);
  local_14 = 0;
  (*DAT_1039caf0)((int)**(char **)(iVar3 + 4),**(undefined8 **)(iVar3 + 8),
                  **(undefined8 **)(iVar3 + 0xc));
  local_64[0] = (undefined4 ***)GetCurrentThreadId();
  FUN_100bbf90(local_4c,local_64);
  *(undefined1 *)(local_4c[0] + 3) = 0;
  uVar5 = 0;
  while (uVar5 < 2) {
    iVar3 = **(int **)(local_24 + 4);
    local_28 = uVar5 * 0x1c;
    if (*(uint *)(iVar3 + 0x18 + local_28) < 0x10) {
      local_4c[0] = (undefined4 ***)(iVar3 + local_28 + 4);
    }
    else {
      local_4c[0] = *(undefined4 ****)(iVar3 + 4 + local_28);
    }
    local_14 = 0;
    local_2c = uVar5;
    cVar1 = FUN_100bbd8e(local_4c);
    if (cVar1 != '\0') {
      iVar3 = **(int **)(local_24 + 4);
      if (*(uint *)(iVar3 + 0x18 + local_28) < 0x10) {
        iVar3 = iVar3 + local_28 + 4;
      }
      else {
        iVar3 = *(int *)(iVar3 + 4 + local_28);
      }
      FUN_10001f66(iVar3);
      local_14 = 1;
      FUN_100bc216(local_64,local_4c);
      if (local_64[0][0xf] < (undefined4 **)0x10) {
        pppuVar4 = local_64[0] + 10;
      }
      else {
        pppuVar4 = (undefined4 ***)local_64[0][10];
      }
      FUN_100b9f36(pppuVar4,local_64[0][0xe]);
      local_14 = 0xffffffff;
      FUN_10001fee();
    }
    uVar5 = local_2c + 1;
  }
  local_14 = 0xffffffff;
  FUN_100243fc(local_34,*(undefined4 *)(local_34[0] + 4));
  FUN_102283a0(local_34[0],0x40);
  ExceptionList = local_1c;
  return;
}

