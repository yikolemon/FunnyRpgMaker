/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006ab8e */

undefined4 __fastcall FUN_1006ab8e(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1006c70a(param_1);
  if (iVar1 == 0) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1006dab1("directory_iterator::operator++",iVar1);
}

