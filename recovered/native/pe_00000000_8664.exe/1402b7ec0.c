/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b7ec0 */

undefined8 * FUN_1402b7ec0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = FUN_1402b81d2(param_1,param_2,0);
  if (iVar2 == 0) {
    return param_1;
  }
  FUN_14027e1bf("L\\WolfRPG\\FileCoder.hpp",iVar2,param_2);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}

