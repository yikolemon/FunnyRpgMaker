/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008d770 */

void FUN_14008d770(int *param_1,longlong param_2,ULONG_PTR param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  PVOID pvVar3;
  longlong local_res8 [4];
  
  uVar1 = param_4[1];
  local_res8[0] = param_2;
  pvVar3 = FUN_14009d690();
  *(ulonglong *)((longlong)pvVar3 + 0x60) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0xe);
  pvVar3 = FUN_14009d690();
  *(undefined8 *)((longlong)pvVar3 + 0x68) = uVar2;
  pvVar3 = FUN_14009d690();
  FUN_14009ef60(param_1,local_res8,param_3,param_4,
                (uint *)((ulonglong)*(uint *)param_4[7] + *(longlong *)((longlong)pvVar3 + 0x60)),0,
                0,0);
  return;
}

