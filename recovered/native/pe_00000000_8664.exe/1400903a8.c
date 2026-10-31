/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400903a8 */

void FUN_1400903a8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  char *pcVar4;
  
  lVar1 = DAT_140f2a910;
  lVar2 = DAT_140f2a910;
  if (*(longlong *)(DAT_140f2a910 + 0x2200) != param_1) {
    if ((*(byte *)(DAT_140f2a910 + 0x2acc) & 4) != 0) {
      if (param_1 == 0) {
        pcVar4 = "<NULL>";
      }
      else {
        pcVar4 = *(char **)(param_1 + 8);
      }
      FUN_1400772a6("[focus] SetNavWindow(\"%s\")\n",pcVar4);
    }
    lVar2 = DAT_140f2a910;
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

