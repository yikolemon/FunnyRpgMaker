/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180214df8 */

undefined8 FUN_180214df8(undefined8 param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  do {
    uVar2 = uVar2 + 1;
    if (0xff < uVar2) {
      uVar1 = 0;
      uVar2 = 0;
      break;
    }
    uVar1 = FUN_180214d92(param_1,uVar2);
  } while ((int)uVar1 == 0);
  *param_2 = uVar2;
  return uVar1;
}

