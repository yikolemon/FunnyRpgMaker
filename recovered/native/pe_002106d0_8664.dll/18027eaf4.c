/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027eaf4 */

undefined4 FUN_18027eaf4(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (2 < param_3)) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_180290c30(0,0,0,0,0,param_4);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_180272400();
    uVar1 = FUN_18027ea08(param_1,param_2,param_3,param_4);
    FUN_18027240c(param_1);
  }
  return uVar1;
}

