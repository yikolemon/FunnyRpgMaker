/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006299e */

undefined4 * __fastcall FUN_1006299e(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 ****ppppuVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int local_58;
  uint local_54;
  undefined4 *local_50;
  uint local_4c;
  undefined4 ***local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  uint local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_58;
  local_18 = &LAB_100c1ad0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  iStack_38 = 0;
  local_34 = 3;
  local_48 = (undefined4 ****)0x0;
  local_14 = 1;
  local_21 = 0;
  local_30 = 0;
  uVar3 = 0;
  local_2c = param_1;
  local_28 = param_2;
  while (uVar3 < (uint)local_28[4]) {
    local_50 = (undefined4 *)*local_28;
    local_4c = local_28[5];
    local_54 = uVar3;
    local_58 = FUN_1006344a();
    if (local_58 < 1) {
      uVar3 = local_4c;
      puVar2 = local_50;
      if ((char)local_30 == '\0' && iStack_38 != 0) {
        FUN_10063518(&local_21,&local_48);
        iStack_38 = 0;
        ppppuVar1 = &local_48;
        if (3 < local_34) {
          ppppuVar1 = (undefined4 ****)local_48;
        }
        *ppppuVar1 = (undefined4 ***)0x0;
        puVar2 = (undefined4 *)*local_28;
        uVar3 = local_28[5];
      }
      if (uVar3 < 4) {
        puVar2 = local_28;
      }
      local_30 = CONCAT31((int3)((uint)puVar2 >> 8),1);
      FUN_10063a48(puVar2 + local_54,1);
      iVar4 = 1;
    }
    else {
      uVar3 = local_4c;
      puVar2 = local_50;
      if (((char)local_30 != '\0') && (iStack_38 != 0)) {
        FUN_10063518(&local_21,&local_48);
        iStack_38 = 0;
        ppppuVar1 = &local_48;
        if (3 < local_34) {
          ppppuVar1 = (undefined4 ****)local_48;
        }
        *ppppuVar1 = (undefined4 ***)0x0;
        uVar3 = local_28[5];
        puVar2 = (undefined4 *)*local_28;
      }
      if (uVar3 < 4) {
        puVar2 = local_28;
      }
      FUN_10063a48(puVar2 + local_54,local_58);
      local_30 = 0;
      iVar4 = local_58;
    }
    local_21 = (undefined1)local_30;
    uVar3 = local_54 + iVar4;
  }
  if (iStack_38 != 0) {
    FUN_10063518(&local_21,&local_48);
    iStack_38 = 0;
    ppppuVar1 = &local_48;
    if (3 < local_34) {
      ppppuVar1 = (undefined4 ****)local_48;
    }
    *ppppuVar1 = (undefined4 ***)0x0;
  }
  puVar2 = local_28;
  if (3 < (uint)local_28[5]) {
    puVar2 = (undefined4 *)*local_28;
  }
  FUN_10063a48(puVar2,0);
  local_14 = 0xffffffff;
  FUN_10061fce();
  ExceptionList = local_1c;
  return local_2c;
}

