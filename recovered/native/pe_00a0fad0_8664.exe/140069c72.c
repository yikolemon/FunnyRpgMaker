/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140069c72 */

void FUN_140069c72(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  
  while( true ) {
    puVar5 = (uint *)*param_3;
    lVar3 = param_3[1];
    if (((uint *)*param_2 == puVar5) && (param_2[1] == lVar3)) break;
    if (lVar3 == 0) {
      puVar5 = puVar5 + -1;
      *param_3 = puVar5;
      lVar3 = 0x1f;
    }
    else {
      lVar3 = lVar3 + -1;
    }
    param_3[1] = lVar3;
    if (param_4[1] == 0) {
      puVar2 = (uint *)(*param_4 + -4);
      *param_4 = (longlong)puVar2;
      lVar1 = 0x1f;
    }
    else {
      lVar1 = param_4[1] + -1;
      puVar2 = (uint *)*param_4;
    }
    param_4[1] = lVar1;
    uVar4 = 1 << ((byte)lVar1 & 0x1f);
    if ((*puVar5 >> ((uint)lVar3 & 0x1f) & 1) == 0) {
      uVar4 = ~uVar4 & *puVar2;
    }
    else {
      uVar4 = uVar4 | *puVar2;
    }
    *puVar2 = uVar4;
  }
  lVar3 = param_4[1];
  *param_1 = *param_4;
  param_1[1] = lVar3;
  return;
}

