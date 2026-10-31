/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408be3b2 */

undefined8 FUN_1408be3b2(uint param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  lVar2 = FUN_1408b67dd();
  if (*(short *)(lVar2 + (ulonglong)*(byte *)(uVar3 + 0x14) * 2) < 0) {
    cVar1 = *(char *)(ulonglong)*(uint *)(uVar3 + 8);
    if (cVar1 == '\0') {
      *(undefined4 *)(uVar3 + 0x10) = 0;
      *(undefined2 *)(uVar3 + 0x14) = 0;
      *(undefined1 *)(uVar3 + 0x16) = 0;
      *(undefined4 *)(uVar3 + 0x18) = 0;
      *(undefined4 *)(uVar3 + 0x1c) = 0;
      *(undefined4 *)(uVar3 + 0x20) = 0;
      *(undefined1 *)(uVar3 + 0x24) = 0;
      *(undefined4 *)(uVar3 + 0x28) = 0;
      *(undefined4 *)(uVar3 + 0xc) = 0x2a;
      return 0;
    }
    *(char *)(uVar3 + 0x15) = cVar1;
    *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8);
  }
  return 1;
}

