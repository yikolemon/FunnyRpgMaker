/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d823f */

undefined8 * FUN_1400d823f(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  tagPOINT local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_20.x = 0;
  local_20.y = 0;
  ClientToScreen((HWND)**(undefined8 **)(param_2 + 0x50),&local_20);
  *param_1 = CONCAT44((float)local_20.y,(float)local_20.x);
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

