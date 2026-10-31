/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10066124 */

void FUN_10066124(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int local_50;
  int local_4c;
  int local_48;
  undefined1 local_44;
  undefined1 local_40;
  undefined1 local_3c;
  undefined1 local_38;
  undefined1 local_34;
  undefined1 local_30;
  undefined1 local_2c;
  undefined1 local_28;
  undefined1 local_24;
  undefined1 local_20;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_50;
  if (param_3 - param_1 < 0x1e1) {
    local_40 = local_38;
    local_44 = local_3c;
    local_48 = param_3;
  }
  else {
    uVar1 = ((uint)(param_3 - param_1) >> 2) * -0x55555555 + 1 >> 3;
    local_48 = param_1 + uVar1 * 0x18;
    local_50 = param_1;
    param_1 = param_1 + uVar1 * 0xc;
    local_4c = param_1;
    FUN_100664bd();
    local_48 = uVar1 * 0xc + param_2;
    local_50 = param_2 + uVar1 * -0xc;
    local_40 = local_20;
    local_44 = local_24;
    local_4c = param_2;
    FUN_100664bd();
    iVar2 = uVar1 * -0xc + param_3;
    local_50 = param_3 + uVar1 * -0x18;
    local_40 = local_28;
    local_44 = local_2c;
    local_48 = param_3;
    local_4c = iVar2;
    FUN_100664bd();
    local_40 = local_30;
    local_44 = local_34;
    local_48 = iVar2;
  }
  local_4c = param_2;
  local_50 = param_1;
  FUN_100664bd();
  if (DAT_10388d00 == (local_14 ^ (uint)&local_50)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

