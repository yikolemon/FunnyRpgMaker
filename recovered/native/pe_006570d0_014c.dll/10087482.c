/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10087482 */

void __thiscall FUN_10087482(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
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
  int local_14;
  
  iVar5 = *param_1;
  iVar6 = param_1[1];
  uVar3 = (iVar6 - iVar5 >> 3) * -0x33333333;
  if (param_2 < uVar3) {
    iVar5 = iVar5 + param_2 * 0x28;
    for (iVar4 = iVar5; iVar4 != iVar6; iVar4 = iVar4 + 0x28) {
      local_18 = (undefined1 *)0x100874b6;
      local_14 = iVar4;
      FUN_100803d3();
    }
    param_1[1] = iVar5;
  }
  else if (uVar3 < param_2) {
    if ((uint)((param_1[2] - iVar5 >> 3) * -0x33333333) < param_2) {
      local_20 = (undefined1 *)&local_40;
      local_14 = 0xffffffff;
      local_18 = &LAB_100c3340;
      local_1c = ExceptionList;
      ExceptionList = &local_1c;
      if (0x6666666 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_10016590();
      }
      uVar1 = (param_1[2] - *param_1 >> 3) * -0x33333333;
      uVar2 = 0x6666666 - (uVar1 >> 1);
      uVar3 = (uVar1 >> 1) + uVar1;
      if (uVar3 <= param_2) {
        uVar3 = param_2;
      }
      if (uVar2 <= uVar1 && uVar1 - uVar2 != 0) {
        uVar3 = 0x6666666;
      }
      if (0x6666666 < uVar3) {
        local_20 = (undefined1 *)&local_40;
                    /* WARNING: Subroutine does not return */
        FUN_1000146d();
      }
      iVar6 = param_1[1] - *param_1;
      local_20 = (undefined1 *)&local_40;
      local_3c = FUN_10001426(uVar3 * 0x28);
      iVar5 = local_3c + iVar6;
      local_14 = 0xffffffff;
      local_34 = iVar5;
      local_30 = iVar5;
      local_24 = local_3c;
      local_38 = uVar3;
      local_28 = uVar3;
      local_40 = param_1;
      for (iVar6 = (iVar6 >> 3) * 0x33333333 + param_2; iVar6 != 0; iVar6 = iVar6 + -1) {
        FUN_1008772e();
        iVar5 = iVar5 + 0x28;
      }
      local_14 = 0;
      local_30 = iVar5;
      local_2c = param_1;
      FUN_10086ee1(*param_1,param_1[1],local_24,param_1);
      local_3c = 0;
      FUN_1008765e(local_24,param_2,local_28);
      local_14 = 0xffffffff;
      FUN_100876d2();
      ExceptionList = local_1c;
      return;
    }
    if (param_2 != uVar3) {
      iVar5 = uVar3 - param_2;
      do {
        local_14 = 0x100874f4;
        FUN_1008772e();
        iVar6 = iVar6 + 0x28;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0);
    }
    param_1[1] = iVar6;
  }
  return;
}

