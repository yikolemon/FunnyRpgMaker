/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d21a2 */

undefined8 FUN_1800d21a2(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  LPVOID lpAddress;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  DWORD local_30;
  DWORD local_2c;
  DWORD local_28;
  DWORD local_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  if ((param_2 < 0x688) || (*param_1 != 0x688)) {
    SetLastError(0xc1);
    uVar3 = 0;
    goto LAB_1800d2333;
  }
  local_24 = 0xffffffff;
  local_28 = 0xffffffff;
  local_2c = 0xffffffff;
  uVar3 = 0;
  if (*(longlong *)(param_1 + 8) == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = param_1[0x1a0] != *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  }
  iVar2 = FUN_1800fcc25(*(undefined8 *)(param_1 + 4),param_1[1],0x40,&local_24);
  if (iVar2 == 0) goto LAB_1800d2333;
  iVar2 = FUN_1800fcc25(*(undefined8 *)(param_1 + 6),param_1[2],0x40,&local_28);
  if (iVar2 == 0) {
    uVar1 = param_1[1];
    lpAddress = *(LPVOID *)(param_1 + 4);
LAB_1800d232e:
    VirtualProtect(lpAddress,(ulonglong)uVar1,local_24,&local_30);
  }
  else {
    FUN_1802a82f0(*(undefined8 *)(param_1 + 4),param_1 + 10,param_1[1]);
    FUN_1802a82f0(*(undefined8 *)(param_1 + 6),param_1 + 0x1a,param_1[2]);
    if (!bVar4 && *(longlong *)(param_1 + 8) != 0) {
      iVar2 = FUN_1800fcc25(*(longlong *)(param_1 + 8),param_1[3],0x40,&local_2c);
      if (iVar2 == 0) {
        VirtualProtect(*(LPVOID *)(param_1 + 6),(ulonglong)(uint)param_1[2],local_28,&local_30);
        uVar1 = param_1[1];
        lpAddress = *(LPVOID *)(param_1 + 4);
        goto LAB_1800d232e;
      }
      FUN_1802a82f0(*(undefined8 *)(param_1 + 8),param_1 + 0x19c,param_1[3]);
      VirtualProtect(*(LPVOID *)(param_1 + 8),(ulonglong)(uint)param_1[3],local_2c,&local_30);
    }
    VirtualProtect(*(LPVOID *)(param_1 + 6),(ulonglong)(uint)param_1[2],local_28,&local_30);
    VirtualProtect(*(LPVOID *)(param_1 + 4),(ulonglong)(uint)param_1[1],local_24,&local_30);
    FUN_1800d2179(param_1);
    uVar3 = 1;
  }
LAB_1800d2333:
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

