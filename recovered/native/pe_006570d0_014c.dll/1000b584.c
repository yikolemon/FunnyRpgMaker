/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000b584 */

void __thiscall FUN_1000b584(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 < 5) {
    iVar1 = thunk_FUN_1000b6c9(param_2,param_2 + param_3,*param_1 + 0xf);
    FUN_1000895c(iVar1,0,(*param_1 - iVar1) + 0x13);
    *(char *)(*param_1 + 0xe) = (char)param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10006198("Invalid fill (too long).");
}

