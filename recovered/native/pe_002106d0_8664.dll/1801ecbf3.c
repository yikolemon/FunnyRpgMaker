/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ecbf3 */

int FUN_1801ecbf3(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  lVar4 = *param_1;
  iVar1 = 0;
  if ((*(byte *)(lVar4 + 8) & 2) != 0) {
    iVar1 = (**(code **)(*(longlong *)(lVar4 + 0x2d0) + 0xe0))(lVar4,param_2,&local_24);
    if (iVar1 == 0) {
      iVar2 = FUN_1801eccdd(param_1,local_24);
      goto LAB_1801eccb1;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar4 = *param_1;
  }
  iVar2 = FUN_1801cc4a4(lVar4,param_2);
  if (((iVar2 == 0) && (iVar2 = iVar1, (*(byte *)(*param_1 + 8) & 1) != 0)) &&
     (iVar2 = FUN_1801f888c(param_1), iVar2 == 0)) {
    iVar1 = param_2[(ulonglong)(*(ushort *)param_1[8] <= ((ushort *)param_1[8])[1]) + 3];
    if (param_2[(ulonglong)(*(ushort *)param_1[8] <= ((ushort *)param_1[8])[1]) + 3] == 0) {
      iVar1 = 0x48;
    }
    if (*param_2 == 4) {
      iVar1 = 0x48;
    }
    uVar3 = FUN_1801cb4a4(*(undefined2 *)((longlong)param_1 + 0x74),0x1200,iVar1);
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
    iVar2 = 0;
  }
LAB_1801eccb1:
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
  }
  return iVar2;
}

