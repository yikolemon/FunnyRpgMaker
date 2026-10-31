/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102342f0 */

void __thiscall
FUN_102342f0(int param_1,int *param_2,uint param_3,int param_4,uint param_5,int param_6,
            undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  local_c = param_5 + param_3;
  local_8 = param_6 + param_4 + (uint)CARRY4(param_5,param_3);
  if (*(int *)(param_1 + 0x4c) != 0) {
    cVar2 = FUN_102345b0();
    if (cVar2 != '\0') {
      iVar3 = _fsetpos(*(FILE **)(param_1 + 0x4c),(fpos_t *)&local_c);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x40) = param_7;
        *(undefined4 *)(param_1 + 0x44) = param_8;
        if (**(int **)(param_1 + 0xc) == param_1 + 0x3c) {
          iVar3 = *(int *)(param_1 + 0x54);
          iVar1 = *(int *)(param_1 + 0x50);
          **(int **)(param_1 + 0xc) = iVar1;
          **(int **)(param_1 + 0x1c) = iVar1;
          **(int **)(param_1 + 0x2c) = iVar3 - iVar1 >> 1;
        }
        iVar3 = *(int *)(param_1 + 0x44);
        param_2[4] = *(int *)(param_1 + 0x40);
        param_2[5] = iVar3;
        *param_2 = local_c;
        param_2[1] = local_8;
        param_2[2] = 0;
        param_2[3] = 0;
        return;
      }
    }
  }
  *param_2 = -1;
  param_2[1] = -1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}

