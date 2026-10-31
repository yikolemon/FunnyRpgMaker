/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004e0ac */

void FUN_14004e0ac(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((ulonglong)param_2[1] < 5) {
    lVar1 = thunk_FUN_140007d3e(*param_2,param_2[1] + *param_2,*param_1 + 0xf);
    thunk_FUN_1401c5830(lVar1,0,(*param_1 - lVar1) + 0x13);
    *(char *)(*param_1 + 0xe) = (char)param_2[1];
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140049b0a("Invalid fill (too long).");
}

