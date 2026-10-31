/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011bfc0 */

void FUN_18011bfc0(int param_1)

{
  *(undefined4 *)
   ((longlong)*(int *)(DAT_180419160 + 0x220c) * 8 +
    *(longlong *)(*(longlong *)(DAT_180419160 + 0x2200) + 0x438) + 0x478 + (longlong)param_1 * 4) =
       0x7f7fffff;
  return;
}

