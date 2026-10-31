/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fddce */

int FUN_1801fddce(longlong param_1,void *param_2,ulonglong param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [6];
  short local_2a;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1801ce63e(param_1,0);
  if ((((iVar1 == 0) && (iVar1 = FUN_1801fde86(param_1,&local_2a,local_30), iVar1 == 0)) &&
      ((local_2a == -0x7fff || (iVar1 = FUN_1801ce63e(param_1,0), iVar1 == 0)))) &&
     (iVar1 = FUN_1801cec60(param_1,param_3 & 0xffffffff), iVar1 == 0)) {
    iVar1 = memcmp(*(void **)(param_1 + 0x38),param_2,param_3);
    iVar1 = (uint)(iVar1 != 0) * 2;
    FUN_1801ced84(param_1);
  }
  if (DAT_180402640 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
  }
  return iVar1;
}

