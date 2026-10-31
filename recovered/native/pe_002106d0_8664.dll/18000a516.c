/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000a516 */

void FUN_18000a516(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((ulonglong)param_2[1] < 5) {
    lVar1 = thunk_FUN_18000a68c(*param_2,param_2[1] + *param_2,*param_1 + 0xf);
    thunk_FUN_1802a89a0(lVar1,0,(*param_1 - lVar1) + 0x13);
    *(char *)(*param_1 + 0xe) = (char)param_2[1];
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180005ebc("Invalid fill (too long).");
}

