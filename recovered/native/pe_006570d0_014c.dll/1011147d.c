/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011147d */

void FUN_1011147d(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  iVar2 = DAT_1039d74c;
  if (*(char *)(DAT_1039d74c + 0x2748) == '\x01') {
    FUN_10110bf6("\r\n");
    uVar3 = *(uint *)(iVar2 + 0x274c) & 0xf;
    if (uVar3 - 1 < (uVar3 ^ uVar3 - 1)) {
      iVar1 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
        }
      }
      if (iVar1 == 3) {
        if (1 < *(int *)(iVar2 + 0x2758)) {
          puVar4 = &DAT_1039d750;
          if (*(undefined **)(iVar2 + 0x2760) != (undefined *)0x0) {
            puVar4 = *(undefined **)(iVar2 + 0x2760);
          }
          FUN_101032f2(puVar4);
        }
      }
      else if (iVar1 == 1) {
        FUN_100fa8ea(*(undefined4 *)(iVar2 + 0x2754));
      }
      else if (iVar1 == 0) {
        FUN_1026d698(*(undefined4 *)(iVar2 + 0x2754));
      }
    }
    *(undefined1 *)(iVar2 + 0x1526) = 0;
    *(undefined1 *)(iVar2 + 0x2748) = 0;
    *(undefined4 *)(iVar2 + 0x274c) = 0;
    *(undefined4 *)(iVar2 + 0x2754) = 0;
    if (*(int *)(iVar2 + 0x2760) != 0) {
      *(undefined4 *)(iVar2 + 0x275c) = 0;
      *(undefined4 *)(iVar2 + 0x2758) = 0;
      FUN_100fa2cb(*(int *)(iVar2 + 0x2760));
      *(undefined4 *)(iVar2 + 0x2760) = 0;
    }
  }
  return;
}

