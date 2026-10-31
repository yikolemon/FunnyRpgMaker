/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018f256 */

void FUN_18018f256(int *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_2 == -8) {
    if (*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x68) == 0) {
      param_2 = -8;
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x68) + 0xc98);
      param_2 = -8;
      if (lVar4 != 0) {
        param_2 = lVar4;
      }
    }
  }
  if (*(int *)(*(longlong *)(param_1 + 2) + -0x20 + (longlong)*param_1 * 0x48) == 0) {
    lVar4 = *(longlong *)(param_1 + 2) + (longlong)*param_1 * 0x48;
  }
  else {
    FUN_18018f126(param_1);
    lVar4 = (longlong)*param_1 * 0x48 + *(longlong *)(param_1 + 2);
  }
  *(longlong *)(lVar4 + -0x18) = param_2;
  if (param_4 == 0) {
    *(undefined8 *)(lVar4 + -0x10) = param_3;
    *(undefined8 *)(lVar4 + -8) = 0xffffffff00000000;
  }
  else {
    *(undefined8 *)(lVar4 + -0x10) = 0;
    *(int *)(lVar4 + -8) = (int)param_4;
    iVar2 = param_1[0x30];
    *(int *)(lVar4 + -4) = iVar2;
    iVar2 = iVar2 + (int)param_4;
    iVar3 = param_1[0x31];
    if (iVar3 < iVar2) {
      if (iVar3 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar3 / 2 + iVar3;
      }
      if (iVar3 <= iVar2) {
        iVar3 = iVar2;
      }
      lVar1 = FUN_1800fe7f8((longlong)iVar3);
      if (*(longlong *)(param_1 + 0x32) != 0) {
        FUN_1802a82f0(lVar1,*(longlong *)(param_1 + 0x32),(longlong)param_1[0x30]);
        FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x32));
      }
      *(longlong *)(param_1 + 0x32) = lVar1;
      param_1[0x31] = iVar3;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x32);
    }
    param_1[0x30] = iVar2;
    FUN_1802a82f0(*(int *)(lVar4 + -4) + lVar1,param_3,param_4);
  }
  FUN_18018f126(param_1);
  return;
}

