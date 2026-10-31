/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fa1cb */

undefined4 FUN_100fa1cb(char *param_1)

{
  size_t sVar1;
  undefined4 uVar2;
  
  sVar1 = _strlen(param_1);
  uVar2 = FUN_100fa1fa(sVar1 + 1);
  FUN_1025b2d0(uVar2,param_1,sVar1 + 1);
  return uVar2;
}

