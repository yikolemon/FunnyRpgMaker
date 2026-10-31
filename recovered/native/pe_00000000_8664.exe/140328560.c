/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140328560 */

void FUN_140328560(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  char *pcVar4;
  
  lVar1 = DAT_14062a630;
  lVar2 = DAT_14062a630;
  if (*(longlong *)(DAT_14062a630 + 0x2200) != param_1) {
    if ((*(byte *)(DAT_14062a630 + 0x2acc) & 4) != 0) {
      if (param_1 == 0) {
        pcVar4 = ": control character U+0018 (CAN) must be escaped to \\u0018";
      }
      else {
        pcVar4 = *(char **)(param_1 + 8);
      }
      FUN_14030f4ba(L"t",pcVar4);
    }
    lVar2 = DAT_14062a630;
    *(longlong *)(lVar1 + 0x2200) = param_1;
    *(undefined8 *)(lVar1 + 0x2258) = 0xffffffffffffffff;
  }
  *(undefined2 *)(lVar1 + 0x22a0) = 0;
  *(undefined1 *)(lVar1 + 0x2262) = 0;
  uVar3 = 1;
  if (*(char *)(lVar2 + 0x22a1) == '\0') {
    uVar3 = *(undefined1 *)(lVar2 + 0x2262);
  }
  *(undefined1 *)(lVar2 + 0x2261) = uVar3;
  return;
}

