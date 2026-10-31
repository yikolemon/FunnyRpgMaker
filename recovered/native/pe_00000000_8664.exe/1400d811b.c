/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d811b */

void FUN_1400d811b(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  if ((puVar1[1] != 0) && ((*(byte *)(param_1 + 4) & 0x30) != 0)) {
    SetWindowLongPtrW((HWND)*puVar1,-8,0);
    ShowWindow((HWND)*puVar1,((*(uint *)(param_1 + 4) & 0x20) >> 5) * 3 + 5);
                    /* WARNING: Could not recover jumptable at 0x0001400d8178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetWindowLongPtrW((HWND)*puVar1,-8,puVar1[1]);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400d8194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ShowWindow((HWND)*puVar1,((*(uint *)(param_1 + 4) & 0x20) >> 5) * 3 + 5);
  return;
}

