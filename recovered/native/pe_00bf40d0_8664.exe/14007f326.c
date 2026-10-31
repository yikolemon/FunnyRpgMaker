/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007f326 */

void FUN_14007f326(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  local_20 = (undefined8 *)0x0;
  iVar1 = FUN_14007f596(*param_2,&local_20);
  if (iVar1 == 0) {
    *local_20 = *param_1;
    local_20[2] = param_2[1];
    param_2[1] = (longlong)local_20;
  }
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

