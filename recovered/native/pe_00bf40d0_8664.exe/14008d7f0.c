/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008d7f0 */

void FUN_14008d7f0(int *param_1,longlong param_2,ULONG_PTR param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  PVOID pvVar3;
  longlong local_res8;
  byte local_38 [4];
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  uVar1 = param_4[1];
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_38[0] = 0;
  local_res8 = param_2;
  pvVar3 = FUN_14009d690();
  *(ulonglong *)((longlong)pvVar3 + 0x60) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0xe);
  pvVar3 = FUN_14009d690();
  *(undefined8 *)((longlong)pvVar3 + 0x68) = uVar2;
  pvVar3 = FUN_14009d690();
  FUN_14008cad0((byte *)((ulonglong)*(uint *)param_4[7] + *(longlong *)((longlong)pvVar3 + 0x60)),
                local_38,param_4[1],*(int *)param_4[2],'\0');
  FUN_14009ef70(param_1,&local_res8,param_3,param_4,local_38,0,0,0);
  return;
}

