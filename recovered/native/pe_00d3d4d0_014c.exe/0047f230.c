/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047f230 */

void __cdecl FUN_0047f230(SIZE_T param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  iVar3 = FUN_004924d0(param_1);
  while( true ) {
    if (iVar3 != 0) {
      return;
    }
    bVar2 = FUN_0048d700(param_1);
    if (CONCAT31(extraout_var,bVar2) == 0) break;
    iVar3 = FUN_004924d0(param_1);
  }
  if (param_1 == 0xffffffff) {
    FUN_00484350();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f870();
}

