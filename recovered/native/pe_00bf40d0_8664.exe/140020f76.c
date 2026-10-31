/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140020f76 */

undefined8 FUN_140020f76(longlong *param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = 0x55;
  uVar2 = *(uint *)(param_1 + 1) - param_2;
  if (param_2 <= *(uint *)(param_1 + 1) && uVar2 != 0) {
    if ((code *)param_1[4] == (code *)0x0) {
      if (param_4 <= uVar2) {
        uVar2 = param_4;
      }
      if (param_4 != 0) {
        FUN_1400b3550(param_3,(undefined8 *)((ulonglong)param_2 + *param_1),(ulonglong)uVar2);
      }
    }
    else {
      uVar2 = (*(code *)param_1[4])(param_1,param_2,param_3,param_4);
    }
    *(uint *)((longlong)param_1 + 0xc) = param_2 + uVar2;
    uVar1 = 0x55;
    if (param_4 <= uVar2) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

