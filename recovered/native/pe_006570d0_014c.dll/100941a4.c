/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100941a4 */

undefined4 __thiscall FUN_100941a4(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 **ppuVar2;
  int *piVar3;
  short sVar4;
  undefined2 uVar5;
  undefined4 ***pppuVar6;
  undefined4 uVar7;
  undefined4 **local_48 [4];
  int local_38;
  uint local_34;
  undefined4 **local_30;
  int *local_2c;
  undefined4 **local_28;
  undefined4 **local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_48;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3a00;
  local_1c = ExceptionList;
  local_30 = (undefined4 **)*param_1;
  ExceptionList = &local_1c;
  local_2c = param_1;
  while( true ) {
    piVar3 = local_2c;
    uVar1 = local_2c[0x12] - 0x2e;
    if (((uVar1 < 0x10) && ((0x9001U >> (uVar1 & 0x1f) & 1) != 0)) || (local_2c[0x12] == -1)) break;
    FUN_1009301c();
  }
  local_28 = (undefined4 **)*local_2c;
  FUN_10093158(param_2,param_2 == 0x3a);
  FUN_10093158(0x5d,param_2 == 0x3a);
  if (param_2 == 0x3a) {
    sVar4 = FUN_1008fd3c(local_30,local_28,(uint)piVar3[0x10] >> 8 & 1);
    if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d9e4(1);
    }
    FUN_10093806((int)sVar4,0);
    uVar7 = 2;
  }
  else {
    local_24 = local_48;
    FUN_10094372(local_24,local_30,local_28);
    local_14 = 0;
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d9e4(0);
    }
    if (7 < local_34) {
      local_24 = local_48[0];
    }
    if (param_2 == 0x2e && local_38 == 1) {
      *(undefined2 *)(local_2c + 0x14) = *(undefined2 *)local_24;
      uVar7 = 1;
    }
    else {
      local_28 = (undefined4 **)((int)local_24 + local_38 * 2);
      pppuVar6 = (undefined4 ***)local_24;
      if ((*(byte *)((int)local_2c + 0x41) & 1) != 0) {
        while (pppuVar6 != (undefined4 ***)local_28) {
          local_30 = pppuVar6;
          uVar5 = (**(code **)(**(int **)(local_2c[0xc] + 4) + 0x20))(*(undefined2 *)pppuVar6);
          ppuVar2 = local_30;
          *(undefined2 *)local_30 = uVar5;
          pppuVar6 = (undefined4 ***)((int)ppuVar2 + 2);
        }
      }
      if (param_2 == 0x3d) {
        FUN_100943c6(local_24,local_28);
        uVar7 = 2;
      }
      else {
        FUN_1009456a(local_24,local_28);
        uVar7 = 2;
      }
    }
    local_14 = 0xffffffff;
    FUN_10001134();
  }
  ExceptionList = local_1c;
  return uVar7;
}

