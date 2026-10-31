/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e4770 */

void __fastcall FUN_101e4770(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x134) == 3) {
    *(undefined4 *)(param_1 + 0x10) = 0x9c;
    return;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x17c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
LAB_101e47b9:
    if (*(uint *)(param_1 + 0x178) <= *(uint *)(param_1 + 0x174)) goto LAB_101e47d7;
    *(uint *)(param_1 + 0x174) = *(uint *)(param_1 + 0x174) + 1;
  }
  else {
    puVar1 = puVar3 + *(int *)(param_1 + 0x174) * 5;
    if (*(int *)(param_1 + 0x174) != 0) {
      do {
        if (puVar3[3] == *param_2) break;
        puVar3 = puVar3 + 5;
      } while (puVar3 < puVar1);
    }
    if (puVar3 == puVar1) goto LAB_101e47b9;
  }
  if (*param_2 < 0x100) {
    puVar3[3] = *param_2;
    puVar3[1] = *(int *)(param_1 + 0x140) + 1;
    *puVar3 = *(undefined4 *)(param_1 + 0x138);
    *(undefined1 *)(puVar3 + 4) = 1;
    if (*(uint *)(param_1 + 0x184) < *param_2) {
      *(uint *)(param_1 + 0x184) = *param_2 & 0xff;
    }
    do {
      cVar2 = FUN_101eca99();
      if (cVar2 != '\0') {
        return;
      }
      cVar2 = *(char *)(param_1 + 0x148);
      if (cVar2 == -0x77) break;
      if (cVar2 == '-') {
        puVar3[2] = *(undefined4 *)(param_1 + 0x140);
        return;
      }
    } while (cVar2 != ',');
    *(undefined4 *)(param_1 + 0x10) = 0x89;
    return;
  }
LAB_101e47d7:
  *(undefined4 *)(param_1 + 0x10) = 0x8d;
  return;
}

