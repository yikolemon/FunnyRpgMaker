/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140327594 */

void FUN_140327594(void)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined *puVar4;
  
  lVar2 = DAT_14062a630;
  if (*(char *)(DAT_14062a630 + 0x2a40) == '\x01') {
    FUN_140326cad((longlong)L" Rpg Maker MV/MZ Engine" + 0x13);
    uVar3 = *(uint *)(lVar2 + 0x2a44) & 0xf;
    if (uVar3 - 1 < (uVar3 ^ uVar3 - 1)) {
      iVar1 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
        }
      }
      if (iVar1 == 3) {
        if (1 < *(int *)(lVar2 + 0x2a58)) {
          puVar4 = &DAT_14062a638;
          if (*(undefined **)(lVar2 + 0x2a60) != (undefined *)0x0) {
            puVar4 = *(undefined **)(lVar2 + 0x2a60);
          }
          FUN_14031939e(puVar4);
        }
      }
      else if (iVar1 == 1) {
        FUN_140310480(*(undefined8 *)(lVar2 + 0x2a50));
      }
      else if (iVar1 == 0) {
        fflush(*(FILE **)(lVar2 + 0x2a50));
      }
    }
    *(undefined1 *)(lVar2 + 0x167a) = 0;
    *(undefined1 *)(lVar2 + 0x2a40) = 0;
    *(undefined4 *)(lVar2 + 0x2a44) = 0;
    *(undefined8 *)(lVar2 + 0x2a50) = 0;
    if (*(longlong *)(lVar2 + 0x2a60) != 0) {
      *(undefined8 *)(lVar2 + 0x2a58) = 0;
      FUN_14030fda4();
      *(undefined8 *)(lVar2 + 0x2a60) = 0;
    }
  }
  return;
}

