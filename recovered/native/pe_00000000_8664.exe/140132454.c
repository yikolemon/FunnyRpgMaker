/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140132454 */

void FUN_140132454(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140131e22(*(undefined8 *)(param_2 + 0x30));
  if (cVar1 != '\0') {
    FUN_14013249e();
    return;
  }
  FUN_1401326ee(param_1,param_2,param_3,param_4);
  return;
}

