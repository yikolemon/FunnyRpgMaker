/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10080602 */

undefined4 FUN_10080602(undefined4 param_1,undefined4 param_2)

{
  undefined4 ***pppuVar1;
  int *unaff_FS_OFFSET;
  undefined4 **local_3c [4];
  int local_2c;
  uint local_28;
  undefined1 local_21;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3080;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_10072232(local_3c,param_2);
  local_14 = 0;
  pppuVar1 = local_3c;
  if (0xf < local_28) {
    pppuVar1 = (undefined4 ***)local_3c[0];
  }
  FUN_10080bec(pppuVar1,local_2c + (int)pppuVar1,&local_21);
  local_14 = 0xffffffff;
  FUN_10001fee();
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

