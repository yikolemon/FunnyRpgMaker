/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140063397 */

void FUN_140063397(ulonglong param_1,ulonglong param_2,ushort param_3)

{
  ulonglong uVar1;
  undefined1 auStackY_48 [32];
  ulonglong local_18;
  ushort local_a;
  ulonglong local_8;
  
  local_8 = DAT_14012ea80 ^ (ulonglong)auStackY_48;
  uVar1 = param_2 + param_1;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  local_18 = param_1;
  local_a = param_3;
  FUN_1400637da(&local_18,uVar1,param_1,param_2,&local_a);
  if (DAT_14012ea80 == (local_8 ^ (ulonglong)auStackY_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_8 ^ (ulonglong)auStackY_48);
}

