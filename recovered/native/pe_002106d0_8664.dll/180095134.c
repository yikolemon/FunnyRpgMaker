/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180095134 */

void FUN_180095134(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  undefined2 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  lVar1 = param_1 + 0x38;
  uVar9 = 1;
  do {
    do {
      while( true ) {
        iVar5 = FUN_18009525c(param_1,uVar9);
        if (iVar5 != 1) break;
        uVar2 = *(ushort *)(param_1 + 0x78);
        if (uVar2 == 0 && (*(byte *)(param_1 + 0x62) & 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_18001d772(param_1,2);
        }
        if (*(int *)(param_1 + 0x70) == 0x2d) goto LAB_180095191;
        FUN_180095316(lVar1);
        uVar9 = 0;
      }
      if (iVar5 == 0) {
        return;
      }
      uVar9 = 0;
    } while (*(int *)(param_1 + 0x70) != 0x2d);
    uVar2 = *(ushort *)(param_1 + 0x78);
LAB_180095191:
    uVar7 = (uint)uVar2;
    uVar3 = *(undefined2 *)(param_1 + 0x76);
    FUN_180094520(param_1);
    iVar6 = FUN_18009525c(param_1,0);
    if (iVar6 == 0) {
      if (iVar5 != 2) {
        FUN_180095316(lVar1,uVar7);
      }
      FUN_180095316(lVar1,uVar3);
      return;
    }
    if ((iVar5 == 2) || (iVar6 == 2)) {
                    /* WARNING: Subroutine does not return */
      FUN_18001d772(param_1,8);
    }
    uVar2 = *(ushort *)(param_1 + 0x78);
    uVar8 = (uint)uVar2;
    if ((*(byte *)(param_1 + 0x69) & 1) != 0) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
      uVar7 = (**(code **)(*plVar4 + 0x40))(plVar4,uVar7);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
      uVar8 = (**(code **)(*plVar4 + 0x40))(plVar4,uVar2);
    }
    FUN_180095356(lVar1,uVar7,uVar8);
    uVar9 = 0;
  } while( true );
}

