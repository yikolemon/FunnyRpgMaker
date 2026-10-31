/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fbc8a */

void __fastcall thunk_FUN_100fbc90(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = param_1[0xb];
  if (iVar1 != 0) {
    iVar2 = param_1[10];
    if ((*(byte *)(iVar2 + 0x27b4) & 0x20) != 0) {
      FUN_100f99e6("Clipper: End() in \'%s\'\n",*(undefined4 *)(*(int *)(iVar2 + 0x14cc) + 4));
    }
    if (((uint)param_1[3] < 0x7fffffff) && (-1 < *param_1)) {
      FUN_100fc06e(param_1[3]);
    }
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0x10);
    iVar1 = *(int *)(iVar2 + 0x22f8);
    *(int *)(iVar2 + 0x22f8) = iVar1 + -1;
    if (1 < iVar1) {
      piVar3 = (int *)(*(int *)(iVar2 + 0x2304) + iVar1 * 0x1c + -0x38);
      *(int **)(*piVar3 + 0x2c) = piVar3;
    }
    param_1[0xb] = 0;
  }
  param_1[1] = param_1[3];
  *param_1 = param_1[3];
  param_1[3] = -1;
  return;
}

