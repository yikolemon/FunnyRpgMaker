/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10005738 */

undefined4 * FUN_10005738(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 ***pppuVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined8 uVar4;
  int local_3c;
  undefined4 **local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  uint uStack_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_10012960;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_2 = 0;
  iVar1 = FUN_10002303();
  param_2[1] = iVar1;
  FUN_10002eb6();
  local_14 = 0;
  FUN_10004c42(0x105,0);
  pppuVar2 = &local_38;
  if (7 < uStack_24) {
    pppuVar2 = (undefined4 ***)local_38;
  }
  uVar4 = FUN_102291f0(pppuVar2);
  local_3c = (int)((ulonglong)uVar4 >> 0x20);
  FUN_10004c42((int)uVar4,0);
  iVar1 = local_3c;
  if (local_3c == -1) {
    iVar1 = 0x14;
    iVar3 = FUN_100025af();
  }
  else {
    iVar3 = FUN_10002303();
  }
  *param_2 = iVar1;
  param_2[1] = iVar3;
  local_14 = 2;
  if (iVar1 == 0) {
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_24,local_28);
    *param_1 = local_38;
    param_1[1] = uStack_34;
    param_1[2] = uStack_30;
    param_1[3] = uStack_2c;
    local_28 = 0;
    uStack_24 = 7;
    local_38 = (undefined4 **)((uint)local_38 & 0xffff0000);
  }
  else {
    *(undefined8 *)(param_1 + 4) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_10002eb6();
  }
  local_14 = 0xffffffff;
  FUN_10001f04();
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

