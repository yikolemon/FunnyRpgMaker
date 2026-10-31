/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10151f8b */

int __fastcall FUN_10151f8b(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0x10);
  iVar3 = ~uVar2 + *(int *)(param_1 + 0x3c);
  if (iVar3 < param_4 && (uVar1 >> 0x16 & 1) == 0) {
    param_4 = FUN_100fab65(param_3,param_4 + param_3,iVar3 + param_3);
    param_4 = param_4 - param_3;
  }
  if (param_4 != 0) {
    if (((uVar1 >> 0x16 & 1) == 0) || ((int)(param_4 + uVar2) < *(int *)(param_1 + 0x18))) {
      iVar3 = *(int *)(param_1 + 0x20);
    }
    else {
      uVar4 = FUN_100fbc6a(0x100,param_4);
      iVar3 = FUN_10125d9a(param_4,0x20,uVar4);
      iVar6 = iVar3 + uVar2 + 1;
      iVar5 = *(int *)(param_1 + 0x1c);
      if ((int)(iVar3 + uVar2) < iVar5) {
        iVar3 = *(int *)(param_1 + 0x20);
      }
      else {
        if (iVar5 == 0) {
          iVar5 = 8;
        }
        else {
          iVar5 = iVar5 / 2 + iVar5;
        }
        if (iVar5 <= iVar6) {
          iVar5 = iVar6;
        }
        iVar3 = FUN_100fa1fa(iVar5);
        if (*(int *)(param_1 + 0x20) != 0) {
          FUN_1025b2d0(iVar3,*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x18));
          FUN_100fa2cb(*(undefined4 *)(param_1 + 0x20));
        }
        *(int *)(param_1 + 0x20) = iVar3;
        *(int *)(param_1 + 0x1c) = iVar5;
      }
      *(int *)(param_1 + 0x18) = iVar6;
      *(int *)(param_1 + 0x14) = iVar3;
    }
    if (uVar2 - param_2 != 0) {
      FUN_1025b2d0(param_2 + iVar3 + param_4,param_2 + iVar3,uVar2 - param_2);
    }
    FUN_1025b2d0(iVar3 + param_2,param_3,param_4);
    *(undefined2 *)(param_1 + 0x57) = 0x101;
    iVar3 = *(int *)(param_1 + 0x10) + param_4;
    *(int *)(param_1 + 0x10) = iVar3;
    *(undefined1 *)(*(int *)(param_1 + 0x20) + iVar3) = 0;
  }
  return param_4;
}

