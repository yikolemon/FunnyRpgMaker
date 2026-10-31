/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10117c4b */

undefined4 FUN_10117c4b(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = DAT_1039d74c;
  if ((1 < param_4) && (*(int *)(DAT_1039d74c + 0x2270) != -1)) goto LAB_10117d85;
  FUN_100fa19f(DAT_1039d74c + 0x2274,param_1,0x21);
  uVar3 = *(uint *)(iVar1 + 0x22e0);
  if ((int)uVar3 < 0) {
    uVar2 = FUN_100fa1fa(0);
    if (*(int *)(iVar1 + 0x22e4) != 0) {
      FUN_1025b2d0(uVar2,*(int *)(iVar1 + 0x22e4),*(undefined4 *)(iVar1 + 0x22dc));
      FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x22e4));
    }
    *(undefined4 *)(iVar1 + 0x22e4) = uVar2;
    *(undefined4 *)(iVar1 + 0x22e0) = 0;
    uVar3 = 0;
  }
  *(undefined4 *)(iVar1 + 0x22dc) = 0;
  if (param_3 < 0x11) {
    if (param_3 != 0) {
      iVar4 = iVar1 + 0x22e8;
      *(undefined4 *)(iVar1 + 0x22e8) = 0;
      *(undefined4 *)(iVar1 + 0x22ec) = 0;
      *(undefined4 *)(iVar1 + 0x22f0) = 0;
      *(undefined4 *)(iVar1 + 0x22f4) = 0;
      *(int *)(iVar1 + 0x2260) = iVar4;
      goto LAB_10117d77;
    }
    *(undefined4 *)(iVar1 + 0x2260) = 0;
  }
  else {
    if ((int)uVar3 < (int)param_3) {
      uVar5 = 8;
      if (uVar3 != 0) {
        uVar5 = (uVar3 >> 1) + uVar3;
      }
      if (uVar5 <= param_3) {
        uVar5 = param_3;
      }
      iVar4 = FUN_100fa1fa(uVar5);
      if (*(int *)(iVar1 + 0x22e4) != 0) {
        FUN_1025b2d0(iVar4,*(int *)(iVar1 + 0x22e4),*(undefined4 *)(iVar1 + 0x22dc));
        FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x22e4));
      }
      *(int *)(iVar1 + 0x22e4) = iVar4;
      *(uint *)(iVar1 + 0x22e0) = uVar5;
    }
    else {
      iVar4 = *(int *)(iVar1 + 0x22e4);
    }
    *(uint *)(iVar1 + 0x22dc) = param_3;
    *(int *)(iVar1 + 0x2260) = iVar4;
LAB_10117d77:
    FUN_1025b2d0(iVar4,param_2,param_3);
  }
  *(uint *)(iVar1 + 0x2264) = param_3;
LAB_10117d85:
  iVar4 = *(int *)(iVar1 + 4);
  *(int *)(iVar1 + 0x2270) = iVar4;
  return CONCAT31((int3)((uint)(iVar4 + -1) >> 8),
                  *(int *)(iVar1 + 0x22d4) == iVar4 + -1 || *(int *)(iVar1 + 0x22d4) == iVar4);
}

