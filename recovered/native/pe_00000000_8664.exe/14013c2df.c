/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013c2df */

int FUN_14013c2df(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  lVar4 = *param_1;
  iVar1 = 0;
  if ((*(byte *)(lVar4 + 8) & 2) != 0) {
    iVar1 = (**(code **)(*(longlong *)(lVar4 + 0x2d0) + 0xe0))(lVar4,param_2,&local_24);
    if (iVar1 == 0) {
      iVar2 = FUN_14013c3c9(param_1,local_24);
      goto LAB_14013c39d;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar4 = *param_1;
  }
  iVar2 = FUN_14012b478(lVar4,param_2);
  if (((iVar2 == 0) && (iVar2 = iVar1, (*(byte *)(*param_1 + 8) & 1) != 0)) &&
     (iVar2 = FUN_140147f78(param_1), iVar2 == 0)) {
    iVar1 = param_2[(ulonglong)(*(ushort *)param_1[8] <= ((ushort *)param_1[8])[1]) + 3];
    if (param_2[(ulonglong)(*(ushort *)param_1[8] <= ((ushort *)param_1[8])[1]) + 3] == 0) {
      iVar1 = 0x48;
    }
    if (*param_2 == 4) {
      iVar1 = 0x48;
    }
    uVar3 = FUN_14012a478(*(undefined2 *)((longlong)param_1 + 0x74),0x1200,iVar1);
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
    iVar2 = 0;
  }
LAB_14013c39d:
  if (DAT_140f17b40 != (local_20 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
  }
  return iVar2;
}

