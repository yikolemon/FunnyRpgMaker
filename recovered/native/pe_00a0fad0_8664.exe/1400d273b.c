/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d273b */

void FUN_1400d273b(longlong *param_1,byte param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    uVar3 = (ulonglong)param_2;
    do {
      uVar3 = uVar3 - 1;
      *(byte *)(*param_1 + param_1[1]) =
           *(byte *)(*param_1 + param_1[1]) |
           ((param_3 >> (uVar3 & 0x3f) & 1) != 0) << (7U - (char)param_1[2] & 0x3f);
      cVar2 = (char)param_1[2] + '\x01';
      *(char *)(param_1 + 2) = cVar2;
      if (cVar2 == '\b') {
        lVar1 = param_1[1];
        param_1[1] = lVar1 + 1;
        *(undefined1 *)(param_1 + 2) = 0;
        *(undefined1 *)(*param_1 + 1 + lVar1) = 0;
      }
    } while (uVar3 != 0);
  }
  return;
}

