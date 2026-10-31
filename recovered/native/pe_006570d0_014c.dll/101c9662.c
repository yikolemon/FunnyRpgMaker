/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c9662 */

float10 __thiscall FUN_101c9662(undefined8 *param_1,undefined8 param_2)

{
  float10 fVar1;
  double dVar2;
  int local_48 [9];
  int local_24;
  undefined8 local_20;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_20 = param_2;
  FUN_101c9734(&local_24,&local_20);
  if (local_24 == *(int *)((int)param_1 + 0x1c)) {
    FUN_101974ac(param_1[1],*param_1,local_20);
    fVar1 = (float10)FUN_10197570();
    dVar2 = (double)fVar1;
    FUN_101c991c(local_48,&local_20);
    *(double *)(local_48[0] + 0x10) = dVar2;
  }
  else {
    dVar2 = *(double *)(local_24 + 0x10);
  }
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return (float10)dVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

