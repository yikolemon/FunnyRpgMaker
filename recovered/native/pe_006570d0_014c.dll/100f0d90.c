/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f0d90 */

undefined4 * __fastcall FUN_100f0d90(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_20 [4];
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100f5400;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  puVar2 = (undefined4 *)FUN_10228350(0x14);
  uVar1 = DAT_102b7290._4_4_;
  *puVar2 = (undefined4)DAT_102b7290;
  puVar2[1] = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *param_1 = puVar2;
  ExceptionList = local_18;
  return param_1;
}

