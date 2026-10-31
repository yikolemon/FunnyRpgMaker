/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180296a00 */

void FUN_180296a00(int *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_18026d7e0();
  if ((((*(byte *)(param_1 + 1) & 0x66) == 0) && (*param_1 == -0x1f928c9d)) && (iVar2 == 1)) {
    lVar1 = FUN_18028cfc0();
    *(int **)(lVar1 + 0x20) = param_1;
    lVar1 = FUN_18028cfc0();
    *(undefined8 *)(lVar1 + 0x28) = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_18028c2e0();
  }
  return;
}

