/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140113e1c */

void FUN_140113e1c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_140113df8();
  *puVar1 = param_1;
  uVar2 = FUN_140113e44(param_1);
  puVar1 = (undefined4 *)FUN_140113dd4();
  *puVar1 = uVar2;
  return;
}

