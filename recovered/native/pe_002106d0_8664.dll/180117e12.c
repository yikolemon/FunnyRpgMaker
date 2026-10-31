/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180117e12 */

int FUN_180117e12(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  iVar1 = FUN_1800fed08(&local_28,8,
                        *(undefined4 *)(param_1[0x2a] + -4 + (longlong)(int)param_1[0x29] * 4));
  if (*(int *)(*param_1 + 0x1660) == iVar1) {
    FUN_180117b67(iVar1,0xc,param_2,0);
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
}

