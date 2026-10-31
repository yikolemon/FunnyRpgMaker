/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100325e4 */

int * FUN_100325e4(int *param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_50 [4];
  uint local_4c;
  int local_48;
  int local_44;
  undefined1 *local_40;
  uint *puStack_3c;
  uint *puStack_38;
  uint *puStack_34;
  int *local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined1 local_1d;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_50;
  local_1c = param_3;
  local_18 = param_4;
  uVar2 = *param_5 & 7;
  local_1d = uVar2 == 1;
  uVar1 = param_5[3];
  if (((int)uVar1 < 0) && (param_5[2] == 0)) {
    uVar1 = *(int *)(param_2 + 4) + param_4;
    if (*(uint *)(param_2 + 8) < uVar1) {
      (**(code **)(param_2 + 0xc))(param_2,uVar1);
    }
    if (uVar2 == 1) {
      FUN_10032730(param_1,param_2,param_3,param_4);
    }
    else {
      FUN_1001909c(param_3,param_4 + param_3);
      *param_1 = param_2;
    }
  }
  else {
    local_24 = 0xffffffff;
    if (-1 < (int)uVar1) {
      local_24 = uVar1;
    }
    puStack_38 = &local_24;
    local_2c = (uint)(uVar1 != 0 && uVar2 == 1);
    puStack_3c = &local_28;
    puStack_34 = &local_2c;
    local_40 = &local_1d;
    local_30 = &local_1c;
    local_28 = local_2c;
    FUN_1003280c(param_3,param_4,local_40,puStack_3c,puStack_38,puStack_34,local_30);
    local_50[0] = local_1d;
    local_4c = local_2c;
    local_44 = local_18;
    local_48 = local_1c;
    FUN_10032af0(param_1,param_2,param_5,local_2c,local_28,local_50);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)local_50)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

