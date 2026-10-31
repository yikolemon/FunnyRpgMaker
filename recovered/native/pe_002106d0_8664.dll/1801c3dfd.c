/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c3dfd */

void FUN_1801c3dfd(longlong param_1,float param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  param_2 = param_2 + (float)DAT_1802de570;
  param_3 = param_3 + DAT_1802de570._4_4_;
  iVar5 = *(int *)(param_1 + 0x50);
  lVar6 = 0;
  do {
    uVar1 = *(undefined8 *)((longlong)&DAT_180328e90 + lVar6);
    if (iVar5 == *(int *)(param_1 + 0x54)) {
      if (iVar5 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar5 / 2 + iVar5;
      }
      iVar4 = iVar5 + 1;
      if (iVar5 + 1 < iVar2) {
        iVar4 = iVar2;
      }
      lVar3 = FUN_1800fe7f8((longlong)iVar4 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1802a82f0(lVar3,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar3;
      *(int *)(param_1 + 0x54) = iVar4;
      iVar5 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x58);
    }
    *(ulonglong *)(lVar3 + (longlong)iVar5 * 8) =
         CONCAT44((float)(int)((float)((ulonglong)uVar1 >> 0x20) * param_4) + param_3,
                  (float)(int)((float)uVar1 * param_4) + param_2);
    iVar5 = *(int *)(param_1 + 0x50) + 1;
    *(int *)(param_1 + 0x50) = iVar5;
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x40);
  return;
}

