/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a195c */

undefined4
FUN_1802a195c(ulonglong *param_1,undefined2 *param_2,ulonglong param_3,undefined8 param_4,
             ulonglong param_5,longlong param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_2 == (undefined2 *)0x0) {
    if (param_3 == 0) {
LAB_1802a19ca:
      if (param_1 != (ulonglong *)0x0) {
        *param_1 = 0;
      }
      uVar2 = param_5;
      if (param_3 < param_5) {
        uVar2 = param_3;
      }
      if (uVar2 < 0x80000000) {
        lVar1 = FUN_1802a1764(param_2,param_4,uVar2,param_6);
        if (lVar1 == -1) {
          if (param_2 != (undefined2 *)0x0) {
            *param_2 = 0;
          }
          if (*(char *)(param_6 + 0x30) == '\0') {
            return 0;
          }
          return *(undefined4 *)(param_6 + 0x2c);
        }
        uVar2 = lVar1 + 1;
        if (param_2 == (undefined2 *)0x0) goto LAB_1802a1a57;
        if (param_3 < uVar2) {
          if (param_5 != 0xffffffffffffffff) {
            *param_2 = 0;
            uVar3 = 0x22;
            goto LAB_1802a1a38;
          }
          uVar3 = 0x50;
          uVar2 = param_3;
        }
        param_2[uVar2 - 1] = 0;
LAB_1802a1a57:
        if (param_1 == (ulonglong *)0x0) {
          return uVar3;
        }
        *param_1 = uVar2;
        return uVar3;
      }
      uVar3 = 0x16;
LAB_1802a1a38:
      *(undefined4 *)(param_6 + 0x2c) = uVar3;
      *(undefined1 *)(param_6 + 0x30) = 1;
      goto LAB_1802a19ac;
    }
  }
  else if (param_3 != 0) {
    *param_2 = 0;
    goto LAB_1802a19ca;
  }
  uVar3 = 0x16;
  *(undefined1 *)(param_6 + 0x30) = 1;
  *(undefined4 *)(param_6 + 0x2c) = 0x16;
LAB_1802a19ac:
  FUN_180290c30(0,0,0,0,0,param_6);
  return uVar3;
}

