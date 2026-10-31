/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140061ca3 */

void FUN_140061ca3(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 (*pauVar1) [32];
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  pauVar1 = FUN_14001c423(param_2,0x20,&local_34);
  if (local_34 == 0) {
    *(undefined8 *)(*pauVar1 + 8) = param_3;
    *(undefined8 *)*pauVar1 = param_3;
    *(undefined8 *)(*pauVar1 + 0x10) = param_4;
    *(undefined4 *)(*pauVar1 + 0x18) = 2;
    *param_1 = param_2;
    param_1[1] = (longlong)pauVar1;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

