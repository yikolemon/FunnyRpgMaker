/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100afc82 */

undefined4 __thiscall FUN_100afc82(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 ***pppuVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  undefined4 **local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_3c;
  local_18 = &LAB_100c4760;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_2c = 0;
  local_3c = (undefined4 ***)0x0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_28 = 7;
  local_14 = 0;
  local_24 = param_1;
  FUN_10004c42(param_1[4],0);
  pppuVar1 = &local_3c;
  if (7 < local_28) {
    pppuVar1 = (undefined4 ***)local_3c;
  }
  puVar2 = local_24;
  if (7 < (uint)local_24[5]) {
    puVar2 = (undefined4 *)*local_24;
  }
  FUN_100afd5c(puVar2,(int)puVar2 + local_24[4] * 2,pppuVar1,0x5c,0x2f);
  pppuVar1 = &local_3c;
  if (7 < local_28) {
    pppuVar1 = (undefined4 ***)local_3c;
  }
  FUN_10005a0c(param_2,pppuVar1,local_2c,param_3);
  local_14 = 0xffffffff;
  FUN_10001134();
  *unaff_FS_OFFSET = local_1c;
  return param_2;
}

