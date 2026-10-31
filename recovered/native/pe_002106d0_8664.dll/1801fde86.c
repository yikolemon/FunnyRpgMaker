/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fde86 */

int FUN_1801fde86(undefined8 param_1,short *param_2,undefined4 *param_3)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  *param_3 = 0;
  sVar2 = FUN_1801ce6a2(param_1,&local_34);
  if (local_34 == 0) {
    iVar1 = 0;
    if ((ushort)(sVar2 + 0x7fffU) < 2) {
      uVar3 = FUN_1801cf02a(param_1,&local_34);
      iVar1 = local_34;
      if (local_34 == 0) {
        *param_3 = uVar3;
        iVar1 = 0;
      }
    }
    local_34 = iVar1;
    *param_2 = sVar2;
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return local_34;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

