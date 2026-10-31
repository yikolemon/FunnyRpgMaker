/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801160c4 */

void FUN_1801160c4(void)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined *puVar4;
  
  lVar2 = DAT_180419160;
  if (*(char *)(DAT_180419160 + 0x2a40) == '\x01') {
    FUN_1801157dd("\r\n");
    uVar3 = *(uint *)(lVar2 + 0x2a44) & 0xf;
    if (uVar3 - 1 < (uVar3 ^ uVar3 - 1)) {
      iVar1 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
        }
      }
      if (iVar1 == 3) {
        if (1 < *(int *)(lVar2 + 0x2a58)) {
          puVar4 = &DAT_180419168;
          if (*(undefined **)(lVar2 + 0x2a60) != (undefined *)0x0) {
            puVar4 = *(undefined **)(lVar2 + 0x2a60);
          }
          FUN_180107ece(puVar4);
        }
      }
      else if (iVar1 == 1) {
        FUN_1800fefb0(*(undefined8 *)(lVar2 + 0x2a50));
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
      FUN_1800fe8d4();
      *(undefined8 *)(lVar2 + 0x2a60) = 0;
    }
  }
  return;
}

