/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027a4dc */

undefined4 FUN_1027a4dc(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1026faa0(param_2);
  *param_1 = iVar1;
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0xc;
  }
  return uVar2;
}

