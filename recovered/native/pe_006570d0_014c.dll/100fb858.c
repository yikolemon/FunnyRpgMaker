/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fb858 */

bool __thiscall FUN_100fb858(int param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  bVar6 = true;
  if (*(int *)(param_1 + 0x100) != 0) {
    if (param_2 == (undefined1 *)0x0) {
      param_2 = &DAT_10356101;
      param_3 = &DAT_10356101;
    }
    puVar5 = *(undefined4 **)(param_1 + 0x108);
    puVar1 = puVar5 + *(int *)(param_1 + 0x100) * 2;
    do {
      pcVar2 = (char *)*puVar5;
      pcVar3 = (char *)puVar5[1];
      if (pcVar2 != pcVar3) {
        if (*pcVar2 == '-') {
          iVar4 = FUN_100fa366(param_2,param_3,pcVar2 + 1,pcVar3);
          if (iVar4 != 0) {
            return false;
          }
        }
        else {
          iVar4 = FUN_100fa366(param_2,param_3,pcVar2,pcVar3);
          if (iVar4 != 0) {
            return true;
          }
        }
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar1);
    bVar6 = *(int *)(param_1 + 0x10c) == 0;
  }
  return bVar6;
}

