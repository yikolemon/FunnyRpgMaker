/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180247370 */

void FUN_180247370(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_18026d720();
  piVar2 = (int *)*puVar3;
  if (((piVar2 != (int *)0x0) && (iVar1 = *piVar2, iVar1 != -0x1fbcb0b3)) && (iVar1 != -0x1fbcbcae))
  {
    if (((iVar1 == -0x1f928c9d) && (piVar2[6] == 4)) &&
       ((piVar2[8] + 0xe66cfae0U < 3 || (piVar2[8] == 0x1994000)))) {
      FUN_180247b90(param_1,piVar2);
      return;
    }
    uVar4 = _malloc_base(0xb0);
    FUN_1802479b0(param_1,piVar2,uVar4);
  }
  return;
}

