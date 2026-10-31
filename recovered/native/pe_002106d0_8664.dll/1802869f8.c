/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802869f8 */

undefined8 FUN_1802869f8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_180290c30(0,0,0,0,0,param_2);
    uVar1 = 0xffffffffffffffff;
  }
  else {
    FUN_180272400();
    uVar1 = FUN_180286818(param_1,param_2);
    FUN_18027240c(param_1);
  }
  return uVar1;
}

