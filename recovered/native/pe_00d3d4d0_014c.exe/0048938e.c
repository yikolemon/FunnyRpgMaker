/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048938e */

void __thiscall FUN_0048938e(void *this,uint *param_1,uint param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    puVar1 = *(undefined4 **)this;
    if (puVar1[2] == puVar1[1]) {
      if (*(char *)(puVar1 + 3) == '\0') {
        *param_3 = -1;
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
    else {
      uVar2 = puVar1[1] - puVar1[2];
      uVar3 = param_2;
      if (uVar2 < param_2) {
        uVar3 = uVar2;
      }
      FUN_004878c0((uint *)*puVar1,param_1,uVar3);
      **(int **)this = **(int **)this + uVar3;
      *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + uVar3;
      if (*(char *)(*(int *)this + 0xc) == '\0') {
        if (uVar3 == param_2) {
          *param_3 = *param_3 + uVar3;
        }
        else {
          *param_3 = -1;
        }
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
  }
  return;
}

