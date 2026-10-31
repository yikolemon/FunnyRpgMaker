/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140131dde */

undefined8
FUN_140131dde(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_140131e22();
  if (cVar1 != '\0') {
    uVar2 = FUN_140131e32(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}

