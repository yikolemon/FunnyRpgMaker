/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00424186 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00424186(undefined8 param_1,double param_2,double param_3)

{
  int iVar1;
  void *extraout_ECX;
  void *this;
  float10 fVar2;
  double dVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar7;
  double dVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  if (((_DAT_004d7ed8 < param_3) || (param_2 < DAT_004d7ee0)) || (param_3 < DAT_004d7ee0)) {
    FUN_00424e81(param_3);
  }
  else {
    fVar2 = FUN_00424e07((uint)param_1,(int)((ulonglong)param_1 >> 0x20));
    dVar3 = ((double)fVar2 / _DAT_004d7ee8) * DAT_004d7ef0;
    fVar2 = FUN_00424db1(param_3);
    uVar4 = (undefined4)((ulonglong)dVar3 >> 0x20);
    dVar6 = (double)fVar2;
    uVar5 = SUB84(dVar6,0);
    uVar7 = (uint)((ulonglong)dVar6 >> 0x20);
    iVar1 = FUN_00423d16(extraout_ECX,SUB84(dVar3,0),uVar4,SUB84(param_2,0),
                         (int)((ulonglong)param_2 >> 0x20),uVar5,uVar7,SUB84(dVar3,0),
                         (double)CONCAT44(uVar5,uVar4),uVar7,uVar5);
    if (iVar1 == 0) {
      FUN_0042385a((double *)&local_28,dVar6,dVar3);
      FUN_00424b24(this,CONCAT44(uStack_24,local_28),CONCAT44(uStack_1c,uStack_20),local_18);
    }
  }
  if (DAT_0050e8c0 == (local_10 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_10 ^ (uint)&stack0xfffffffc);
}

