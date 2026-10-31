/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10017b08 */

undefined4 FUN_10017b08(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  undefined1 local_3c [27];
  undefined1 local_21;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100590f0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_10017d5d(local_3c,param_3);
  local_14 = 0;
  local_21 = 0x2e;
  FUN_10017c29(param_1,"[json.exception.",param_2,&local_21,local_3c,&DAT_1034babf);
  local_14 = 0xffffffff;
  FUN_10001fee();
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

