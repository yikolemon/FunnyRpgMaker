/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008b910 */

void thunk_FUN_1400863a0(ulonglong param_1)

{
  code *pcVar1;
  bool bVar2;
  LPVOID pvVar3;
  undefined7 extraout_var;
  
  pvVar3 = _malloc_base(param_1);
  while( true ) {
    if (pvVar3 != (LPVOID)0x0) {
      return;
    }
    bVar2 = FUN_140093cc0(param_1);
    if ((int)CONCAT71(extraout_var,bVar2) == 0) break;
    pvVar3 = _malloc_base(param_1);
  }
  if (param_1 == 0xffffffffffffffff) {
    FUN_14008b930();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086a90();
}

