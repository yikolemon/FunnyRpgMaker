/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007f596 */

int FUN_14007f596(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  local_1c = 0;
  if (param_1 == 0) {
    iVar1 = 6;
  }
  else {
    puVar2 = (undefined8 *)FUN_14001e961(param_1,0x18,&local_1c);
    iVar1 = local_1c;
    if (local_1c == 0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *param_2 = puVar2;
      iVar1 = 0;
    }
  }
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

