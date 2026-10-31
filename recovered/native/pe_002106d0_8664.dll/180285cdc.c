/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180285cdc */

undefined2 FUN_180285cdc(undefined2 param_1,longlong param_2,longlong param_3)

{
  undefined2 uVar1;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_3 + 0x30) = 1;
    *(undefined4 *)(param_3 + 0x2c) = 0x16;
    FUN_180290c30(0,0,0,0,0,param_3);
    uVar1 = 0xffff;
  }
  else {
    FUN_180272400(param_2);
    uVar1 = FUN_180285b48(param_1,param_2,param_3);
    FUN_18027240c(param_2);
  }
  return uVar1;
}

