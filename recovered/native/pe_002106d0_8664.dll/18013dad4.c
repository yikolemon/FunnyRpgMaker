/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013dad4 */

undefined8
FUN_18013dad4(undefined8 param_1,undefined8 param_2,undefined4 param_3,ushort *param_4,
             ushort *param_5,ushort *param_6,undefined8 param_7,undefined4 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_78;
  switch(param_3) {
  case 0:
    local_24 = (uint)(char)(byte)*param_4;
    local_38 = param_9;
    local_40 = param_8;
    local_48 = param_7;
    local_50 = CONCAT44(local_50._4_4_,(int)(char)(byte)*param_6);
    local_58 = CONCAT44(local_58._4_4_,(int)(char)(byte)*param_5);
    uVar1 = FUN_18013dd9e(param_1,param_2,4);
    goto LAB_18013dcc1;
  case 1:
    local_24 = (uint)(byte)*param_4;
    local_38 = param_9;
    local_40 = param_8;
    local_48 = param_7;
    local_50 = CONCAT44(local_50._4_4_,(uint)(byte)*param_6);
    local_58 = CONCAT44(local_58._4_4_,(uint)(byte)*param_5);
    uVar1 = FUN_18013e52f(param_1,param_2,5);
LAB_18013dcc1:
    if ((char)uVar1 != '\0') {
      *(byte *)param_4 = (byte)local_24;
    }
LAB_18013dd2d:
    if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_78)) {
      return uVar1;
    }
    goto LAB_18013dd90;
  case 2:
    local_24 = (uint)(short)*param_4;
    local_38 = param_9;
    local_40 = param_8;
    local_48 = param_7;
    local_50 = CONCAT44(local_50._4_4_,(int)(short)*param_6);
    local_58 = CONCAT44(local_58._4_4_,(int)(short)*param_5);
    uVar1 = FUN_18013dd9e(param_1,param_2,4);
    goto LAB_18013dc44;
  case 3:
    local_24 = (uint)*param_4;
    local_38 = param_9;
    local_40 = param_8;
    local_48 = param_7;
    local_50 = CONCAT44(local_50._4_4_,(uint)*param_6);
    local_58 = CONCAT44(local_58._4_4_,(uint)*param_5);
    uVar1 = FUN_18013e52f(param_1,param_2,5);
LAB_18013dc44:
    if ((char)uVar1 != '\0') {
      *param_4 = (ushort)local_24;
    }
    goto LAB_18013dd2d;
  case 4:
    local_38 = param_9;
    local_40 = param_8;
    local_48 = param_7;
    local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)param_6);
    local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)param_5);
    uVar1 = FUN_18013dd9e(param_1,param_2,4,param_4);
    break;
  case 5:
    local_38 = param_9;
    local_40 = param_8;
    local_48 = param_7;
    local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)param_6);
    local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)param_5);
    uVar1 = FUN_18013e52f(param_1,param_2,5,param_4);
    break;
  case 6:
    local_50 = *(undefined8 *)param_6;
    local_58 = *(undefined8 *)param_5;
    local_38 = param_9;
    local_40 = param_8;
    local_48 = param_7;
    uVar1 = FUN_18013ecc2(param_1,param_2,6,param_4);
    break;
  case 7:
    local_50 = *(undefined8 *)param_6;
    local_58 = *(undefined8 *)param_5;
    local_38 = param_9;
    local_40 = param_8;
    local_48 = param_7;
    uVar1 = FUN_18013f460(param_1,param_2,7,param_4);
    break;
  case 8:
    local_38 = param_9;
    local_40 = param_8;
    local_48 = param_7;
    local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)param_6);
    local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)param_5);
    uVar1 = FUN_18013fc1e(*(undefined4 *)param_6,*(undefined4 *)param_5,8,param_4);
    break;
  case 9:
    local_50 = *(undefined8 *)param_6;
    local_58 = *(undefined8 *)param_5;
    local_38 = param_9;
    local_40 = param_8;
    local_48 = param_7;
    uVar1 = FUN_1801403ea(local_50,local_58,9,param_4);
    break;
  default:
    uVar1 = 0;
    goto LAB_18013dd2d;
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_78)) {
    return uVar1;
  }
LAB_18013dd90:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_78);
}

