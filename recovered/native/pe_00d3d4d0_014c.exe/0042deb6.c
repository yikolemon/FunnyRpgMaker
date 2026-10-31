/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042deb6 */

float10 FUN_0042deb6(int param_1)

{
  double dVar1;
  bool bVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 local_58 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  bVar2 = FUN_00424fc5(param_1);
  if (bVar2) {
    dVar1 = DAT_004d72c0;
    if (*(char *)(param_1 + 0x24) == '\0') {
      dVar1 = DAT_004dca88;
    }
  }
  else {
    uVar3 = FUN_00424fb4(param_1);
    if ((char)uVar3 == '\0') {
      dVar1 = DAT_004dca68;
      if (*(char *)(param_1 + 0x24) == '\0') {
        dVar1 = DAT_004dc9b0;
      }
    }
    else {
      fVar4 = FUN_0041ba30(param_1);
      uVar3 = FUN_00424f90((void *)(param_1 + 0x90),(double)fVar4);
      FUN_0041ba0a(&local_38,uVar3);
      FUN_0047aae9(local_58,local_38,uStack_34,uStack_30,uStack_2c,local_28,uStack_24,uStack_20,
                   uStack_1c);
      fVar4 = FUN_0041ba30((int)local_58);
      dVar1 = (double)fVar4;
    }
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&stack0xfffffffc);
  }
  return (float10)dVar1;
}

