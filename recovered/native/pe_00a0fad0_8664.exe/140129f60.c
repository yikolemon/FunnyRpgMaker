/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140129f60 */

void FUN_140129f60(int *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_140106320();
  if ((((*(byte *)(param_1 + 1) & 0x66) == 0) && (*param_1 == -0x1f928c9d)) && (iVar2 == 1)) {
    lVar1 = FUN_14011d6e0();
    *(int **)(lVar1 + 0x20) = param_1;
    lVar1 = FUN_14011d6e0();
    *(undefined8 *)(lVar1 + 0x28) = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_14011c8b8();
  }
  return;
}

