/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003a227 */

int FUN_14003a227(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  lVar4 = *param_1;
  iVar1 = 0;
  if ((*(byte *)(lVar4 + 8) & 2) != 0) {
    iVar1 = (**(code **)(*(longlong *)(lVar4 + 0x2d0) + 0xe0))(lVar4,param_2,&local_24);
    if (iVar1 == 0) {
      uVar3 = FUN_14003a311(param_1,(ulonglong)local_24);
      iVar2 = (int)uVar3;
      goto LAB_14003a2e5;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar4 = *param_1;
  }
  uVar3 = FUN_14001edff(lVar4,param_2);
  iVar2 = (int)uVar3;
  if ((iVar2 == 0) && (iVar2 = iVar1, (*(byte *)(*param_1 + 8) & 1) != 0)) {
    uVar3 = FUN_140045ec0(param_1);
    iVar2 = (int)uVar3;
    if (iVar2 == 0) {
      uVar5 = param_2[(ulonglong)(*(ushort *)param_1[8] <= ((ushort *)param_1[8])[1]) + 3];
      if (param_2[(ulonglong)(*(ushort *)param_1[8] <= ((ushort *)param_1[8])[1]) + 3] == 0) {
        uVar5 = 0x48;
      }
      if (*param_2 == 4) {
        uVar5 = 0x48;
      }
      iVar1 = FUN_14001de7c((uint)*(ushort *)((longlong)param_1 + 0x74),0x1200,uVar5);
      *(int *)((longlong)param_1 + 0x84) = iVar1;
      iVar2 = 0;
    }
  }
LAB_14003a2e5:
  if (DAT_14012ea80 != (local_20 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_20 ^ (ulonglong)auStack_48);
  }
  return iVar2;
}

