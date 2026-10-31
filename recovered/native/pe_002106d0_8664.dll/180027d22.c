/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180027d22 */

undefined8 * FUN_180027d22(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  uVar4 = *(uint *)(param_3 + 2);
  if ((int)uVar4 < 0x22) {
    if (uVar4 == 9) {
      lVar2 = param_2[1];
      uVar3 = lVar2 + 1;
      if ((ulonglong)param_2[2] < uVar3) {
        (*(code *)param_2[3])(param_2);
        lVar2 = param_2[1];
        uVar3 = lVar2 + 1;
      }
      param_2[1] = uVar3;
      *(undefined1 *)(*param_2 + lVar2) = 0x5c;
      uVar4 = 0x74;
    }
    else if (uVar4 == 10) {
      lVar2 = param_2[1];
      uVar3 = lVar2 + 1;
      if ((ulonglong)param_2[2] < uVar3) {
        (*(code *)param_2[3])(param_2);
        lVar2 = param_2[1];
        uVar3 = lVar2 + 1;
      }
      param_2[1] = uVar3;
      *(undefined1 *)(*param_2 + lVar2) = 0x5c;
      uVar4 = 0x6e;
    }
    else {
      if (uVar4 != 0xd) goto LAB_180027df3;
      lVar2 = param_2[1];
      uVar3 = lVar2 + 1;
      if ((ulonglong)param_2[2] < uVar3) {
        (*(code *)param_2[3])(param_2);
        lVar2 = param_2[1];
        uVar3 = lVar2 + 1;
      }
      param_2[1] = uVar3;
      *(undefined1 *)(*param_2 + lVar2) = 0x5c;
      uVar4 = 0x72;
    }
LAB_180027e3b:
    lVar2 = param_2[1];
    uVar3 = lVar2 + 1;
    if ((ulonglong)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2);
      lVar2 = param_2[1];
      uVar3 = lVar2 + 1;
    }
    param_2[1] = uVar3;
    *(char *)(*param_2 + lVar2) = (char)uVar4;
  }
  else {
    if (((uVar4 == 0x22) || (uVar4 == 0x27)) || (uVar4 == 0x5c)) {
      lVar2 = param_2[1];
      uVar3 = lVar2 + 1;
      if ((ulonglong)param_2[2] < uVar3) {
        (*(code *)param_2[3])(param_2);
        lVar2 = param_2[1];
        uVar3 = lVar2 + 1;
      }
      param_2[1] = uVar3;
      *(undefined1 *)(*param_2 + lVar2) = 0x5c;
      goto LAB_180027e3b;
    }
LAB_180027df3:
    if (uVar4 < 0x100) {
      FUN_1800280e6(param_1,param_2,0x78,uVar4);
      goto LAB_180027e64;
    }
    if (uVar4 < 0x10000) {
      FUN_1800281c1(param_1,param_2,0x75,uVar4);
      goto LAB_180027e64;
    }
    if (uVar4 < 0x110000) {
      FUN_18002829d(param_1,param_2,0x55,uVar4);
      goto LAB_180027e64;
    }
    puVar5 = (undefined1 *)*param_3;
    puVar1 = (undefined1 *)param_3[1];
    if (puVar5 != puVar1) {
      do {
        FUN_1800280e6(&local_38,param_2,0x78,*puVar5);
        puVar5 = puVar5 + 1;
        param_2 = local_38;
      } while (puVar5 != puVar1);
    }
  }
  *param_1 = param_2;
LAB_180027e64:
  if (DAT_180402640 != (local_30 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
  }
  return param_1;
}

