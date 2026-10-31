/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180175467 */

undefined4 FUN_180175467(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_18017f5ff(param_1,"#?RADIANCE\n");
  FUN_180176664(param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_18017f5ff(param_1,"#?RGBE\n");
    FUN_180176664(param_1);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

