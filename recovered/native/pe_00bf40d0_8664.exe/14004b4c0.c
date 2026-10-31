/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004b4c0 */

int FUN_14004b4c0(longlong *param_1,ushort *param_2,undefined4 *param_3)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  *param_3 = 0;
  uVar2 = FUN_140020aa5(param_1,&local_34);
  if (local_34 == 0) {
    iVar1 = 0;
    if ((ushort)(uVar2 + 0x7fff) < 2) {
      uVar3 = FUN_14002142d(param_1,&local_34);
      iVar1 = local_34;
      if (local_34 == 0) {
        *param_3 = uVar3;
        iVar1 = 0;
      }
    }
    local_34 = iVar1;
    *param_2 = uVar2;
  }
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return local_34;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

