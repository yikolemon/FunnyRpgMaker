/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014d4ba */

int FUN_14014d4ba(longlong param_1,void *param_2,ulonglong param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [6];
  short local_2a;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14012d612(param_1,0);
  if ((((iVar1 == 0) && (iVar1 = FUN_14014d572(param_1,&local_2a,local_30), iVar1 == 0)) &&
      ((local_2a == -0x7fff || (iVar1 = FUN_14012d612(param_1,0), iVar1 == 0)))) &&
     (iVar1 = FUN_14012dc34(param_1,param_3 & 0xffffffff), iVar1 == 0)) {
    iVar1 = memcmp(*(void **)(param_1 + 0x38),param_2,param_3);
    iVar1 = (uint)(iVar1 != 0) * 2;
    FUN_14012dd58(param_1);
  }
  if (DAT_140f17b40 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_28 ^ (ulonglong)auStack_58);
  }
  return iVar1;
}

