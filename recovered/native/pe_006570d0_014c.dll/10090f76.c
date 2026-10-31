/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10090f76 */

undefined2 *
FUN_10090f76(undefined2 param_1,undefined2 *param_2,undefined2 *param_3,uint *param_4,int param_5,
            uint param_6)

{
  int iVar1;
  undefined4 ****ppppuVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 ***local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint local_3c;
  uint local_38;
  undefined4 ***local_34;
  undefined2 *local_30;
  uint local_2c;
  uint *local_28;
  undefined2 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_18 = &LAB_100c3880;
  local_1c = ExceptionList;
  local_3c = 0;
  local_4c = (undefined4 ****)0x0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_38 = 7;
  local_14 = 0;
  local_30 = param_2;
  ExceptionList = &local_1c;
  ppppuVar2 = &local_4c;
  if (param_4 != (uint *)0x0) {
    FUN_100045e8(param_1);
    local_2c = *param_4;
    local_28 = (uint *)0x1;
    local_34 = &local_4c;
    local_24 = param_2;
    while ((local_28 < local_2c && (local_24 = local_24 + 1, local_24 != param_3))) {
      uVar3 = *local_24;
      if ((param_6 >> 8 & 1) != 0) {
        uVar3 = (**(code **)(**(int **)(param_5 + 4) + 0x20))(uVar3);
      }
      FUN_100045e8(uVar3);
      local_28 = (uint *)((int)local_28 + 1);
    }
    if (7 < local_38) {
      local_34 = local_4c;
    }
    local_2c = local_3c;
    do {
      local_24 = (undefined2 *)*param_4;
      local_28 = param_4;
      if ((local_24 <= local_2c) && (uVar5 = param_4[2], local_24 <= uVar5)) {
        uVar6 = param_4[3];
        iVar1 = (int)local_24 * 2;
        do {
          iVar4 = FUN_102595e0(local_34,uVar6,iVar1);
          if (iVar4 == 0) {
            local_30 = param_2 + (int)local_24;
            ppppuVar2 = (undefined4 ****)local_20;
            goto code_r0x100910b0;
          }
          uVar5 = uVar5 - (int)local_24;
          uVar6 = uVar6 + iVar1;
        } while (local_24 <= uVar5);
      }
      param_4 = (uint *)local_28[4];
      ppppuVar2 = (undefined4 ****)local_20;
    } while (param_4 != (uint *)0x0);
  }
code_r0x100910b0:
  local_20 = (undefined1 *)ppppuVar2;
  local_14 = 0xffffffff;
  FUN_10001134();
  ExceptionList = local_1c;
  return local_30;
}

