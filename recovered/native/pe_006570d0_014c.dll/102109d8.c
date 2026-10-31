/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102109d8 */

void __fastcall FUN_102109d8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  uVar1 = param_1[2];
  if (iVar2 != 0) {
    do {
      FUN_10210a30();
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    uVar1 = param_1[2];
  }
  FUN_101c0017(param_2,uVar1);
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

