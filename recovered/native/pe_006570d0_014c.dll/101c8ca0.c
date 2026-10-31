/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c8ca0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_101c832a(undefined8 param_1,double param_2,double param_3)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  undefined4 uVar4;
  double dVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  uint uStack_10;
  
  uStack_10 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
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
      FUN_101c79fe(&uStack_28,SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),SUB84(dVar3,0),
                   (int)((ulonglong)dVar3 >> 0x20));
      FUN_101c8cc8(uStack_28,uStack_24,uStack_20,uStack_1c,(int)uStack_18,
                   (int)((ulonglong)uStack_18 >> 0x20));
    }
  }
  if (DAT_10388d00 == (uStack_10 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

