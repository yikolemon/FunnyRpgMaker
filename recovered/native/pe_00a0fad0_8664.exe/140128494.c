/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140128494 */

void FUN_140128494(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStackY_f8 [32];
  short local_c8 [88];
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStackY_f8;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x104;
  iVar1 = FUN_1401220bc(local_c8,0x55);
  if (1 < iVar1) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (local_c8[lVar2] != 0);
    iVar1 = FUN_1401275e0();
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStackY_f8);
}

