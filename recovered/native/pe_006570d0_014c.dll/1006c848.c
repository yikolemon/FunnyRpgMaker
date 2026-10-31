/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006c848 */

void __fastcall FUN_1006c848(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int iStack_2c;
  undefined4 uStack_28;
  uint auStack_24 [3];
  uint uStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  iStack_2c = 0x1006c865;
  FUN_10002303();
  piVar1 = *(int **)(param_1 + 4);
  iStack_2c = 0x1006c86d;
  FUN_10002303();
  iStack_2c = (int)piVar1;
  if (7 < (uint)piVar1[5]) {
    iStack_2c = *piVar1;
  }
  uVar3 = FUN_10229350();
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  auStack_24[0] = (uint)uVar3 & 1;
  auStack_24[1] = 0;
  uStack_28 = FUN_10002303();
  iStack_2c = iVar2;
  if (iVar2 == 0x91) {
    FUN_1006b94e(piVar1,&iStack_2c,auStack_24);
  }
  if (DAT_10388d00 == (uStack_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

