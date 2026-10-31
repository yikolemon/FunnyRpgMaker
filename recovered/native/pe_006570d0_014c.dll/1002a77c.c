/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002a77c */

undefined4
FUN_1002a77c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,int param_6,char param_7)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_25 [21];
  
  uVar7 = CONCAT44(param_4,param_3);
  if (param_7 == '\0') {
    FUN_100255fd(local_25,param_3,param_4,param_5);
    puVar2 = local_25 + param_5;
  }
  else {
    puVar2 = local_25 + param_5 + 1;
    uVar6 = param_5 - param_6;
    puVar5 = puVar2;
    if (1 < (int)uVar6) {
      uVar3 = (uVar6 >> 1) + 1;
      puVar4 = puVar2;
      do {
        iVar1 = (int)uVar7;
        puVar5 = puVar4 + -2;
        uVar7 = __aulldiv(uVar7,100,0);
        *(undefined2 *)(puVar4 + -2) =
             *(undefined2 *)(&DAT_102903d0 + ((int)uVar7 * -100 + iVar1) * 2);
        uVar3 = uVar3 - 1;
        puVar4 = puVar5;
      } while (1 < uVar3);
    }
    uVar8 = uVar7;
    if ((uVar6 & 1) != 0) {
      uVar8 = __aulldiv(uVar7,10,0);
      puVar5[-1] = (char)uVar8 * -10 + (char)uVar7 | 0x30;
      puVar5 = puVar5 + -1;
    }
    puVar5[-1] = param_7;
    FUN_100255fd(puVar5 + (-1 - param_6),uVar8,param_6);
  }
  FUN_100253ad(param_1,local_25,puVar2,param_2);
  return param_1;
}

