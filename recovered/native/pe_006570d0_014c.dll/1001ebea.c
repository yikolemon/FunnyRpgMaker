/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001ebea */

undefined4 __thiscall FUN_1001ebea(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  char ***pppcVar3;
  char cVar4;
  short sVar5;
  char ****ppppcVar6;
  undefined4 uVar7;
  char ***local_48 [4];
  int local_38;
  uint local_34;
  undefined4 *local_30;
  char ***local_2c;
  char ***local_28;
  char ***local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_48;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059510;
  local_1c = ExceptionList;
  local_2c = (char ***)*param_1;
  ExceptionList = &local_1c;
  local_30 = param_1;
  while( true ) {
    puVar2 = local_30;
    uVar1 = local_30[0x12] - 0x2e;
    if (((uVar1 < 0x10) && ((0x9001U >> (uVar1 & 0x1f) & 1) != 0)) || (local_30[0x12] == -1)) break;
    FUN_1001d8ea();
  }
  local_28 = (char ***)*local_30;
  FUN_1001db12(param_2,param_2 == 0x3a);
  FUN_1001db12(0x5d,param_2 == 0x3a);
  if (param_2 == 0x3a) {
    sVar5 = FUN_10019fe0(local_2c,local_28,(uint)puVar2[0x10] >> 8 & 1);
    if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d9e4(1);
    }
    FUN_1001e2d4((int)sVar5,0);
    uVar7 = 2;
  }
  else {
    local_24 = (char ***)local_48;
    FUN_1001edae(local_24,local_2c,local_28);
    local_14 = 0;
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d9e4(0);
    }
    if (0xf < local_34) {
      local_24 = local_48[0];
    }
    if (param_2 == 0x2e && local_38 == 1) {
      *(char *)((int)local_30 + 0x4e) = *(char *)local_24;
      uVar7 = 1;
    }
    else {
      local_28 = (char ***)((int)local_24 + local_38);
      ppppcVar6 = (char ****)local_24;
      if ((*(byte *)((int)local_30 + 0x41) & 1) != 0) {
        while (ppppcVar6 != (char ****)local_28) {
          local_2c = (char ***)ppppcVar6;
          cVar4 = (**(code **)(**(int **)(local_30[0xc] + 4) + 0x10))((int)*(char *)ppppcVar6);
          pppcVar3 = local_2c;
          *(char *)local_2c = cVar4;
          ppppcVar6 = (char ****)((int)pppcVar3 + 1);
        }
      }
      if (param_2 == 0x3d) {
        FUN_1001ee02(local_24,local_28);
        uVar7 = 2;
      }
      else {
        FUN_1001ef92(local_24,local_28);
        uVar7 = 2;
      }
    }
    local_14 = 0xffffffff;
    FUN_10001fee();
  }
  ExceptionList = local_1c;
  return uVar7;
}

