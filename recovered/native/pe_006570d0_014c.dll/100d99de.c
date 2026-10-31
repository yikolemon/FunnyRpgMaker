/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d99de */

void __thiscall FUN_100d99de(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int *local_2c;
  uint local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  iVar4 = *param_1;
  iVar5 = param_1[1];
  uVar2 = iVar5 - iVar4 >> 4;
  if (param_2 < uVar2) {
    iVar4 = iVar4 + param_2 * 0x10;
    for (iVar3 = iVar4; iVar3 != iVar5; iVar3 = iVar3 + 0x10) {
      local_14 = 0x100d9a0b;
      FUN_10013efc();
    }
    param_1[1] = iVar4;
  }
  else if (uVar2 < param_2) {
    if ((uint)(param_1[2] - iVar4 >> 4) < param_2) {
      local_20 = (undefined1 *)&local_40;
      local_14 = 0xffffffff;
      local_18 = &LAB_100de030;
      local_1c = ExceptionList;
      ExceptionList = &local_1c;
      if (0xfffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_10016590();
      }
      uVar1 = param_1[2] - *param_1 >> 4;
      uVar2 = (uVar1 >> 1) + uVar1;
      if (uVar2 <= param_2) {
        uVar2 = param_2;
      }
      if (0xfffffff - (uVar1 >> 1) < uVar1) {
        uVar2 = 0xfffffff;
      }
      if (uVar2 < 0x10000000) {
        iVar5 = param_1[1] - *param_1;
        local_20 = (undefined1 *)&local_40;
        local_3c = FUN_10001426(uVar2 << 4);
        iVar4 = local_3c + iVar5;
        uVar1 = iVar5 >> 4;
        local_14 = 0xffffffff;
        local_40 = param_1;
        local_38 = uVar2;
        local_34 = iVar4;
        local_28 = uVar2;
        local_24 = local_3c;
        if (param_2 != uVar1) {
          iVar5 = uVar1 - param_2;
          local_30 = iVar4;
          do {
            FUN_1004b3be(0);
            iVar4 = iVar4 + 0x10;
            iVar5 = iVar5 + 1;
          } while (iVar5 != 0);
        }
        local_14 = 0;
        local_30 = iVar4;
        local_2c = param_1;
        FUN_10016bd4(*param_1,param_1[1],local_24,param_1);
        local_3c = 0;
        FUN_10016c6c(local_24,param_2,local_28);
        local_14 = 0xffffffff;
        FUN_10016f60();
        ExceptionList = local_1c;
        return;
      }
      local_20 = (undefined1 *)&local_40;
                    /* WARNING: Subroutine does not return */
      FUN_1000146d();
    }
    if (param_2 != uVar2) {
      iVar4 = uVar2 - param_2;
      do {
        local_14 = 0;
        local_18 = (undefined1 *)0x100d9a42;
        FUN_1004b3be();
        iVar5 = iVar5 + 0x10;
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0);
    }
    param_1[1] = iVar5;
  }
  return;
}

