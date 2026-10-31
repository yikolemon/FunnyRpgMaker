/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407701af */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407701af(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  char *pcVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined8 uStack_18;
  
  pcVar5 = (char *)(ulonglong)_DAT_225280c61039d74c;
  cVar4 = (char)_DAT_225280c61039d74c;
  *pcVar5 = *pcVar5 + cVar4;
  pcVar5[0x2296b8] = pcVar5[0x2296b8] + cVar4;
  *param_1 = *param_1 + cVar4;
  if (*param_1 != '\0') {
    return;
  }
  uVar7 = (ulonglong)_DAT_150afbc5c;
  puVar6 = &stack0xfffffffffffffff0;
  if ((*(char *)(uVar7 + 0x2250) == '\x01') &&
     (puVar6 = &stack0xfffffffffffffff0, (*(byte *)(uVar7 + 0x27b4) & 2) != 0)) {
    uStack_18 = 0x1035591f;
    FUN_1407518b6();
    puVar6 = (undefined1 *)(ulonglong)((int)&uStack_18 + 4);
  }
  *(undefined1 *)(uVar7 + 0x2250) = 0;
  *(undefined8 *)(uVar7 + 0x2274) = 0;
  *(undefined8 *)(uVar7 + 0x227c) = 0;
  *(undefined8 *)(uVar7 + 0x2284) = 0;
  *(undefined8 *)(uVar7 + 0x228c) = 0;
  *(undefined1 *)(uVar7 + 0x2294) = 0;
  *(undefined8 *)(uVar7 + 0x2260) = 0;
  *(undefined8 *)(uVar7 + 0x2268) = 0;
  *(undefined4 *)(uVar7 + 0x2270) = 0xffffffff;
  *(undefined2 *)(uVar7 + 0x2295) = 0;
  *(undefined4 *)(uVar7 + 0x22c0) = 0;
  uVar3 = uRam0000000150a17185;
  uVar2 = uRam0000000150a17181;
  uVar1 = uRam0000000150a1717d;
  *(undefined4 *)(uVar7 + 0x22c8) = _DAT_150a17179;
  *(undefined4 *)(uVar7 + 0x22cc) = uVar1;
  *(undefined4 *)(uVar7 + 0x22d0) = uVar2;
  *(undefined4 *)(uVar7 + 0x22d4) = uVar3;
  if (*(uint *)(uVar7 + 0x22e4) != 0) {
    *(undefined4 *)(uVar7 + 0x22e0) = 0;
    *(undefined4 *)(uVar7 + 0x22dc) = 0;
    *(ulonglong *)(puVar6 + -8) = (ulonglong)*(uint *)(uVar7 + 0x22e4);
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar6 + -0x10) = &UNK_14075e59c;
    FUN_14075219b();
  }
  *(undefined8 *)(uVar7 + 0x22e8) = 0;
  *(undefined8 *)(uVar7 + 0x22f0) = 0;
  return;
}

