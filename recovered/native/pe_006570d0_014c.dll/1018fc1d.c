/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018fc1d */

void __fastcall FUN_1018fc1d(uint param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  uVar1 = *param_2;
  if (((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ==
       0x57bc0000) && (param_2[1] == 0)) {
    iVar2 = FUN_1018fc17();
    puVar4 = param_2 + 4;
    DAT_103a3258 = param_2;
    DAT_103a325c = iVar2 + param_1;
    DAT_103a3260 = param_1;
    DAT_103a3264 = param_1;
    do {
      puVar3 = (uint *)FUN_10195a5d();
      if (puVar3 == puVar4) {
        return;
      }
      puVar4 = puVar3;
    } while (DAT_103a3264 <= iVar2 + param_1);
  }
  return;
}

