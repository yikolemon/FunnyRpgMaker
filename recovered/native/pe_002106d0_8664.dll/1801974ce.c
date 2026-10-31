/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801974ce */

void FUN_1801974ce(ulonglong param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  uVar1 = *param_2;
  if (((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ==
       0x57bc0000) && (param_2[1] == 0)) {
    uVar1 = FUN_1801974c8(param_2);
    puVar3 = param_2 + 4;
    DAT_18041eef8 = param_2;
    DAT_18041ef00 = uVar1 + param_1;
    DAT_18041ef08 = param_1;
    DAT_18041ef10 = param_1;
    do {
      puVar2 = (uint *)FUN_18019d4dc(puVar3);
      if (puVar2 == puVar3) {
        return;
      }
      puVar3 = puVar2;
    } while (DAT_18041ef10 <= uVar1 + param_1);
  }
  return;
}

