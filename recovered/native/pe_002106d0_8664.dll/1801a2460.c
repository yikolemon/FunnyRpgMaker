/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a2460 */

void FUN_1801a2460(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  uVar2 = GetWindowLongW((HWND)*puVar1,-0x14);
  if (param_2 < DAT_1802ac570) {
    SetWindowLongW((HWND)*puVar1,-0x14,uVar2 | 0x80000);
                    /* WARNING: Could not recover jumptable at 0x0001801a24c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetLayeredWindowAttributes(*puVar1,0,(int)(param_2 * DAT_1802dc270),2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801a24e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetWindowLongW((HWND)*puVar1,-0x14,uVar2 & 0xfff7ffff);
  return;
}

