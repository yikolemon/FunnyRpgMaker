/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000c252 */

void FUN_14000c252(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar2 = (uint *)*param_1;
  puVar1 = (uint *)*param_2;
  if (param_1[1] != param_2[1] || puVar2 != puVar1) {
    uVar5 = -1 << ((byte)param_1[1] & 0x1f);
    if (puVar2 == puVar1) {
      uVar4 = 0xffffffff >> (-(char)param_2[1] & 0x1fU);
      uVar3 = uVar4 & uVar5;
      uVar5 = ~uVar4 | ~uVar5;
    }
    else {
      uVar4 = 0;
      if (param_3 != '\0') {
        uVar4 = uVar5;
      }
      *puVar2 = uVar4 | ~uVar5 & *puVar2;
      FUN_1401c5830(puVar2 + 1,-param_3,(longlong)puVar1 - (longlong)(puVar2 + 1));
      if (param_2[1] == 0) {
        return;
      }
      uVar3 = 0xffffffff >> (-(char)param_2[1] & 0x1fU);
      uVar5 = ~uVar3;
      puVar2 = puVar1;
    }
    uVar4 = 0;
    if (param_3 != '\0') {
      uVar4 = uVar3;
    }
    *puVar2 = uVar4 | uVar5 & *puVar2;
  }
  return;
}

