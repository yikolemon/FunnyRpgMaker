/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10259450 */

undefined4 FUN_10259450(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_10272260();
  uVar1 = *(undefined4 *)(iVar2 + 8);
  iVar2 = FUN_10272260();
  *(undefined4 *)(iVar2 + 8) = param_1;
  return uVar1;
}

