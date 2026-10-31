/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006a88a */

undefined8 * FUN_18006a88a(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = FUN_18006bb6c(param_1,param_2,0);
  if (iVar2 == 0) {
    return param_1;
  }
  FUN_18006ccef("directory_iterator::directory_iterator",iVar2,param_2);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}

