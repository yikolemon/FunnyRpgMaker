/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b4294 */

void FUN_100b4294(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *local_58;
  int local_54;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c48f0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100b647e();
  local_14 = 1;
  local_30 = *(int **)(*local_24 + 4);
  piVar4 = local_30;
  while (piVar4 = (int *)*piVar4, piVar4 != local_30) {
    local_3c = piVar4[3];
    *(undefined4 *)(*local_24 + 0x20 + local_3c * 0x30) = 0;
    local_28 = piVar4;
    FUN_100b65f8(&local_3c);
    piVar4 = local_28;
  }
  do {
    if (local_40 == 0) {
      local_14 = 0xffffffff;
      FUN_100b6562();
      ExceptionList = local_1c;
      return;
    }
    uVar7 = local_44 >> 2;
    uVar9 = local_44 & 3;
    local_44 = local_44 + 1;
    local_40 = local_40 + -1;
    if (local_40 == 0) {
      local_44 = 0;
    }
    local_54 = *(int *)(*(int *)(local_4c + (local_48 - 1U & uVar7) * 4) + uVar9 * 4) * 0x30;
    local_58 = *(int **)(*local_24 + 4 + local_54);
    local_2c = local_58;
    while (piVar4 = (int *)*local_2c, piVar4 != local_58) {
      iVar10 = *local_24;
      local_34 = (int *)0x0;
      local_2c = piVar4;
      piVar4 = piVar4 + 2;
      piVar3 = *(int **)(iVar10 + 0x20 + local_54);
      piVar2 = local_30;
      while (local_30 = piVar3, local_28 = piVar4, local_30 != (int *)0x0) {
        iVar8 = (int)local_30 * 0x30;
        uVar5 = FUN_100616f3(piVar4);
        FUN_100614e8(&local_3c,piVar4,uVar5);
        iVar10 = *local_24;
        piVar2 = local_30;
        if (local_38 != 0) {
          local_34 = local_30;
          break;
        }
        piVar4 = local_28;
        piVar3 = *(int **)(iVar10 + 0x20 + iVar8);
      }
      local_30 = piVar2;
      piVar4 = local_28;
      iVar1 = (int)local_34 * 0x30;
      uVar5 = FUN_100616f3(local_28);
      FUN_100614e8(&local_3c,piVar4,uVar5);
      iVar8 = local_38;
      if (local_38 == 0) {
        iVar8 = *(int *)(iVar10 + 4 + iVar1);
      }
      local_28 = local_2c + 3;
      if (iVar8 == *(int *)(*local_24 + 4 + iVar1)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar8 + 0xc);
      }
      *(undefined4 *)(*local_24 + 0x20 + *local_28 * 0x30) = uVar5;
      iVar8 = *local_24;
      iVar10 = iVar8 + *local_28 * 0x30;
      iVar6 = *(int *)(iVar10 + 0x20) * 0x30;
      iVar1 = *(int *)(iVar8 + 0x24 + iVar6);
      local_14 = 1;
      FUN_100b67c0(*(undefined4 *)(iVar10 + 0x28),iVar1,*(int *)(iVar8 + 0x28 + iVar6) - iVar1 >> 2)
      ;
      FUN_100b65f8(local_28);
    }
  } while( true );
}

