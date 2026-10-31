/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10074550 */

uint __thiscall FUN_10074550(int param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  puVar2 = *(uint **)(param_1 + 0x1c);
  uVar4 = *puVar2;
  if ((uVar4 == 0) || (uVar4 <= **(uint **)(param_1 + 0xc))) {
LAB_10074576:
    uVar5 = 0xffffffff;
    if ((param_2 != 0xffffffff) && (*(FILE **)(param_1 + 0x4c) != (FILE *)0x0)) {
      if (*(int *)(param_1 + 0x38) == 0) {
        iVar3 = _ungetc(param_2 & 0xff,*(FILE **)(param_1 + 0x4c));
        if (iVar3 != -1) {
          return param_2;
        }
        puVar2 = *(uint **)(param_1 + 0x1c);
        uVar4 = *puVar2;
      }
      uVar1 = param_1 + 0x3c;
      if (uVar4 != uVar1) {
        *(char *)(param_1 + 0x3c) = (char)param_2;
        uVar4 = **(uint **)(param_1 + 0xc);
        if (uVar4 != uVar1) {
          *(uint *)(param_1 + 0x50) = uVar4;
          *(uint *)(param_1 + 0x54) = *puVar2 + **(int **)(param_1 + 0x2c);
        }
        **(uint **)(param_1 + 0xc) = uVar1;
        **(uint **)(param_1 + 0x1c) = uVar1;
        **(undefined4 **)(param_1 + 0x2c) = 1;
        uVar5 = param_2;
      }
    }
  }
  else {
    if (param_2 == 0xffffffff) {
      param_2 = 0;
    }
    else if (param_2 != *(byte *)(uVar4 - 1)) goto LAB_10074576;
    **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + 1;
    **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + -1;
    uVar5 = param_2;
  }
  return uVar5;
}

