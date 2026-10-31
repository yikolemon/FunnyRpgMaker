/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021be48 */

void FUN_18021be48(longlong param_1,ulonglong param_2)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  undefined8 local_40 [3];
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_28 = 1;
  local_48 = *(undefined8 *)(param_1 + 0x4928);
  cVar1 = FUN_18000d3bc(param_1 + 0x10);
  if (cVar1 == '\0') {
    FUN_18021a9a4(param_1,*(undefined4 *)(param_1 + 0x4930),*(undefined4 *)(param_1 + 0x4934));
  }
  local_58 = (undefined4)(param_2 >> 0x20);
  FUN_18021c1a2(param_1,param_1 + 0x10,local_40,param_2 & 0xffffffff);
  (*(code *)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),&local_48);
  *(undefined8 *)(param_1 + 0x4928) = local_40[0];
  *(ulonglong *)(param_1 + 0x4910) = param_2;
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_78);
}

