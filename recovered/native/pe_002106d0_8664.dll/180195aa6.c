/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180195aa6 */

void FUN_180195aa6(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_180195b26();
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 4) = 2;
  *(int *)(param_1 + 0x1c) = param_3;
  *(int *)(param_1 + 0x20) = param_4;
  iVar1 = FUN_180195a57(param_2);
  *(int *)(param_1 + 0x24) = iVar1;
  *(undefined1 *)(param_1 + 0x56) = 0;
  uVar2 = FUN_1800fe7f8((longlong)(param_4 * param_3 * iVar1));
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  FUN_1802a89a0(uVar2,0,(longlong)*(int *)(param_1 + 0x24) *
                        (longlong)*(int *)(param_1 + 0x20) * (longlong)*(int *)(param_1 + 0x1c));
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffff;
  return;
}

