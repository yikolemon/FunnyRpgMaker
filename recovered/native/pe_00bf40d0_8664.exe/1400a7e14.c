/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a7e14 */

void FUN_1400a7e14(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStackY_f8 [32];
  short local_c8 [88];
  ulonglong local_18;
  longlong lVar3;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStackY_f8;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x104;
  iVar1 = FUN_1400a1ea0(local_c8,0x55);
  if (1 < iVar1) {
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (local_c8[lVar2] != 0);
    iVar1 = FUN_1400a6f60((short *)(param_1 + 600),0x55,(longlong)local_c8,lVar3 + 2);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStackY_f8);
}

