/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10074af8 */

int * __thiscall
FUN_10074af8(int param_1,int *param_2,uint param_3,int param_4,uint param_5,int param_6,int param_7,
            int param_8)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int local_20;
  int iStack_1c;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_20 = param_5 + param_3;
  iStack_1c = param_6 + param_4 + (uint)CARRY4(param_5,param_3);
  if (*(int *)(param_1 + 0x4c) != 0) {
    cVar2 = FUN_10074f54();
    if (cVar2 != '\0') {
      iVar3 = _fsetpos(*(FILE **)(param_1 + 0x4c),(fpos_t *)&local_20);
      if (iVar3 == 0) {
        *(int *)(param_1 + 0x40) = param_7;
        *(int *)(param_1 + 0x44) = param_8;
        if (**(int **)(param_1 + 0xc) == param_1 + 0x3c) {
          iVar3 = *(int *)(param_1 + 0x50);
          iVar1 = *(int *)(param_1 + 0x54);
          **(int **)(param_1 + 0xc) = iVar3;
          **(int **)(param_1 + 0x1c) = iVar3;
          **(int **)(param_1 + 0x2c) = iVar1 - iVar3;
          param_7 = *(int *)(param_1 + 0x40);
          param_8 = *(int *)(param_1 + 0x44);
        }
        *param_2 = local_20;
        param_2[1] = iStack_1c;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = param_7;
        param_2[5] = param_8;
        goto LAB_10074b66;
      }
    }
  }
  param_2[1] = -1;
  *param_2 = -1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
LAB_10074b66:
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

