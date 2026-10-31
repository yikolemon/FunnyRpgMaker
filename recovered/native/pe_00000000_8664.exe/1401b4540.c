/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b4540 */

void FUN_1401b4540(int *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_14018f150();
  if ((((*(byte *)(param_1 + 1) & 0x66) == 0) && (*param_1 == -0x1f928c9d)) && (iVar2 == 1)) {
    lVar1 = FUN_1401aae30();
    *(int **)(lVar1 + 0x20) = param_1;
    lVar1 = FUN_1401aae30();
    *(undefined8 *)(lVar1 + 0x28) = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_1401aa0e4();
  }
  return;
}

