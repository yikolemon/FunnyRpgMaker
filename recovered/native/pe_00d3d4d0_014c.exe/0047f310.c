/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047f310 */

void __fastcall FUN_0047f310(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (iVar1 < 8) {
      FUN_004843e0((LPCRITICAL_SECTION)(&DAT_0051ba68 + iVar1 * 0x18));
    }
    return;
  }
  ___acrt_unlock(4);
  return;
}

