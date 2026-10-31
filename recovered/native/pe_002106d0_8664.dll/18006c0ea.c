/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006c0ea */

undefined8 FUN_18006c0ea(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  do {
    if (*(short *)(param_2 + 0x2c) != 0x2e) {
      return 0;
    }
    if (*(short *)(param_2 + 0x2e) != 0) {
      if (*(short *)(param_2 + 0x2e) != 0x2e) {
        return 0;
      }
      if (*(short *)(param_2 + 0x30) != 0) {
        return 0;
      }
    }
    uVar1 = FUN_18023a590(param_1,param_2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  } while( true );
}

