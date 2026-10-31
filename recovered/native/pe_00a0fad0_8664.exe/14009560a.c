/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009560a */

void FUN_14009560a(longlong param_1)

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
        iVar5 = FUN_140095732(param_1,uVar9);
        if (iVar5 != 1) break;
        uVar2 = *(ushort *)(param_1 + 0x78);
        if (uVar2 == 0 && (*(byte *)(param_1 + 0x62) & 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_14009484e(param_1,2);
        }
        if (*(int *)(param_1 + 0x70) == 0x2d) goto LAB_140095667;
        FUN_1400957ec(lVar1);
        uVar9 = 0;
      }
      if (iVar5 == 0) {
        return;
      }
      uVar9 = 0;
    } while (*(int *)(param_1 + 0x70) != 0x2d);
    uVar2 = *(ushort *)(param_1 + 0x78);
LAB_140095667:
    uVar7 = (uint)uVar2;
    uVar3 = *(undefined2 *)(param_1 + 0x76);
    FUN_14009474c(param_1);
    iVar6 = FUN_140095732(param_1,0);
    if (iVar6 == 0) {
      if (iVar5 != 2) {
        FUN_1400957ec(lVar1,uVar7);
      }
      FUN_1400957ec(lVar1,uVar3);
      return;
    }
    if ((iVar5 == 2) || (iVar6 == 2)) {
                    /* WARNING: Subroutine does not return */
      FUN_14009484e(param_1,8);
    }
    uVar2 = *(ushort *)(param_1 + 0x78);
    uVar8 = (uint)uVar2;
    if ((*(byte *)(param_1 + 0x69) & 1) != 0) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
      uVar7 = (**(code **)(*plVar4 + 0x40))(plVar4,uVar7);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
      uVar8 = (**(code **)(*plVar4 + 0x40))(plVar4,uVar2);
    }
    FUN_14009582c(lVar1,uVar7,uVar8);
    uVar9 = 0;
  } while( true );
}

