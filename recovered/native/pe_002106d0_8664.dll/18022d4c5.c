/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022d4c5 */

undefined8 FUN_18022d4c5(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 6;
  if (*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x20)) {
    if (param_3 != 0) {
      FUN_1801cb555(param_2 + 0x98,param_3);
    }
    uVar1 = 0;
    if (param_4 != (undefined4 *)0x0) {
      FUN_1801cb5a0(param_2 + 0x98,*param_4,param_4[1]);
    }
  }
  return uVar1;
}

