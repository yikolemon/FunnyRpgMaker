/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180231732 */

void FUN_180231732(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_24 = 0;
  puVar1 = (undefined8 *)FUN_1801cc006(param_1,0x10,&local_24);
  if (local_24 == 0) {
    puVar1[1] = 0;
    *puVar1 = param_1;
    *param_2 = (longlong)puVar1;
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
}

