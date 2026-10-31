/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016f6c6 */

void FUN_14016f6c6(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  uVar2 = param_2 + 7U & 0xfffffff8;
  local_38 = *(undefined8 *)(param_1 + 8);
  local_30 = &local_24;
  uVar1 = FUN_14012b8aa(param_3,0xc,*(undefined4 *)(param_1 + 4),uVar2);
  *(undefined8 *)(param_1 + 8) = uVar1;
  if (local_24 == 0) {
    *(uint *)(param_1 + 4) = uVar2;
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
}

