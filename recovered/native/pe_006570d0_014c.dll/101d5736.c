/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d5736 */

float10 FUN_101d5736(int param_1)

{
  double dVar1;
  char cVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined1 local_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  cVar2 = FUN_101ca10d(param_1);
  if (cVar2 == '\0') {
    cVar2 = FUN_101ca0fc(param_1);
    if (cVar2 == '\0') {
      dVar1 = DAT_103084d8;
      if (*(char *)(param_1 + 0x24) == '\0') {
        dVar1 = DAT_10308420;
      }
    }
    else {
      fVar4 = (float10)FUN_10197574();
      uVar3 = FUN_101c953a((double)fVar4);
      FUN_1019754e(uVar3);
      FUN_10223a7d(local_58,local_38,uStack_34,uStack_30,uStack_2c,local_28,uStack_24,uStack_20,
                   uStack_1c);
      fVar4 = (float10)FUN_10197574();
      dVar1 = (double)fVar4;
    }
  }
  else {
    dVar1 = DAT_10301b88;
    if (*(char *)(param_1 + 0x24) == '\0') {
      dVar1 = DAT_103084f8;
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return (float10)dVar1;
}

