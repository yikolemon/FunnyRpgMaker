/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020ffc9 */

void __fastcall FUN_1020ffc9(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[1] == 0) {
    uVar1 = *param_1;
    iVar2 = FUN_1020fffd(uVar1);
    if (iVar2 == 0) {
      FUN_1020fffd(uVar1);
    }
  }
  return;
}

