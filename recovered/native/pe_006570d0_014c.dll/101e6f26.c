/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e6f26 */

int __fastcall FUN_101e6f26(int param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uStack_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&uStack_1c;
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  iStack_18 = (**(code **)(param_1 + 0x204))(param_1,0x63767420,param_2,&uStack_1c);
  if (iStack_18 == 0) {
    *(uint *)(param_1 + 0x2c0) = uStack_1c >> 1;
    uVar3 = FUN_101c2a50(uVar3,4,0,uStack_1c >> 1,0,&iStack_18);
    *(undefined4 *)(param_1 + 0x2c4) = uVar3;
    iVar4 = iStack_18;
    if ((iStack_18 == 0) &&
       (iStack_18 = FUN_101c4b69(param_2,*(int *)(param_1 + 0x2c0) * 2), iVar4 = iStack_18,
       iStack_18 == 0)) {
      if (*(int *)(param_1 + 0x2c0) != 0) {
        piVar5 = *(int **)(param_1 + 0x2c4);
        piVar1 = piVar5 + *(int *)(param_1 + 0x2c0);
        do {
          sVar2 = FUN_101c4ca6(param_2);
          *piVar5 = (int)sVar2 << 6;
          piVar5 = piVar5 + 1;
        } while (piVar5 < piVar1);
      }
      FUN_101c4c66(param_2);
      iVar4 = iStack_18;
      if (*(char *)(param_1 + 0x2dd) != '\0') {
        iVar4 = FUN_101e7021();
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2c0) = 0;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    iVar4 = 0;
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&uStack_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar4;
}

