/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cfc56 */

undefined8 FUN_1800cfc56(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_68;
  FUN_1800c526e(&local_40);
  uVar3 = 1;
  if (local_40 < param_3) {
    do {
      local_48 = param_3 - local_40;
      uVar1 = FUN_1800c52eb(&local_48);
      iVar2 = FUN_1802450b0(param_1,*param_2,uVar1);
      if (iVar2 == 0) {
        uVar3 = 0;
        break;
      }
      FUN_1800c526e(&local_40);
    } while (local_40 < param_3);
  }
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStack_68);
  }
  return uVar3;
}

