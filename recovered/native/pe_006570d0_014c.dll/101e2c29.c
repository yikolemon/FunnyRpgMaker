/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e2c29 */

void __fastcall FUN_101e2c29(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x134) == 3) {
    *(undefined4 *)(param_1 + 0x10) = 0x9c;
    return;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x170);
  if (puVar4 == (undefined4 *)0x0) {
    uVar3 = *param_2;
    puVar4 = (undefined4 *)0x0;
LAB_101e2c75:
    if (*(uint *)(param_1 + 0x16c) <= *(uint *)(param_1 + 0x168)) goto LAB_101e2c91;
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) + 1;
  }
  else {
    puVar1 = puVar4 + *(int *)(param_1 + 0x168) * 5;
    uVar3 = *param_2;
    if (*(int *)(param_1 + 0x168) != 0) {
      do {
        if (puVar4[3] == uVar3) break;
        puVar4 = puVar4 + 5;
      } while (puVar4 < puVar1);
    }
    if (puVar4 == puVar1) goto LAB_101e2c75;
  }
  if (uVar3 < 0x10000) {
    *puVar4 = *(undefined4 *)(param_1 + 0x138);
    puVar4[3] = uVar3;
    puVar4[1] = *(int *)(param_1 + 0x140) + 1;
    *(undefined1 *)(puVar4 + 4) = 1;
    if (*(uint *)(param_1 + 0x180) < uVar3) {
      *(uint *)(param_1 + 0x180) = uVar3;
    }
    do {
      cVar2 = FUN_101eca99();
      if (cVar2 != '\0') {
        return;
      }
      cVar2 = *(char *)(param_1 + 0x148);
      if (cVar2 == -0x77) break;
      if (cVar2 == '-') {
        puVar4[2] = *(undefined4 *)(param_1 + 0x140);
        return;
      }
    } while (cVar2 != ',');
    *(undefined4 *)(param_1 + 0x10) = 0x89;
    return;
  }
LAB_101e2c91:
  *(undefined4 *)(param_1 + 0x10) = 0x8c;
  return;
}

