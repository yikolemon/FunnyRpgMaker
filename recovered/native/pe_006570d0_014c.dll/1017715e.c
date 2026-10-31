/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017715e */

undefined4 __fastcall FUN_1017715e(int *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0x46d0;
  do {
    *(undefined4 *)((int)param_1 + iVar3 + -4) = 0;
    *(undefined4 *)((int)param_1 + iVar3) = 0;
    iVar3 = iVar3 + 0x48;
  } while (iVar3 != 0x47f0);
  param_1[0x1201] = 0;
  iVar3 = FUN_10174c0f();
  if (iVar3 == 0) {
    return 0;
  }
  bVar1 = FUN_10175fbb();
LAB_101771a3:
  if (bVar1 == 0xda) goto LAB_101771e5;
  if (bVar1 == 0xdc) {
    iVar3 = FUN_10171b39();
    iVar4 = FUN_10171b39();
    if ((iVar3 != 4) || (iVar4 != *(int *)(*param_1 + 4))) {
      FUN_10170e07();
      return 0;
    }
  }
  else {
    if (bVar1 == 0xd9) {
      if (param_1[0x11f3] == 0) {
        return 1;
      }
      FUN_10177d55();
      return 1;
    }
    iVar3 = FUN_10176042();
    if (iVar3 == 0) {
      return 1;
    }
  }
  goto LAB_10177222;
LAB_101771e5:
  iVar3 = FUN_10177397();
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_10177649();
  if (iVar3 == 0) {
    return 0;
  }
  if ((char)param_1[0x11f1] == -1) {
    uVar2 = FUN_10177c7b();
    *(undefined1 *)(param_1 + 0x11f1) = uVar2;
  }
  bVar1 = FUN_10175fbb();
  if ((bVar1 & 0xf8) == 0xd0) {
LAB_10177222:
    bVar1 = FUN_10175fbb();
  }
  goto LAB_101771a3;
}

