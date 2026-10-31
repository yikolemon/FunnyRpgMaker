/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e2a42 */

void FUN_1400e2a42(ulonglong param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  uVar1 = *param_2;
  if (((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ==
       0x57bc0000) && (param_2[1] == 0)) {
    uVar1 = FUN_1400e2a3c(param_2);
    puVar3 = param_2 + 4;
    DAT_140f308d8 = param_2;
    DAT_140f308e0 = uVar1 + param_1;
    DAT_140f308e8 = param_1;
    DAT_140f308f0 = param_1;
    do {
      puVar2 = (uint *)FUN_1400e8a50(puVar3);
      if (puVar2 == puVar3) {
        return;
      }
      puVar3 = puVar2;
    } while (DAT_140f308f0 <= uVar1 + param_1);
  }
  return;
}

