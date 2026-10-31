/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c832a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c832a(undefined8 param_1,double param_2,double param_3)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  undefined4 uVar4;
  double dVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar4 = (undefined4)((ulonglong)param_3 >> 0x20);
  if (((_DAT_10303928 < param_3) || (param_2 < DAT_10303930)) || (param_3 < DAT_10303930)) {
    FUN_101c9025(SUB84(param_3,0),uVar4);
  }
  else {
    fVar2 = (float10)FUN_101c8fab((int)param_1,(int)((ulonglong)param_1 >> 0x20));
    dVar3 = ((double)fVar2 / _DAT_10303938) * DAT_10303940;
    fVar2 = (float10)FUN_101c8f55(SUB84(param_3,0),uVar4);
    dVar5 = (double)fVar2;
    iVar1 = FUN_101c7eba(SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),SUB84(param_2,0),
                         (int)((ulonglong)param_2 >> 0x20),dVar5,dVar3,dVar5);
    if (iVar1 == 0) {
      FUN_101c79fe(&local_28,SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),SUB84(dVar3,0),
                   (int)((ulonglong)dVar3 >> 0x20));
      FUN_101c8cc8(local_28,uStack_24,uStack_20,uStack_1c,(int)local_18,
                   (int)((ulonglong)local_18 >> 0x20));
    }
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

