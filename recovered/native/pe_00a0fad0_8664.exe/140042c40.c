/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140042c40 */

undefined8 FUN_140042c40(undefined8 param_1,longlong param_2)

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
    uVar1 = FUN_1400dcef0(param_1,param_2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  } while( true );
}

