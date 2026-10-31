/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001e498 */

void FUN_18001e498(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong unaff_RBX;
  undefined7 uVar8;
  ulonglong unaff_R14;
  
  lVar1 = param_1 + 0x38;
  uVar7 = 1;
  do {
    do {
      while( true ) {
        iVar4 = FUN_18001e5b2(param_1,uVar7);
        uVar8 = (undefined7)(unaff_RBX >> 8);
        if (iVar4 != 1) break;
        unaff_RBX = CONCAT71(uVar8,*(char *)(param_1 + 0x76));
        if ((*(byte *)(param_1 + 0x62) & 8) == 0 && *(char *)(param_1 + 0x76) == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_18001d772(param_1,2);
        }
        if (*(int *)(param_1 + 0x70) == 0x2d) goto LAB_18001e4e8;
        FUN_18001e668(lVar1);
        uVar7 = 0;
      }
      if (iVar4 == 0) {
        return;
      }
      uVar7 = 0;
    } while (*(int *)(param_1 + 0x70) != 0x2d);
    unaff_RBX = CONCAT71(uVar8,*(undefined1 *)(param_1 + 0x76));
LAB_18001e4e8:
    unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),*(undefined1 *)(param_1 + 0x75));
    FUN_18001d674(param_1);
    iVar5 = FUN_18001e5b2(param_1,0);
    if (iVar5 == 0) {
      if (iVar4 != 2) {
        FUN_18001e668(lVar1,unaff_RBX & 0xffffffff);
      }
      FUN_18001e668(lVar1,unaff_R14 & 0xffffffff);
      return;
    }
    if ((iVar4 == 2) || (iVar5 == 2)) {
                    /* WARNING: Subroutine does not return */
      FUN_18001d772(param_1,8);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x76);
    if ((*(byte *)(param_1 + 0x69) & 1) != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
      uVar6 = (**(code **)(*plVar2 + 0x20))(plVar2,unaff_RBX & 0xffffffff);
      unaff_RBX = (ulonglong)uVar6;
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,uVar3);
    }
    FUN_18001e694(lVar1,unaff_RBX & 0xffffffff,uVar3);
    uVar7 = 0;
  } while( true );
}

