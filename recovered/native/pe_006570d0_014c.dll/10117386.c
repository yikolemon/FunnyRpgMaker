/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10117386 */

float10 FUN_10117386(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  iVar4 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_38;
  local_30 = &local_1c;
  local_34 = &local_18;
  local_38 = 8;
  FUN_101136f5();
  uVar3 = (uint)(param_1 != 0);
  iVar5 = uVar3 * 2 + 0x202;
  iVar1 = uVar3 * 2 + 0x201;
  if (*(int *)(iVar4 + 0x208c) == 3) {
    iVar5 = uVar3 * 2 + 0x27f;
    iVar1 = uVar3 * 2 + 0x27e;
  }
  local_24 = local_1c;
  local_28 = local_18;
  local_30 = (undefined4 *)local_1c;
  local_34 = (undefined4 *)local_18;
  local_38 = iVar5;
  iVar4 = FUN_1011376b();
  local_2c = (float)iVar4;
  local_30 = (undefined4 *)local_24;
  local_34 = (undefined4 *)local_28;
  local_38 = iVar1;
  iVar4 = FUN_1011376b();
  local_2c = local_2c - (float)iVar4;
  if ((((local_2c != 0.0) || (NAN(local_2c))) &&
      (local_38 = iVar1, cVar2 = FUN_10113c70(), cVar2 != '\0')) &&
     (local_38 = iVar5, cVar2 = FUN_10113c70(), cVar2 != '\0')) {
    local_2c = 0.0;
  }
  local_20 = local_2c;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return (float10)local_2c;
}

