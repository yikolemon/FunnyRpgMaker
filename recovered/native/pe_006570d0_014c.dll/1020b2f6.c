/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020b2f6 */

undefined1 __fastcall FUN_1020b2f6(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0xc);
  if (puVar1 < *(undefined1 **)(param_1 + 8)) {
    *(undefined1 **)(param_1 + 0xc) = puVar1 + 1;
    return *puVar1;
  }
  FUN_1020a812();
  return 0;
}

