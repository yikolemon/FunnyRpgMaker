/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d852a */

void FUN_1400d852a(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  uVar2 = GetWindowLongW((HWND)*puVar1,-0x14);
  if (param_2 < DAT_1401c86c8) {
    SetWindowLongW((HWND)*puVar1,-0x14,uVar2 | 0x80000);
                    /* WARNING: Could not recover jumptable at 0x0001400d858e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetLayeredWindowAttributes(*puVar1,0,(int)(param_2 * DAT_1401c8658),2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400d85ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetWindowLongW((HWND)*puVar1,-0x14,uVar2 & 0xfff7ffff);
  return;
}

