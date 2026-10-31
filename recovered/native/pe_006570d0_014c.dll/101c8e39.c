/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c8e39 */

void FUN_101c8e39(uint param_1)

{
  float10 fVar1;
  float10 fVar2;
  undefined8 in_stack_ffffffc0;
  undefined4 uVar3;
  double dVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffc0 >> 0x20);
  fVar1 = (float10)FUN_101c8dc1(param_1 >> 0x10 & 0xff);
  fVar2 = (float10)FUN_101c8dc1(param_1 >> 8 & 0xff);
  dVar4 = (double)fVar2;
  fVar2 = (float10)FUN_101c8dc1(param_1 & 0xff,uVar3,dVar4);
  FUN_101c8edb((double)fVar2 * DAT_10303860 + (double)fVar1 * DAT_10303878 + dVar4 * DAT_10303870);
  return;
}

