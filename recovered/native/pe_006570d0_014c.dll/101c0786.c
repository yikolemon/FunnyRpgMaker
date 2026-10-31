/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c0786 */

void FUN_101c0786(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  if (param_3 == 4) {
    iVar2 = *(int *)(iVar1 + 0xc0);
    if (*(int *)(iVar1 + 0xc0) < *(int *)(iVar1 + 0xb8)) {
      iVar2 = *(int *)(iVar1 + 0xb8);
    }
    if (iVar2 <= *(int *)(iVar1 + 200)) {
      iVar2 = *(int *)(iVar1 + 200);
    }
    *param_1 = *param_1 - iVar2;
    iVar2 = *(int *)(iVar1 + 0xc0);
    if (*(int *)(iVar1 + 0xb8) < *(int *)(iVar1 + 0xc0)) {
      iVar2 = *(int *)(iVar1 + 0xb8);
    }
    if (*(int *)(iVar1 + 200) <= iVar2) {
      iVar2 = *(int *)(iVar1 + 200);
    }
    param_1[2] = param_1[2] - iVar2;
    iVar2 = *(int *)(iVar1 + 0xbc);
    if (*(int *)(iVar1 + 0xb4) < *(int *)(iVar1 + 0xbc)) {
      iVar2 = *(int *)(iVar1 + 0xb4);
    }
    if (*(int *)(iVar1 + 0xc4) <= iVar2) {
      iVar2 = *(int *)(iVar1 + 0xc4);
    }
    param_1[1] = param_1[1] + iVar2;
    iVar2 = *(int *)(iVar1 + 0xbc);
    if (*(int *)(iVar1 + 0xbc) < *(int *)(iVar1 + 0xb4)) {
      iVar2 = *(int *)(iVar1 + 0xb4);
    }
    if (iVar2 <= *(int *)(iVar1 + 0xc4)) {
      iVar2 = *(int *)(iVar1 + 0xc4);
    }
    param_1[3] = param_1[3] + iVar2;
  }
  else if (param_3 == 3) {
    iVar2 = *(int *)(iVar1 + 0xbc);
    if (*(int *)(iVar1 + 0xbc) < *(int *)(iVar1 + 0xb4)) {
      iVar2 = *(int *)(iVar1 + 0xb4);
    }
    if (iVar2 <= *(int *)(iVar1 + 0xc4)) {
      iVar2 = *(int *)(iVar1 + 0xc4);
    }
    *param_1 = *param_1 - iVar2;
    iVar2 = *(int *)(iVar1 + 0xbc);
    if (*(int *)(iVar1 + 0xb4) < *(int *)(iVar1 + 0xbc)) {
      iVar2 = *(int *)(iVar1 + 0xb4);
    }
    if (*(int *)(iVar1 + 0xc4) <= iVar2) {
      iVar2 = *(int *)(iVar1 + 0xc4);
    }
    param_1[2] = param_1[2] - iVar2;
    iVar2 = *(int *)(iVar1 + 0xc0);
    if (*(int *)(iVar1 + 0xc0) < *(int *)(iVar1 + 0xb8)) {
      iVar2 = *(int *)(iVar1 + 0xb8);
    }
    if (iVar2 <= *(int *)(iVar1 + 200)) {
      iVar2 = *(int *)(iVar1 + 200);
    }
    param_1[1] = param_1[1] - iVar2;
    iVar2 = *(int *)(iVar1 + 0xc0);
    if (*(int *)(iVar1 + 0xb8) < *(int *)(iVar1 + 0xc0)) {
      iVar2 = *(int *)(iVar1 + 0xb8);
    }
    if (*(int *)(iVar1 + 200) <= iVar2) {
      iVar2 = *(int *)(iVar1 + 200);
    }
    param_1[3] = param_1[3] - iVar2;
  }
  return;
}

