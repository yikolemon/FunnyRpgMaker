/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a34ce */

undefined4 __fastcall FUN_100a34ce(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_100a871a(param_1);
  if (iVar1 == 0) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1006dab1("recursive_directory_iterator::operator++",iVar1);
}

