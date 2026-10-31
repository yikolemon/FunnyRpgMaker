/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c7475 */

undefined4
FUN_101c7475(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
            undefined4 param_13)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  fVar1 = (float10)FUN_101c7430(param_8,param_9,param_10,param_11,(int)param_12,
                                (int)((ulonglong)param_12 >> 0x20),param_13);
  uVar3 = (undefined4)((ulonglong)param_6 >> 0x20);
  fVar2 = (float10)FUN_101c7430(param_2,param_3,param_4,param_5,(int)param_6,uVar3,param_13);
  fVar1 = (float10)FUN_101c73b8((double)fVar2,param_7,(double)fVar1);
  FUN_101c73e8(param_1,param_2,param_3,param_4,param_5,(int)param_6,uVar3,(double)fVar1,param_8,
               param_9,param_10,param_11,param_12);
  return param_1;
}

