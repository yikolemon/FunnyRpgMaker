/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014b16c */

bool __thiscall FUN_1014b16c(int param_1,uint *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)*param_2;
  uVar3 = *(uint *)(param_1 + 0x14);
  puVar4 = *(undefined4 **)(param_1 + 0x1c);
  puVar1 = puVar4 + uVar3 * 2;
  if (((1 < uVar3 && puVar4 != (undefined4 *)0x0) &
      puVar2 == (undefined4 *)0x0 & *(byte *)(param_1 + 4)) == 1) {
    FUN_1026fb00(puVar4,uVar3,8,&LAB_1014b20c);
    puVar4 = *(undefined4 **)(param_1 + 0x1c);
  }
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  puVar2 = puVar4;
  if (puVar4 != puVar1) {
    do {
      puVar4 = puVar2;
      if (puVar4[1] != 0) break;
      puVar2 = puVar4 + 2;
    } while (puVar4 < puVar1);
  }
  *param_2 = (uint)(puVar4 + (uint)(puVar4 != puVar1) * 2);
  if (puVar4 == puVar1) {
    *param_3 = 0;
    if (*(char *)(param_1 + 4) == '\x01') {
      FUN_100fb03c();
    }
  }
  else {
    *param_3 = *puVar4;
  }
  return puVar4 != puVar1;
}

