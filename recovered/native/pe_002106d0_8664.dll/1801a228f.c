/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a228f */

undefined8 * FUN_1801a228f(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  tagRECT local_28;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  GetClientRect((HWND)**(undefined8 **)(param_2 + 0x50),&local_28);
  *param_1 = CONCAT44((float)(local_28.bottom - local_28.top),
                      (float)(local_28.right - local_28.left));
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

