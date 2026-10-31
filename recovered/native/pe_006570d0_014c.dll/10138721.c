/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10138721 */

undefined4
FUN_10138721(undefined4 param_1,undefined4 param_2,undefined4 param_3,ushort *param_4,short *param_5
            ,short *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  switch(param_3) {
  case 0:
    local_18 = (uint)(char)(byte)*param_4;
    uVar1 = FUN_10138960(param_1,param_2,4,&local_18,(int)(char)*param_5,(int)(char)*param_6,param_7
                         ,param_8,param_9);
    goto LAB_10138893;
  case 1:
    local_18 = (uint)(byte)*param_4;
    uVar1 = FUN_10139419(param_1,param_2,5,&local_18,(char)*param_5,(char)*param_6,param_7,param_8,
                         param_9);
LAB_10138893:
    if ((char)uVar1 != '\0') {
      *(byte *)param_4 = (byte)local_18;
    }
LAB_101388e4:
    if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
      return uVar1;
    }
    goto LAB_10138955;
  case 2:
    local_18 = (uint)(short)*param_4;
    uVar1 = FUN_10138960(param_1,param_2,4,&local_18,(int)*param_5,(int)*param_6,param_7,param_8,
                         param_9);
    goto LAB_10138835;
  case 3:
    local_18 = (uint)*param_4;
    uVar1 = FUN_10139419(param_1,param_2,5,&local_18,*param_5,*param_6,param_7,param_8,param_9);
LAB_10138835:
    if ((char)uVar1 != '\0') {
      *param_4 = (ushort)local_18;
    }
    goto LAB_101388e4;
  case 4:
    uVar1 = FUN_10138960(param_1,param_2,4,param_4,*(undefined4 *)param_5,*(undefined4 *)param_6,
                         param_7,param_8,param_9);
    break;
  case 5:
    uVar1 = FUN_10139419(param_1,param_2,5,param_4,*(undefined4 *)param_5,*(undefined4 *)param_6,
                         param_7,param_8,param_9);
    break;
  case 6:
    uVar1 = FUN_10139ee6(param_1,param_2,6,param_4,*(undefined4 *)param_5,
                         *(undefined4 *)(param_5 + 2),*(undefined4 *)param_6,
                         *(undefined4 *)(param_6 + 2),param_7,param_8,param_9);
    break;
  case 7:
    uVar1 = FUN_1013a9fb(param_1,param_2,7,param_4,*(undefined4 *)param_5,
                         *(undefined4 *)(param_5 + 2),*(undefined4 *)param_6,
                         *(undefined4 *)(param_6 + 2),param_7,param_8,param_9);
    break;
  case 8:
    uVar1 = FUN_1013b52c(param_1,param_2,8,param_4,*(undefined4 *)param_5,*(undefined4 *)param_6,
                         param_7,param_8,param_9);
    break;
  case 9:
    uVar1 = FUN_1013c095(param_1,param_2,9,param_4,*(undefined8 *)param_5,*(undefined8 *)param_6,
                         param_7,param_8,param_9);
    break;
  default:
    uVar1 = 0;
    goto LAB_101388e4;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return uVar1;
  }
LAB_10138955:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

