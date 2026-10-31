/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180231fd9 */

int FUN_180231fd9(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_1c = 0;
  if (param_1 == 0) {
    iVar1 = 6;
  }
  else {
    puVar2 = (undefined8 *)FUN_1801cc006(param_1,0x30,&local_1c);
    iVar1 = local_1c;
    if (local_1c == 0) {
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      *param_2 = puVar2;
      iVar1 = 0;
    }
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

