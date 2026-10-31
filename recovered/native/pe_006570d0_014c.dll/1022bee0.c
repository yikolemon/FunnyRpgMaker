/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022bee0 */

void __fastcall FUN_1022bee0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (iVar1 < 8) {
      FUN_10234cc0(&DAT_1039cd30 + iVar1 * 0x18);
    }
    return;
  }
  ___acrt_unlock(4);
  return;
}

