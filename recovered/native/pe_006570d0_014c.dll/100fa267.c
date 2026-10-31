/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fa267 */

char * FUN_100fa267(char *param_1,uint *param_2,char *param_3)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == (uint *)0x0) {
    sVar1 = _strlen(param_1);
    uVar2 = sVar1 + 1;
  }
  else {
    uVar2 = *param_2;
  }
  sVar1 = _strlen(param_3);
  uVar3 = sVar1 + 1;
  if (uVar2 < uVar3) {
    FUN_100fa2cb(param_1);
    param_1 = (char *)FUN_100fa1fa(uVar3);
    if (param_2 != (uint *)0x0) {
      *param_2 = uVar3;
    }
  }
  FUN_1025b2d0(param_1,param_3,uVar3);
  return param_1;
}

