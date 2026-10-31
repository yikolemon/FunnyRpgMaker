/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400aef44 */

uint FUN_1400aef44(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong local_58 [4];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_58[2] = 0;
  local_20 = DAT_140142c48 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_14013bd58;
    puStack_28 = PTR_DAT_14013bd60;
  }
  local_58[1] = 0;
  local_58[0] = param_1;
  uVar1 = FUN_14009c2d0(local_58 + 2,local_58,10,CONCAT31((int3)((uint)param_4 >> 8),1));
  if (local_20 == '\x02') {
    *(uint *)(local_58[2] + 0x3a8) = *(uint *)(local_58[2] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_14008f040(local_58 + 2);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_14008f040(local_58 + 2);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}

