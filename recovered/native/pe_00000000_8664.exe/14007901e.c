/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007901e */

undefined4 FUN_14007901e(undefined8 param_1,undefined8 param_2,float param_3)

{
  undefined4 uVar1;
  
  if ((param_3 != 0.0) || (NAN(param_3))) {
    FUN_140079071(param_3);
  }
  uVar1 = FUN_1400bed4f(param_2,param_1,0x100,0,0,0);
  if ((char)uVar1 != '\0') {
    FUN_140078ecc(param_1);
  }
  return uVar1;
}

