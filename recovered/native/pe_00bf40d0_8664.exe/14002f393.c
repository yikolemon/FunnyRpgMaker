/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002f393 */

void FUN_14002f393(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 0x18) = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  FUN_1400326a8(param_1,(longlong)param_2,0);
  FUN_1400326a8(param_1,(longlong)param_2,1);
  return;
}

