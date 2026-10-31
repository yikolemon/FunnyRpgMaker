/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100229fa */

void __thiscall FUN_100229fa(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_10;
  puVar7 = (undefined4 *)*param_1;
  puVar1 = (undefined4 *)param_1[1];
  if ((uint)((int)puVar1 - (int)puVar7 >> 2) < param_2) {
    if (0x3fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1000146d();
    }
    iVar4 = FUN_10001426(param_2 * 4);
    iVar2 = *param_1;
    uVar5 = param_1[2] - iVar2;
    if (uVar5 != 0) {
      iVar6 = iVar2;
      if (0xfff < uVar5) {
        iVar6 = *(int *)(iVar2 + -4);
        if (0x1f < (uint)((iVar2 + -4) - iVar6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar5 = uVar5 + 0x23;
      }
      FUN_102283a0(iVar6,uVar5);
    }
    *param_1 = iVar4;
    iVar2 = iVar4 + param_2 * 4;
    param_1[1] = iVar2;
    param_1[2] = iVar2;
    FUN_10022ad8(iVar4,iVar2,&param_3);
  }
  else {
    for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      *puVar7 = param_3;
    }
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

