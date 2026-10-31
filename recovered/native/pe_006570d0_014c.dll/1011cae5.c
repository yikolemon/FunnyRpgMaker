/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011cae5 */

undefined4
FUN_1011cae5(undefined4 param_1,uint param_2,float param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auStack_3c [2];
  byte local_3a;
  byte local_39;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)auStack_3c;
  if ((*(byte *)(DAT_1039d74c + 0x27b5) & 4) != 0) {
    FUN_100f99e6("[docking] DockBuilderSplitNode: node 0x%08X, split_dir %d\n",param_1,param_2);
  }
  iVar2 = FUN_1011b528(iVar2,param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_1c = 0;
    local_18 = 0;
    local_38 = 3;
    local_34 = 0;
    local_2c = 0;
    local_28 = param_2;
    local_39 = (param_2 & 0xfffffffd) == 0;
    local_3a = !(bool)local_39;
    if (!(bool)local_39) {
      param_3 = DAT_1028b430 - param_3;
    }
    fVar4 = DAT_1028b430;
    if (param_3 <= DAT_1028b430) {
      fVar4 = param_3;
    }
    local_24 = ~-(uint)(param_3 < 0.0) & (uint)fVar4;
    local_20 = 0;
    local_30 = iVar2;
    FUN_1011a8cd();
    uVar3 = **(undefined4 **)(iVar2 + 0x1c + (uint)local_3a * 4);
    uVar1 = **(undefined4 **)(iVar2 + 0x1c + (uint)local_39 * 4);
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar3;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = uVar1;
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_3c)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

