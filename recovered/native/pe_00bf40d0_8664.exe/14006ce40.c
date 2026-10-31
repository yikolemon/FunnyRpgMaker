/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006ce40 */

void FUN_14006ce40(longlong *param_1,int param_2,int *param_3)

{
  uint uVar1;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  uVar1 = FUN_140021867(*param_3);
  local_30 = (int)uVar1 >> 0x10;
  uVar1 = FUN_140021867(param_3[1]);
  local_2c = (int)uVar1 >> 0x10;
  FUN_14006d397(param_1,param_2,1,(longlong)&local_30);
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_58);
}

