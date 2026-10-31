/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d8359 */

undefined8 * FUN_1400d8359(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  tagRECT local_28;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  GetClientRect((HWND)**(undefined8 **)(param_2 + 0x50),&local_28);
  *param_1 = CONCAT44((float)(local_28.bottom - local_28.top),
                      (float)(local_28.right - local_28.left));
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

