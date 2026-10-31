/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015619b */

int FUN_18015619b(longlong param_1,int param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x18);
  iVar4 = ~uVar3 + *(int *)(param_1 + 0x58);
  if (iVar4 < param_4 && (uVar2 >> 0x16 & 1) == 0) {
    param_4 = FUN_1800ff206(param_3,param_4 + param_3,iVar4 + param_3);
    param_4 = param_4 - (int)param_3;
  }
  if (param_4 != 0) {
    if (((uVar2 >> 0x16 & 1) == 0) || ((int)(param_4 + uVar3) < *(int *)(param_1 + 0x28))) {
      lVar7 = *(longlong *)(param_1 + 0x30);
    }
    else {
      uVar5 = FUN_1801003e9(0x100,param_4);
      iVar6 = FUN_18012bcdf(param_4,0x20,uVar5);
      iVar8 = iVar6 + uVar3 + 1;
      iVar4 = *(int *)(param_1 + 0x2c);
      if ((int)(iVar6 + uVar3) < iVar4) {
        lVar7 = *(longlong *)(param_1 + 0x30);
      }
      else {
        if (iVar4 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = iVar4 / 2 + iVar4;
        }
        if (iVar4 <= iVar8) {
          iVar4 = iVar8;
        }
        lVar7 = FUN_1800fe7f8((longlong)iVar4);
        if (*(longlong *)(param_1 + 0x30) != 0) {
          FUN_1802a82f0(lVar7,*(longlong *)(param_1 + 0x30),(longlong)*(int *)(param_1 + 0x28));
          FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x30));
        }
        *(longlong *)(param_1 + 0x30) = lVar7;
        *(int *)(param_1 + 0x2c) = iVar4;
      }
      *(int *)(param_1 + 0x28) = iVar8;
      *(longlong *)(param_1 + 0x20) = lVar7;
    }
    lVar9 = (longlong)param_4;
    if (uVar3 - param_2 != 0) {
      lVar1 = lVar7 + param_2;
      FUN_1802a82f0(lVar1 + lVar9,lVar1,(longlong)(int)(uVar3 - param_2));
    }
    FUN_1802a82f0(lVar7 + param_2,param_3,lVar9);
    *(undefined2 *)(param_1 + 0x73) = 0x101;
    lVar9 = *(int *)(param_1 + 0x18) + lVar9;
    *(int *)(param_1 + 0x18) = (int)lVar9;
    *(undefined1 *)(*(longlong *)(param_1 + 0x30) + lVar9) = 0;
  }
  return param_4;
}

