/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a2051 */

void FUN_1801a2051(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  if ((puVar1[1] != 0) && ((*(byte *)(param_1 + 4) & 0x30) != 0)) {
    SetWindowLongPtrW((HWND)*puVar1,-8,0);
    ShowWindow((HWND)*puVar1,((*(uint *)(param_1 + 4) & 0x20) >> 5) * 3 + 5);
                    /* WARNING: Could not recover jumptable at 0x0001801a20ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetWindowLongPtrW((HWND)*puVar1,-8,puVar1[1]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801a20ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ShowWindow((HWND)*puVar1,((*(uint *)(param_1 + 4) & 0x20) >> 5) * 3 + 5);
  return;
}

