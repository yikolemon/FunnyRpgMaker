/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020872f */

undefined8 FUN_18020872f(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  
  FUN_18020880d();
  if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x18c)) {
    if (*param_4 != 0) {
      iVar1 = FUN_1801cb4a4();
      *param_4 = iVar1;
    }
    if (param_4[1] != 0) {
      iVar1 = FUN_1801cb4a4(param_4[1],*(undefined4 *)(param_1 + 0x188),
                            *(undefined4 *)(param_1 + 0x18c));
      param_4[1] = iVar1;
    }
  }
  return 0;
}

