/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140022a21 */

ulonglong FUN_140022a21(longlong *param_1,longlong *param_2,uint param_3,int param_4,
                       longlong *param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStackY_a8 [32];
  uint local_5c;
  longlong local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_a8;
  lVar1 = *param_1;
  uVar2 = FUN_140020764(param_1,param_2,param_3,&local_4c,&local_50);
  if (uVar2 == 0) {
    iVar3 = FUN_140020b47(param_1,param_2,local_4c,local_50,0x504f5354,'\x01',&local_58,&local_5c);
    if (iVar3 == 0) {
      uVar4 = FUN_140022d88(param_1,param_2,local_58,local_5c,param_4,param_5);
      uVar5 = uVar4 & 0xffffffff;
      FUN_14001c53d(lVar1,local_58);
      if ((int)uVar4 != 0) goto LAB_140022a67;
      *(undefined4 *)*param_5 = 1;
    }
    else {
      uVar2 = FUN_140020b47(param_1,param_2,local_4c,local_50,0x73666e74,'\0',&local_58,&local_5c);
      if (uVar2 != 0) goto LAB_140022a64;
      uVar2 = FUN_1400230d9(param_1,param_2,local_58,local_5c,param_4 % (int)local_5c,param_5);
      uVar5 = (ulonglong)uVar2;
      FUN_14001c53d(lVar1,local_58);
      if (uVar2 != 0) goto LAB_140022a67;
      *(uint *)*param_5 = local_5c;
      *(int *)(*param_5 + 4) = param_4 % (int)local_5c;
    }
    uVar5 = 0;
  }
  else {
LAB_140022a64:
    uVar5 = (ulonglong)uVar2;
  }
LAB_140022a67:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_a8)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_a8);
}

