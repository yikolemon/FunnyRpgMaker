/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006c152 */

int FUN_1006c152(undefined4 param_1,int param_2)

{
  int iVar1;
  
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
    iVar1 = FUN_10229020(param_1,param_2);
    if (iVar1 != 0) {
      return iVar1;
    }
  } while( true );
}

