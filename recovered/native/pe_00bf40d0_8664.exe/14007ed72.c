/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007ed72 */

void FUN_14007ed72(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  local_24 = 0;
  plVar1 = (longlong *)FUN_14001e961(param_1,0x10,&local_24);
  if (local_24 == 0) {
    plVar1[1] = 0;
    *plVar1 = param_1;
    *param_2 = (longlong)plVar1;
  }
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_48);
}

