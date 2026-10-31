/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400227f1 */

int FUN_1400227f1(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 (*pauVar2) [32];
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  if (param_1 == (longlong *)0x0) {
    local_3c = 0x21;
  }
  else if (param_2 == 0) {
    local_3c = 6;
  }
  else {
    *param_4 = 0;
    lVar1 = *param_1;
    pauVar2 = FUN_14001c423(lVar1,0x48,&local_3c);
    if (local_3c == 0) {
      FUN_14001d02c((undefined8 *)pauVar2,param_2,param_3);
      *(longlong *)(*pauVar2 + 0x10) = lVar1;
      *(code **)(pauVar2[1] + 8) = FUN_1400228aa;
      *param_4 = pauVar2;
      local_3c = 0;
    }
  }
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_68)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStack_68);
}

