/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004976c */

void FUN_14004976c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((ulonglong)param_2[1] < 5) {
    lVar1 = thunk_FUN_1400498e2(*param_2,param_2[1] + *param_2,*param_1 + 0xf);
    thunk_FUN_1401366a0(lVar1,0,(*param_1 - lVar1) + 0x13);
    *(char *)(*param_1 + 0xe) = (char)param_2[1];
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400451d8("Invalid fill (too long).");
}

