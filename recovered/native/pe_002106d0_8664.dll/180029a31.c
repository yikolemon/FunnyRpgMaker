/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180029a31 */

undefined8
FUN_180029a31(undefined8 param_1,undefined8 param_2,uint param_3,int param_4,int param_5,
             char param_6)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 local_33 [11];
  
  if (param_6 == '\0') {
    FUN_180024c02(local_33,param_3,param_4);
    puVar3 = local_33 + param_4;
  }
  else {
    puVar3 = local_33 + (longlong)param_4 + 1;
    uVar4 = param_4 - param_5;
    puVar1 = puVar3;
    if ((int)uVar4 < 2) {
      uVar2 = (ulonglong)param_3;
    }
    else {
      uVar6 = (uVar4 >> 1) + 1;
      do {
        uVar2 = (ulonglong)param_3 / 100;
        *(undefined2 *)(puVar1 + -2) =
             *(undefined2 *)(&DAT_1802b1ce0 + (ulonglong)(param_3 % 100) * 2);
        puVar1 = puVar1 + -2;
        uVar6 = uVar6 - 1;
        param_3 = param_3 / 100;
      } while (1 < uVar6);
    }
    uVar5 = uVar2;
    if ((uVar4 & 1) != 0) {
      uVar5 = uVar2 / 10;
      puVar1[-1] = (char)uVar2 + (char)(uVar2 / 10) * -10 | 0x30;
      puVar1 = puVar1 + -1;
    }
    puVar1[-1] = param_6;
    FUN_180024c02(puVar1 + (-1 - (longlong)param_5),uVar5);
  }
  FUN_180025857(param_1,local_33,puVar3,param_2);
  return param_1;
}

