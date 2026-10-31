/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009bf40 */

uint FUN_14009bf40(longlong param_1,longlong *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong local_58;
  longlong *local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_140142c48 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_14013bd58;
    puStack_28 = PTR_DAT_14013bd60;
  }
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVar1 = FUN_14009bff4(local_48,&local_58,param_3,CONCAT31((int3)((uint)param_4 >> 8),1));
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_14008f040(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_14008f040(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}

