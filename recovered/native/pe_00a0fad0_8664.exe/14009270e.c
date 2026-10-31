/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009270e */

ulonglong FUN_14009270e(undefined4 param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 ***pppuVar2;
  ulonglong uVar3;
  undefined1 local_a8 [32];
  undefined8 **local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong local_70;
  undefined8 **local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_88 = (undefined8 ***)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 7;
  local_68 = (undefined8 ***)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 7;
  FUN_1400089b8(&local_68,param_1);
  pppuVar2 = &local_68;
  if (7 < local_50) {
    pppuVar2 = (undefined8 ***)local_68;
  }
  FUN_140092a34(param_3,local_a8,pppuVar2,(longlong)pppuVar2 + local_58 * 2);
  FUN_14000ff1e(&local_68,local_a8);
  FUN_140005242(local_a8);
  for (; param_2 != (int *)0x0; param_2 = *(int **)(param_2 + 6)) {
    for (uVar3 = 0; (uint)uVar3 < (uint)param_2[3]; uVar3 = (ulonglong)((uint)uVar3 + *param_2)) {
      FUN_14000ffc0(&local_88,uVar3 * 2 + *(longlong *)(param_2 + 4),*param_2);
      pppuVar2 = &local_88;
      if (7 < local_70) {
        pppuVar2 = (undefined8 ***)local_88;
      }
      FUN_140092a34(param_3,local_a8,pppuVar2,(longlong)pppuVar2 + local_78 * 2);
      FUN_14000ff1e(&local_88,local_a8);
      FUN_140005242(local_a8);
      cVar1 = FUN_14001014c(&local_88,&local_68);
      if (cVar1 != '\0') goto LAB_140092830;
    }
  }
LAB_140092830:
  FUN_140005242(&local_68);
  FUN_140005242(&local_88);
  return CONCAT71((int7)((ulonglong)local_a8 >> 8),param_2 != (int *)0x0) & 0xffffffff;
}

