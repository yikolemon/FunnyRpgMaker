/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100291e6 */

undefined4
FUN_100291e6(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int param_5,char param_6
            )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 local_1b [11];
  
  if (param_6 == '\0') {
    FUN_1002472e(local_1b,param_3,param_4);
    puVar5 = local_1b + param_4;
  }
  else {
    puVar5 = local_1b + param_4 + 1;
    uVar1 = param_4 - param_5;
    puVar4 = puVar5;
    if (1 < (int)uVar1) {
      uVar3 = (uVar1 >> 1) + 1;
      uVar2 = param_3;
      do {
        param_3 = uVar2 / 100;
        *(undefined2 *)(puVar4 + -2) = *(undefined2 *)(&DAT_102903d0 + (uVar2 % 100) * 2);
        puVar4 = puVar4 + -2;
        uVar3 = uVar3 - 1;
        uVar2 = param_3;
      } while (1 < uVar3);
    }
    uVar2 = param_3;
    if ((uVar1 & 1) != 0) {
      uVar2 = param_3 / 10;
      puVar4[-1] = (char)param_3 + (char)uVar2 * -10 | 0x30;
      puVar4 = puVar4 + -1;
    }
    puVar4[-1] = param_6;
    FUN_1002472e(puVar4 + (-1 - param_5),uVar2,param_5);
  }
  FUN_100253ad(param_1,local_1b,puVar5,param_2);
  return param_1;
}

