/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140014950 */

uint FUN_140014950(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint uVar5;
  
  puVar3 = *(ulonglong **)(param_1 + 0x38);
  uVar4 = *puVar3;
  if ((uVar4 == 0) || (uVar4 <= **(ulonglong **)(param_1 + 0x18))) {
LAB_140014986:
    uVar5 = 0xffffffff;
    if ((param_2 != 0xffffffff) && (*(FILE **)(param_1 + 0x80) != (FILE *)0x0)) {
      if (*(longlong *)(param_1 + 0x68) == 0) {
        iVar2 = ungetc(param_2 & 0xff,*(FILE **)(param_1 + 0x80));
        if (iVar2 != -1) {
          return param_2;
        }
        puVar3 = *(ulonglong **)(param_1 + 0x38);
        uVar4 = *puVar3;
      }
      uVar1 = param_1 + 0x70;
      if (uVar4 != uVar1) {
        *(char *)(param_1 + 0x70) = (char)param_2;
        uVar4 = **(ulonglong **)(param_1 + 0x18);
        if (uVar4 != uVar1) {
          *(ulonglong *)(param_1 + 0x88) = uVar4;
          *(ulonglong *)(param_1 + 0x90) = (longlong)**(int **)(param_1 + 0x50) + *puVar3;
        }
        **(ulonglong **)(param_1 + 0x18) = uVar1;
        **(ulonglong **)(param_1 + 0x38) = uVar1;
        **(undefined4 **)(param_1 + 0x50) = 1;
        uVar5 = param_2;
      }
    }
  }
  else {
    if (param_2 == 0xffffffff) {
      param_2 = 0;
    }
    else if (param_2 != *(byte *)(uVar4 - 1)) goto LAB_140014986;
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
    uVar5 = param_2;
  }
  return uVar5;
}

