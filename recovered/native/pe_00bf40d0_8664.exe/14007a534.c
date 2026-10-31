/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007a534 */

void FUN_14007a534(longlong param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [32];
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  pauVar1 = FUN_14001c423(param_1,8,&local_24);
  if (local_24 == 0) {
    *(longlong *)*pauVar1 = param_1;
  }
  *param_2 = pauVar1;
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_48);
}

