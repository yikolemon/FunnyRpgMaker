/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ca119 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_101ca119(undefined8 param_1,double param_2,double param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar4 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_101974ac(param_1,param_2,param_3);
  fVar5 = (float10)FUN_10197570();
  if ((double)fVar5 < param_2) {
    fVar5 = (float10)FUN_10197570();
    dVar1 = (double)fVar5;
    fVar5 = (float10)FUN_10197570();
    if ((double)fVar5 < param_2) {
      if (param_4 == '\0') {
        uVar6 = (undefined4)DAT_1028b438;
        uVar7 = (undefined4)((ulonglong)DAT_1028b438 >> 0x20);
      }
      else {
        uVar6 = (undefined4)DAT_10303848;
        uVar7 = (undefined4)((ulonglong)DAT_10303848 >> 0x20);
      }
      do {
        param_3 = param_3 + (double)CONCAT44(uVar7,uVar6);
        FUN_101974ac(param_1,param_2,param_3);
        fVar5 = (float10)FUN_10197570();
        if (((double)fVar5 < dVar1) ||
           (fVar5 = (float10)FUN_10197570(),
           (double)((ulonglong)((double)fVar5 - param_2) & _DAT_1028b420) < DAT_103083a0)) break;
        FUN_10197570();
        FUN_10197570();
        fVar5 = (float10)FUN_10197570();
        dVar2 = (double)fVar5;
        dVar3 = dVar2;
        if (dVar2 <= dVar1) {
          dVar3 = dVar1;
        }
        dVar1 = (double)(~-(ulonglong)NAN(dVar1) & (ulonglong)dVar3 |
                        -(ulonglong)NAN(dVar1) & (ulonglong)dVar2);
        fVar5 = (float10)FUN_10197570();
      } while ((double)fVar5 < param_2);
    }
  }
  if (DAT_10388d00 == (uVar4 ^ (uint)&stack0xfffffffc)) {
    return (float10)param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

