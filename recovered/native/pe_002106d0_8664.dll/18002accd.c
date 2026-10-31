/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002accd */

undefined8
FUN_18002accd(undefined8 param_1,undefined8 param_2,ulonglong param_3,int param_4,int param_5,
             char param_6)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_58 [32];
  
  if (param_6 == '\0') {
    FUN_180025acd(local_58,param_3,param_4);
    puVar3 = local_58 + param_4;
  }
  else {
    puVar3 = local_58 + (longlong)param_4 + 1;
    uVar5 = param_4 - param_5;
    puVar1 = puVar3;
    if (1 < (int)uVar5) {
      uVar4 = (uVar5 >> 1) + 1;
      uVar2 = param_3;
      do {
        param_3 = uVar2 / 100;
        *(undefined2 *)(puVar1 + -2) = *(undefined2 *)(&DAT_1802b1ce0 + (uVar2 % 100) * 2);
        puVar1 = puVar1 + -2;
        uVar4 = uVar4 - 1;
        uVar2 = param_3;
      } while (1 < uVar4);
    }
    uVar2 = param_3;
    if ((uVar5 & 1) != 0) {
      uVar2 = param_3 / 10;
      puVar1[-1] = (char)param_3 + (char)uVar2 * -10 | 0x30;
      puVar1 = puVar1 + -1;
    }
    puVar1[-1] = param_6;
    FUN_180025acd(puVar1 + (-1 - (longlong)param_5),uVar2);
  }
  FUN_180025857(param_1,local_58,puVar3,param_2);
  return param_1;
}

